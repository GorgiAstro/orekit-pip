#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldDateDetector.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldDateDetector::class$ = NULL;
        jmethodID *FieldDateDetector::mids$ = NULL;
        bool FieldDateDetector::live$ = false;
        jdouble FieldDateDetector::DEFAULT_MAX_CHECK = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_MIN_GAP = (jdouble) 0;
        jdouble FieldDateDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldDateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldDateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b88ac7839b633105] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/orekit/time/FieldTimeStamped;)V");
            mids$[mid_addEventDate_421e631f14d32a8c] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getDates_d751c1a57012b438] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_7fe4870c72836f1c] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/FieldDateDetector;");
            mids$[mid_create_b840c2e201ca014e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldDateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDateDetector::FieldDateDetector(const ::org::hipparchus::Field & a0, const JArray< ::org::orekit::time::FieldTimeStamped > & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b88ac7839b633105, a0.this$, a1.this$)) {}

        void FieldDateDetector::addEventDate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_421e631f14d32a8c], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldDateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldDateDetector::getDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
        }

        ::java::util::List FieldDateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_d751c1a57012b438]));
        }

        FieldDateDetector FieldDateDetector::withMinGap(jdouble a0) const
        {
          return FieldDateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_7fe4870c72836f1c], a0));
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
        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args);
        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args);
        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self);
        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg);
        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data);
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data);
        static PyGetSetDef t_FieldDateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDateDetector, date),
          DECLARE_GET_FIELD(t_FieldDateDetector, dates),
          DECLARE_GET_FIELD(t_FieldDateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldDateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, addEventDate, METH_O),
          DECLARE_METHOD(t_FieldDateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, getDates, METH_NOARGS),
          DECLARE_METHOD(t_FieldDateDetector, withMinGap, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDateDetector)[] = {
          { Py_tp_methods, t_FieldDateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldDateDetector_init_ },
          { Py_tp_getset, t_FieldDateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldDateDetector, t_FieldDateDetector, FieldDateDetector);
        PyObject *t_FieldDateDetector::wrap_Object(const FieldDateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDateDetector *self = (t_FieldDateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDateDetector), &PY_TYPE_DEF(FieldDateDetector), module, "FieldDateDetector", 0);
        }

        void t_FieldDateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "class_", make_descriptor(FieldDateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "wrapfn_", make_descriptor(t_FieldDateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldDateDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MAX_CHECK", make_descriptor(FieldDateDetector::DEFAULT_MAX_CHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_MIN_GAP", make_descriptor(FieldDateDetector::DEFAULT_MIN_GAP));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDateDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldDateDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldDateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldDateDetector::wrap_Object(FieldDateDetector(((t_FieldDateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldDateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDateDetector_of_(t_FieldDateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDateDetector_init_(t_FieldDateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::time::FieldTimeStamped > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldDateDetector object((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
          {
            INT_CALL(object = FieldDateDetector(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDateDetector_addEventDate(t_FieldDateDetector *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.addEventDate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEventDate", arg);
          return NULL;
        }

        static PyObject *t_FieldDateDetector_g(t_FieldDateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldDateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldDateDetector_getDate(t_FieldDateDetector *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDateDetector_getDates(t_FieldDateDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDates());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_FieldDateDetector_withMinGap(t_FieldDateDetector *self, PyObject *arg)
        {
          jdouble a0;
          FieldDateDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMinGap(a0));
            return t_FieldDateDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMinGap", arg);
          return NULL;
        }
        static PyObject *t_FieldDateDetector_get__parameters_(t_FieldDateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDateDetector_get__date(t_FieldDateDetector *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldDateDetector_get__dates(t_FieldDateDetector *self, void *data)
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
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DateDriver::class$ = NULL;
      jmethodID *DateDriver::mids$ = NULL;
      bool DateDriver::live$ = false;

      jclass DateDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DateDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5c054c461ea141a0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;Z)V");
          mids$[mid_getBaseDate_80e11148db499dda] = env->getMethodID(cls, "getBaseDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_isStart_eee3de00fe971136] = env->getMethodID(cls, "isStart", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateDriver::DateDriver(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jboolean a2) : ::org::orekit::utils::ParameterDriver(env->newObject(initializeClass, &mids$, mid_init$_5c054c461ea141a0, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::AbsoluteDate DateDriver::getBaseDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBaseDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate DateDriver::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jboolean DateDriver::isStart() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isStart_eee3de00fe971136]);
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
      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self);
      static PyObject *t_DateDriver_getDate(t_DateDriver *self);
      static PyObject *t_DateDriver_isStart(t_DateDriver *self);
      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data);
      static PyGetSetDef t_DateDriver__fields_[] = {
        DECLARE_GET_FIELD(t_DateDriver, baseDate),
        DECLARE_GET_FIELD(t_DateDriver, date),
        DECLARE_GET_FIELD(t_DateDriver, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateDriver__methods_[] = {
        DECLARE_METHOD(t_DateDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, getBaseDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, isStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateDriver)[] = {
        { Py_tp_methods, t_DateDriver__methods_ },
        { Py_tp_init, (void *) t_DateDriver_init_ },
        { Py_tp_getset, t_DateDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(DateDriver, t_DateDriver, DateDriver);

      void t_DateDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(DateDriver), &PY_TYPE_DEF(DateDriver), module, "DateDriver", 0);
      }

      void t_DateDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "class_", make_descriptor(DateDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "wrapfn_", make_descriptor(t_DateDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateDriver::initializeClass, 1)))
          return NULL;
        return t_DateDriver::wrap_Object(DateDriver(((t_DateDriver *) arg)->object.this$));
      }
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        jboolean a2;
        DateDriver object((jobject) NULL);

        if (!parseArgs(args, "ksZ", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = DateDriver(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_getDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_isStart(t_DateDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isStart());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isStart());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/AbstractFieldOfView.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *AbstractFieldOfView::class$ = NULL;
        jmethodID *AbstractFieldOfView::mids$ = NULL;
        bool AbstractFieldOfView::live$ = false;

        jclass AbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/AbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMargin_9981f74b2d109da6] = env->getMethodID(cls, "getMargin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractFieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_9981f74b2d109da6]);
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
        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self);
        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data);
        static PyGetSetDef t_AbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, getMargin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOfView)[] = {
          { Py_tp_methods, t_AbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldOfView, t_AbstractFieldOfView, AbstractFieldOfView);

        void t_AbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldOfView), &PY_TYPE_DEF(AbstractFieldOfView), module, "AbstractFieldOfView", 0);
        }

        void t_AbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "class_", make_descriptor(AbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "wrapfn_", make_descriptor(t_AbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldOfView::wrap_Object(AbstractFieldOfView(((t_AbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data)
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
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Edge::class$ = NULL;
          jmethodID *Edge::mids$ = NULL;
          bool Edge::live$ = false;

          jclass Edge::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Edge");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCircle_ba6c8cc83fdda773] = env->getMethodID(cls, "getCircle", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getEnd_02a6e0408ec403d4] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");
              mids$[mid_getLength_9981f74b2d109da6] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getPointAt_98a3eeef43dce47a] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getStart_02a6e0408ec403d4] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Circle Edge::getCircle() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Circle(env->callObjectMethod(this$, mids$[mid_getCircle_ba6c8cc83fdda773]));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getEnd() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getEnd_02a6e0408ec403d4]));
          }

          jdouble Edge::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Edge::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_98a3eeef43dce47a], a0));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getStart() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getStart_02a6e0408ec403d4]));
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
        namespace twod {
          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_getCircle(t_Edge *self);
          static PyObject *t_Edge_getEnd(t_Edge *self);
          static PyObject *t_Edge_getLength(t_Edge *self);
          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg);
          static PyObject *t_Edge_getStart(t_Edge *self);
          static PyObject *t_Edge_get__circle(t_Edge *self, void *data);
          static PyObject *t_Edge_get__end(t_Edge *self, void *data);
          static PyObject *t_Edge_get__length(t_Edge *self, void *data);
          static PyObject *t_Edge_get__start(t_Edge *self, void *data);
          static PyGetSetDef t_Edge__fields_[] = {
            DECLARE_GET_FIELD(t_Edge, circle),
            DECLARE_GET_FIELD(t_Edge, end),
            DECLARE_GET_FIELD(t_Edge, length),
            DECLARE_GET_FIELD(t_Edge, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Edge__methods_[] = {
            DECLARE_METHOD(t_Edge, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, getCircle, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getPointAt, METH_O),
            DECLARE_METHOD(t_Edge, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Edge)[] = {
            { Py_tp_methods, t_Edge__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Edge__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Edge)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Edge, t_Edge, Edge);

          void t_Edge::install(PyObject *module)
          {
            installType(&PY_TYPE(Edge), &PY_TYPE_DEF(Edge), module, "Edge", 0);
          }

          void t_Edge::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "class_", make_descriptor(Edge::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "wrapfn_", make_descriptor(t_Edge::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Edge::initializeClass, 1)))
              return NULL;
            return t_Edge::wrap_Object(Edge(((t_Edge *) arg)->object.this$));
          }
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Edge::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Edge_getCircle(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(result);
          }

          static PyObject *t_Edge_getEnd(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_getLength(t_Edge *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Edge_getStart(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_get__circle(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(value);
          }

          static PyObject *t_Edge_get__end(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }

          static PyObject *t_Edge_get__length(t_Edge *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Edge_get__start(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *MultiDirectionalSimplex::class$ = NULL;
            jmethodID *MultiDirectionalSimplex::mids$ = NULL;
            bool MultiDirectionalSimplex::live$ = false;

            jclass MultiDirectionalSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_11ecdbb5af7ed67d] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_aeadc0559b2462aa] = env->getMethodID(cls, "<init>", "([DDD)V");
                mids$[mid_init$_b8114caf5b78071b] = env->getMethodID(cls, "<init>", "([[DDD)V");
                mids$[mid_init$_aaed259e1b5f1153] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
                mids$[mid_iterate_db1894c33fb140cf] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_11ecdbb5af7ed67d, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_aeadc0559b2462aa, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_b8114caf5b78071b, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_aaed259e1b5f1153, a0, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

            void MultiDirectionalSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_db1894c33fb140cf], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args);

            static PyMethodDef t_MultiDirectionalSimplex__methods_[] = {
              DECLARE_METHOD(t_MultiDirectionalSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultiDirectionalSimplex)[] = {
              { Py_tp_methods, t_MultiDirectionalSimplex__methods_ },
              { Py_tp_init, (void *) t_MultiDirectionalSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultiDirectionalSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(MultiDirectionalSimplex, t_MultiDirectionalSimplex, MultiDirectionalSimplex);

            void t_MultiDirectionalSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(MultiDirectionalSimplex), &PY_TYPE_DEF(MultiDirectionalSimplex), module, "MultiDirectionalSimplex", 0);
            }

            void t_MultiDirectionalSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "class_", make_descriptor(MultiDirectionalSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "wrapfn_", make_descriptor(t_MultiDirectionalSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultiDirectionalSimplex::initializeClass, 1)))
                return NULL;
              return t_MultiDirectionalSimplex::wrap_Object(MultiDirectionalSimplex(((t_MultiDirectionalSimplex *) arg)->object.this$));
            }
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultiDirectionalSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2, a3));
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

            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MultiDirectionalSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/CompositeDataContext.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *CompositeDataContext::class$ = NULL;
      jmethodID *CompositeDataContext::mids$ = NULL;
      bool CompositeDataContext::live$ = false;

      jclass CompositeDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/CompositeDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_152a1420cf23415a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frames;Lorg/orekit/bodies/CelestialBodies;Lorg/orekit/forces/gravity/potential/GravityFields;Lorg/orekit/models/earth/GeoMagneticFields;)V");
          mids$[mid_getCelestialBodies_62495cefe741b009] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_34da2547798ee1dc] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_7d1b07207cbeab65] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_3af6c17fe31f8686] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_796d09eb9f0f96ef] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CompositeDataContext::CompositeDataContext(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::frames::Frames & a1, const ::org::orekit::bodies::CelestialBodies & a2, const ::org::orekit::forces::gravity::potential::GravityFields & a3, const ::org::orekit::models::earth::GeoMagneticFields & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_152a1420cf23415a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::bodies::CelestialBodies CompositeDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_62495cefe741b009]));
      }

      ::org::orekit::frames::Frames CompositeDataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_34da2547798ee1dc]));
      }

      ::org::orekit::models::earth::GeoMagneticFields CompositeDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_7d1b07207cbeab65]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields CompositeDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_3af6c17fe31f8686]));
      }

      ::org::orekit::time::TimeScales CompositeDataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_796d09eb9f0f96ef]));
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
      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data);
      static PyGetSetDef t_CompositeDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_CompositeDataContext, frames),
        DECLARE_GET_FIELD(t_CompositeDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, gravityFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeDataContext__methods_[] = {
        DECLARE_METHOD(t_CompositeDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeDataContext)[] = {
        { Py_tp_methods, t_CompositeDataContext__methods_ },
        { Py_tp_init, (void *) t_CompositeDataContext_init_ },
        { Py_tp_getset, t_CompositeDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeDataContext, t_CompositeDataContext, CompositeDataContext);

      void t_CompositeDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeDataContext), &PY_TYPE_DEF(CompositeDataContext), module, "CompositeDataContext", 0);
      }

      void t_CompositeDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "class_", make_descriptor(CompositeDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "wrapfn_", make_descriptor(t_CompositeDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeDataContext::initializeClass, 1)))
          return NULL;
        return t_CompositeDataContext::wrap_Object(CompositeDataContext(((t_CompositeDataContext *) arg)->object.this$));
      }
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::frames::Frames a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        ::org::orekit::forces::gravity::potential::GravityFields a3((jobject) NULL);
        ::org::orekit::models::earth::GeoMagneticFields a4((jobject) NULL);
        CompositeDataContext object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frames::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CompositeDataContext(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data)
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
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *EstimatedTroposphericModel::class$ = NULL;
          jmethodID *EstimatedTroposphericModel::mids$ = NULL;
          bool EstimatedTroposphericModel::live$ = false;
          ::java::lang::String *EstimatedTroposphericModel::TOTAL_ZENITH_DELAY = NULL;

          jclass EstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/EstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a7f59bfe7a238aee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_init$_fdcce5b00626d169] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/MappingFunction;D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              TOTAL_ZENITH_DELAY = new ::java::lang::String(env->getStaticObjectField(cls, "TOTAL_ZENITH_DELAY", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedTroposphericModel::EstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::MappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7f59bfe7a238aee, a0.this$, a1)) {}

          EstimatedTroposphericModel::EstimatedTroposphericModel(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::MappingFunction & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdcce5b00626d169, a0, a1, a2.this$, a3)) {}

          ::java::util::List EstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::CalculusFieldElement EstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble EstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
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
        namespace troposphere {
          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self);
          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_EstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_EstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_EstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedTroposphericModel, t_EstimatedTroposphericModel, EstimatedTroposphericModel);

          void t_EstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedTroposphericModel), &PY_TYPE_DEF(EstimatedTroposphericModel), module, "EstimatedTroposphericModel", 0);
          }

          void t_EstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "class_", make_descriptor(EstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "wrapfn_", make_descriptor(t_EstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedTroposphericModel), "TOTAL_ZENITH_DELAY", make_descriptor(j2p(*EstimatedTroposphericModel::TOTAL_ZENITH_DELAY)));
          }

          static PyObject *t_EstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedTroposphericModel::wrap_Object(EstimatedTroposphericModel(((t_EstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedTroposphericModel_init_(t_EstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::models::earth::troposphere::MappingFunction a0((jobject) NULL);
                jdouble a1;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::MappingFunction a2((jobject) NULL);
                jdouble a3;
                EstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "DDkD", ::org::orekit::models::earth::troposphere::MappingFunction::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = EstimatedTroposphericModel(a0, a1, a2, a3));
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

          static PyObject *t_EstimatedTroposphericModel_getParametersDrivers(t_EstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedTroposphericModel_pathDelay(t_EstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedTroposphericModel_get__parametersDrivers(t_EstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TDBScale::class$ = NULL;
      jmethodID *TDBScale::mids$ = NULL;
      bool TDBScale::live$ = false;

      jclass TDBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TDBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TDBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble TDBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TDBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String TDBScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TDBScale_getName(t_TDBScale *self);
      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args);
      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data);
      static PyGetSetDef t_TDBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TDBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TDBScale__methods_[] = {
        DECLARE_METHOD(t_TDBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TDBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TDBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TDBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TDBScale)[] = {
        { Py_tp_methods, t_TDBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TDBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TDBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TDBScale, t_TDBScale, TDBScale);

      void t_TDBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TDBScale), &PY_TYPE_DEF(TDBScale), module, "TDBScale", 0);
      }

      void t_TDBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "class_", make_descriptor(TDBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "wrapfn_", make_descriptor(t_TDBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TDBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TDBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TDBScale::initializeClass, 1)))
          return NULL;
        return t_TDBScale::wrap_Object(TDBScale(((t_TDBScale *) arg)->object.this$));
      }
      static PyObject *t_TDBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TDBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TDBScale_getName(t_TDBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TDBScale_offsetFromTAI(t_TDBScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_TDBScale_toString(t_TDBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TDBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TDBScale_get__name(t_TDBScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsBashforthFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsBashforthFieldIntegratorBuilder::live$ = false;

        jclass AdamsBashforthFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsBashforthFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegratorBuilder::AdamsBashforthFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsBashforthFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegratorBuilder, t_AdamsBashforthFieldIntegratorBuilder, AdamsBashforthFieldIntegratorBuilder);
        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(const AdamsBashforthFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegratorBuilder *self = (t_AdamsBashforthFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsBashforthFieldIntegratorBuilder), module, "AdamsBashforthFieldIntegratorBuilder", 0);
        }

        void t_AdamsBashforthFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "class_", make_descriptor(AdamsBashforthFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegratorBuilder::wrap_Object(AdamsBashforthFieldIntegratorBuilder(((t_AdamsBashforthFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_of_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegratorBuilder_init_(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsBashforthFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsBashforthFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_buildIntegrator(t_AdamsBashforthFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsBashforthFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsBashforthFieldIntegratorBuilder_get__parameters_(t_AdamsBashforthFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/WilcoxonSignedRankTest.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *WilcoxonSignedRankTest::class$ = NULL;
        jmethodID *WilcoxonSignedRankTest::mids$ = NULL;
        bool WilcoxonSignedRankTest::live$ = false;

        jclass WilcoxonSignedRankTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/WilcoxonSignedRankTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_49a3c82f9e34fc75] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/NaNStrategy;Lorg/hipparchus/stat/ranking/TiesStrategy;)V");
            mids$[mid_wilcoxonSignedRank_b01af8a77d4df96f] = env->getMethodID(cls, "wilcoxonSignedRank", "([D[D)D");
            mids$[mid_wilcoxonSignedRankTest_2cf76703ce30b165] = env->getMethodID(cls, "wilcoxonSignedRankTest", "([D[DZ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WilcoxonSignedRankTest::WilcoxonSignedRankTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        WilcoxonSignedRankTest::WilcoxonSignedRankTest(const ::org::hipparchus::stat::ranking::NaNStrategy & a0, const ::org::hipparchus::stat::ranking::TiesStrategy & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49a3c82f9e34fc75, a0.this$, a1.this$)) {}

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRank(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRank_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble WilcoxonSignedRankTest::wilcoxonSignedRankTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_wilcoxonSignedRankTest_2cf76703ce30b165], a0.this$, a1.this$, a2);
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
        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args);
        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args);

        static PyMethodDef t_WilcoxonSignedRankTest__methods_[] = {
          DECLARE_METHOD(t_WilcoxonSignedRankTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRank, METH_VARARGS),
          DECLARE_METHOD(t_WilcoxonSignedRankTest, wilcoxonSignedRankTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WilcoxonSignedRankTest)[] = {
          { Py_tp_methods, t_WilcoxonSignedRankTest__methods_ },
          { Py_tp_init, (void *) t_WilcoxonSignedRankTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WilcoxonSignedRankTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WilcoxonSignedRankTest, t_WilcoxonSignedRankTest, WilcoxonSignedRankTest);

        void t_WilcoxonSignedRankTest::install(PyObject *module)
        {
          installType(&PY_TYPE(WilcoxonSignedRankTest), &PY_TYPE_DEF(WilcoxonSignedRankTest), module, "WilcoxonSignedRankTest", 0);
        }

        void t_WilcoxonSignedRankTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "class_", make_descriptor(WilcoxonSignedRankTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "wrapfn_", make_descriptor(t_WilcoxonSignedRankTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WilcoxonSignedRankTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WilcoxonSignedRankTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WilcoxonSignedRankTest::initializeClass, 1)))
            return NULL;
          return t_WilcoxonSignedRankTest::wrap_Object(WilcoxonSignedRankTest(((t_WilcoxonSignedRankTest *) arg)->object.this$));
        }
        static PyObject *t_WilcoxonSignedRankTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WilcoxonSignedRankTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WilcoxonSignedRankTest_init_(t_WilcoxonSignedRankTest *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              WilcoxonSignedRankTest object((jobject) NULL);

              INT_CALL(object = WilcoxonSignedRankTest());
              self->object = object;
              break;
            }
           case 2:
            {
              ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::stat::ranking::TiesStrategy a1((jobject) NULL);
              PyTypeObject **p1;
              WilcoxonSignedRankTest object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, ::org::hipparchus::stat::ranking::TiesStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_, &a1, &p1, ::org::hipparchus::stat::ranking::t_TiesStrategy::parameters_))
              {
                INT_CALL(object = WilcoxonSignedRankTest(a0, a1));
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

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRank(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRank(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRank", args);
          return NULL;
        }

        static PyObject *t_WilcoxonSignedRankTest_wilcoxonSignedRankTest(t_WilcoxonSignedRankTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean a2;
          jdouble result;

          if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.wilcoxonSignedRankTest(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "wilcoxonSignedRankTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "org/orekit/rugged/utils/MaxSelector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MaxSelector::class$ = NULL;
        jmethodID *MaxSelector::mids$ = NULL;
        bool MaxSelector::live$ = false;

        jclass MaxSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MaxSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_b212acfae34f6ac6] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MaxSelector;");
            mids$[mid_selectFirst_0fc66ee74538f12c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MaxSelector MaxSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MaxSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_b212acfae34f6ac6]));
        }

        jboolean MaxSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_0fc66ee74538f12c], a0, a1);
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
        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args);
        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data);
        static PyGetSetDef t_MaxSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MaxSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MaxSelector__methods_[] = {
          DECLARE_METHOD(t_MaxSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MaxSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MaxSelector)[] = {
          { Py_tp_methods, t_MaxSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MaxSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MaxSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MaxSelector, t_MaxSelector, MaxSelector);

        void t_MaxSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MaxSelector), &PY_TYPE_DEF(MaxSelector), module, "MaxSelector", 0);
        }

        void t_MaxSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "class_", make_descriptor(MaxSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "wrapfn_", make_descriptor(t_MaxSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MaxSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MaxSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MaxSelector::initializeClass, 1)))
            return NULL;
          return t_MaxSelector::wrap_Object(MaxSelector(((t_MaxSelector *) arg)->object.this$));
        }
        static PyObject *t_MaxSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MaxSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MaxSelector_getInstance(PyTypeObject *type)
        {
          MaxSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MaxSelector::getInstance());
          return t_MaxSelector::wrap_Object(result);
        }

        static PyObject *t_MaxSelector_selectFirst(t_MaxSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MaxSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MaxSelector_get__instance(t_MaxSelector *self, void *data)
        {
          MaxSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MaxSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/GTest.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *GTest::class$ = NULL;
        jmethodID *GTest::mids$ = NULL;
        bool GTest::live$ = false;

        jclass GTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/GTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_f8078c674056fb4a] = env->getMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_8361d6bcedc1da1a] = env->getMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_f8078c674056fb4a] = env->getMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_8ea380ac7c124df6] = env->getMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_8361d6bcedc1da1a] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_0d632518d2300ac8] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_f8078c674056fb4a] = env->getMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_rootLogLikelihoodRatio_b846aea95df710a3] = env->getMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GTest::GTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble GTest::g(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jdouble GTest::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jdouble GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTest_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jboolean GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTest_8ea380ac7c124df6], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestDataSetsComparison_8361d6bcedc1da1a], a0.this$, a1.this$);
        }

        jboolean GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTestDataSetsComparison_0d632518d2300ac8], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestIntrinsic_f8078c674056fb4a], a0.this$, a1.this$);
        }

        jdouble GTest::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_rootLogLikelihoodRatio_b846aea95df710a3], a0, a1, a2, a3);
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
        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GTest_g(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args);

        static PyMethodDef t_GTest__methods_[] = {
          DECLARE_METHOD(t_GTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, g, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTest, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestIntrinsic, METH_VARARGS),
          DECLARE_METHOD(t_GTest, rootLogLikelihoodRatio, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GTest)[] = {
          { Py_tp_methods, t_GTest__methods_ },
          { Py_tp_init, (void *) t_GTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GTest, t_GTest, GTest);

        void t_GTest::install(PyObject *module)
        {
          installType(&PY_TYPE(GTest), &PY_TYPE_DEF(GTest), module, "GTest", 0);
        }

        void t_GTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "class_", make_descriptor(GTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "wrapfn_", make_descriptor(t_GTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GTest::initializeClass, 1)))
            return NULL;
          return t_GTest::wrap_Object(GTest(((t_GTest *) arg)->object.this$));
        }
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds)
        {
          GTest object((jobject) NULL);

          INT_CALL(object = GTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_GTest_g(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", args);
          return NULL;
        }

        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTest", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootLogLikelihoodRatio", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *DiscreteTroposphericModel::class$ = NULL;
          jmethodID *DiscreteTroposphericModel::mids$ = NULL;
          bool DiscreteTroposphericModel::live$ = false;

          jclass DiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/DiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_3e863f8cc7cde633] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_a07808bbc1ebff8d] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement DiscreteTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_3e863f8cc7cde633], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble DiscreteTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_a07808bbc1ebff8d], a0, a1.this$, a2.this$, a3.this$);
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
        namespace troposphere {
          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args);

          static PyMethodDef t_DiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_DiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_DiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(DiscreteTroposphericModel, t_DiscreteTroposphericModel, DiscreteTroposphericModel);

          void t_DiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(DiscreteTroposphericModel), &PY_TYPE_DEF(DiscreteTroposphericModel), module, "DiscreteTroposphericModel", 0);
          }

          void t_DiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "class_", make_descriptor(DiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "wrapfn_", make_descriptor(t_DiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_DiscreteTroposphericModel::wrap_Object(DiscreteTroposphericModel(((t_DiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Data::class$ = NULL;
              jmethodID *SsrIgm03Data::mids$ = NULL;
              bool SsrIgm03Data::live$ = false;

              jclass SsrIgm03Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_9a94dcb2534bfcee] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_d6ab429752e7c267] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_a878e7837a73c516] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_e6ed13e2bb347f8f] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_8fd427ab23829bf5] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Data::SsrIgm03Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm03Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_9a94dcb2534bfcee]));
              }

              jint SsrIgm03Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_d6ab429752e7c267]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm03Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_a878e7837a73c516]));
              }

              void SsrIgm03Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_e6ed13e2bb347f8f], a0.this$);
              }

              void SsrIgm03Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_8fd427ab23829bf5], a0);
              }

              void SsrIgm03Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_cdebebf3a62a7ec1], a0.this$);
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
              static PyObject *t_SsrIgm03Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Data_init_(t_SsrIgm03Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Data_getClockCorrection(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_getGnssIod(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_getOrbitCorrection(t_SsrIgm03Data *self);
              static PyObject *t_SsrIgm03Data_setClockCorrection(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_setGnssIod(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_setOrbitCorrection(t_SsrIgm03Data *self, PyObject *arg);
              static PyObject *t_SsrIgm03Data_get__clockCorrection(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__clockCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm03Data_get__gnssIod(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__gnssIod(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm03Data_get__orbitCorrection(t_SsrIgm03Data *self, void *data);
              static int t_SsrIgm03Data_set__orbitCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, clockCorrection),
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, gnssIod),
                DECLARE_GETSET_FIELD(t_SsrIgm03Data, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Data, setClockCorrection, METH_O),
                DECLARE_METHOD(t_SsrIgm03Data, setGnssIod, METH_O),
                DECLARE_METHOD(t_SsrIgm03Data, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Data)[] = {
                { Py_tp_methods, t_SsrIgm03Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Data_init_ },
                { Py_tp_getset, t_SsrIgm03Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Data, t_SsrIgm03Data, SsrIgm03Data);

              void t_SsrIgm03Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Data), &PY_TYPE_DEF(SsrIgm03Data), module, "SsrIgm03Data", 0);
              }

              void t_SsrIgm03Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "class_", make_descriptor(SsrIgm03Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "wrapfn_", make_descriptor(t_SsrIgm03Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Data::wrap_Object(SsrIgm03Data(((t_SsrIgm03Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Data_init_(t_SsrIgm03Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Data object((jobject) NULL);

                INT_CALL(object = SsrIgm03Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Data_getClockCorrection(t_SsrIgm03Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm03Data_getGnssIod(t_SsrIgm03Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Data_getOrbitCorrection(t_SsrIgm03Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm03Data_setClockCorrection(t_SsrIgm03Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_setGnssIod(t_SsrIgm03Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_setOrbitCorrection(t_SsrIgm03Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Data_get__clockCorrection(t_SsrIgm03Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm03Data_set__clockCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_SsrIgm03Data_get__gnssIod(t_SsrIgm03Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Data_set__gnssIod(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_SsrIgm03Data_get__orbitCorrection(t_SsrIgm03Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_SsrIgm03Data_set__orbitCorrection(t_SsrIgm03Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
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
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/ArrayFieldVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ArrayFieldVector::class$ = NULL;
      jmethodID *ArrayFieldVector::mids$ = NULL;
      bool ArrayFieldVector::live$ = false;

      jclass ArrayFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ArrayFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_79693579cf1d6b54] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_fde30977c9ff1b4e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_fd889dd47d71a554] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_bc7e8e596a7db6b1] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_eb6f5cf36a8e5529] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_4fe17ebc0e6c05cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_739201e4a53e1d39] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_8b3003ff2f930390] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/ArrayFieldVector;Z)V");
          mids$[mid_init$_9f3b43c70febfa9a] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_399daf55ca8a95b8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_9230bfe415edd134] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldVector;Lorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_init$_39523216e5e5321b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_943a3f3b5b2861b9] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_init$_91a5b42771d1d19d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_7bf885858263907b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_add_f34d04d7e9738aec] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_add_17fc5256c635037d] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_f34d04d7e9738aec] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_append_9576e351eaaaeeff] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_17fc5256c635037d] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_1f378a1e2fafd4da] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_ff90c3d463ea7188] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_dotProduct_a09dcda702fd70fc] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_f34d04d7e9738aec] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeDivide_17fc5256c635037d] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_f34d04d7e9738aec] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_ebeMultiply_17fc5256c635037d] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDataRef_eb5e61f0a5585705] = env->getMethodID(cls, "getDataRef", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_bae57aba20797b29] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_ae1290ffdac268ed] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_9576e351eaaaeeff] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9576e351eaaaeeff] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_1f378a1e2fafd4da] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_1f378a1e2fafd4da] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9576e351eaaaeeff] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9576e351eaaaeeff] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9576e351eaaaeeff] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_700a885a9e53a5ec] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_352168969c692677] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_f34d04d7e9738aec] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_projection_17fc5256c635037d] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_d6f1e197c99df44f] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_set_01f4d4941b9f371e] = env->getMethodID(cls, "set", "(ILorg/hipparchus/linear/ArrayFieldVector;)V");
          mids$[mid_setEntry_9f3b43c70febfa9a] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_9f6a0cf723c2763b] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_f34d04d7e9738aec] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/ArrayFieldVector;)Lorg/hipparchus/linear/ArrayFieldVector;");
          mids$[mid_subtract_17fc5256c635037d] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_eb5e61f0a5585705] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_walkInDefaultOrder_3fb4a592b41cc4b1] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_da260c9bcd5c518a] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_0dbecc976c2f23a8] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_823ce1f3bedac44a] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_3fb4a592b41cc4b1] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_da260c9bcd5c518a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0dbecc976c2f23a8] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_823ce1f3bedac44a] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_8fd427ab23829bf5] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");
          mids$[mid_checkVectorDimensions_fde30977c9ff1b4e] = env->getMethodID(cls, "checkVectorDimensions", "(Lorg/hipparchus/linear/FieldVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_79693579cf1d6b54, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fde30977c9ff1b4e, a0.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fd889dd47d71a554, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc7e8e596a7db6b1, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb6f5cf36a8e5529, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fe17ebc0e6c05cc, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_739201e4a53e1d39, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const ArrayFieldVector & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b3003ff2f930390, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(jint a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9f3b43c70febfa9a, a0, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_399daf55ca8a95b8, a0.this$, a1)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::linear::FieldVector & a0, const ::org::hipparchus::linear::FieldVector & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9230bfe415edd134, a0.this$, a1.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, const JArray< ::org::hipparchus::FieldElement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39523216e5e5321b, a0.this$, a1.this$, a2.this$)) {}

      ArrayFieldVector::ArrayFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_943a3f3b5b2861b9, a0.this$, a1, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91a5b42771d1d19d, a0.this$, a1.this$, a2)) {}

      ArrayFieldVector::ArrayFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7bf885858263907b, a0.this$, a1.this$, a2, a3)) {}

      ArrayFieldVector ArrayFieldVector::add(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_add_f34d04d7e9738aec], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_17fc5256c635037d], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::append(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_append_f34d04d7e9738aec], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_17fc5256c635037d], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_ff90c3d463ea7188], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_a09dcda702fd70fc], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeDivide(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_f34d04d7e9738aec], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_17fc5256c635037d], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::ebeMultiply(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_f34d04d7e9738aec], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_17fc5256c635037d], a0.this$));
      }

      jboolean ArrayFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::getDataRef() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getDataRef_eb5e61f0a5585705]));
      }

      jint ArrayFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_bae57aba20797b29], a0));
      }

      ::org::hipparchus::Field ArrayFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_ae1290ffdac268ed], a0, a1));
      }

      jint ArrayFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_1f378a1e2fafd4da]));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9576e351eaaaeeff], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ArrayFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_700a885a9e53a5ec], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix ArrayFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_352168969c692677], a0.this$));
      }

      ArrayFieldVector ArrayFieldVector::projection(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_projection_f34d04d7e9738aec], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_17fc5256c635037d], a0.this$));
      }

      void ArrayFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_d6f1e197c99df44f], a0.this$);
      }

      void ArrayFieldVector::set(jint a0, const ArrayFieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_set_01f4d4941b9f371e], a0, a1.this$);
      }

      void ArrayFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_9f3b43c70febfa9a], a0, a1.this$);
      }

      void ArrayFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_9f6a0cf723c2763b], a0, a1.this$);
      }

      ArrayFieldVector ArrayFieldVector::subtract(const ArrayFieldVector & a0) const
      {
        return ArrayFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_f34d04d7e9738aec], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector ArrayFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_17fc5256c635037d], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > ArrayFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_eb5e61f0a5585705]));
      }

      ::java::lang::String ArrayFieldVector::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_3fb4a592b41cc4b1], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_da260c9bcd5c518a], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_0dbecc976c2f23a8], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_823ce1f3bedac44a], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_3fb4a592b41cc4b1], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_da260c9bcd5c518a], a0.this$));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0dbecc976c2f23a8], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement ArrayFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_823ce1f3bedac44a], a0.this$, a1, a2));
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
      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args);
      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg);
      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self);
      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args);
      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data);
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data);
      static PyGetSetDef t_ArrayFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_ArrayFieldVector, dataRef),
        DECLARE_GET_FIELD(t_ArrayFieldVector, dimension),
        DECLARE_GET_FIELD(t_ArrayFieldVector, field),
        DECLARE_GET_FIELD(t_ArrayFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ArrayFieldVector__methods_[] = {
        DECLARE_METHOD(t_ArrayFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArrayFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, dotProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeDivide, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, ebeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_ArrayFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, projection, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, set, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_ArrayFieldVector, toString, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_ArrayFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArrayFieldVector)[] = {
        { Py_tp_methods, t_ArrayFieldVector__methods_ },
        { Py_tp_init, (void *) t_ArrayFieldVector_init_ },
        { Py_tp_getset, t_ArrayFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArrayFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArrayFieldVector, t_ArrayFieldVector, ArrayFieldVector);
      PyObject *t_ArrayFieldVector::wrap_Object(const ArrayFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ArrayFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ArrayFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ArrayFieldVector *self = (t_ArrayFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ArrayFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(ArrayFieldVector), &PY_TYPE_DEF(ArrayFieldVector), module, "ArrayFieldVector", 0);
      }

      void t_ArrayFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "class_", make_descriptor(ArrayFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "wrapfn_", make_descriptor(t_ArrayFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArrayFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArrayFieldVector::initializeClass, 1)))
          return NULL;
        return t_ArrayFieldVector::wrap_Object(ArrayFieldVector(((t_ArrayFieldVector *) arg)->object.this$));
      }
      static PyObject *t_ArrayFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArrayFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArrayFieldVector_of_(t_ArrayFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ArrayFieldVector_init_(t_ArrayFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KZ", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
            PyTypeObject **p1;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldVector::initializeClass, ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::FieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            ArrayFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[KII", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3))
            {
              INT_CALL(object = ArrayFieldVector(a0, a1, a2, a3));
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

      static PyObject *t_ArrayFieldVector_add(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_append(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_copy(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_dotProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeDivide(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeDivide(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_ebeMultiply(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.ebeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_equals(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ArrayFieldVector_getDataRef(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_getDimension(t_ArrayFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ArrayFieldVector_getEntry(t_ArrayFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_getField(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_getSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_hashCode(t_ArrayFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ArrayFieldVector_mapAdd(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapAddToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivide(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapDivideToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapInv(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapInvToSelf(t_ArrayFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ArrayFieldVector_mapMultiply(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapMultiplyToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtract(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_mapSubtractToSelf(t_ArrayFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_outerProduct(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_projection(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.projection(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projection", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_set(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.set(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jint a0;
            ArrayFieldVector a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "IK", ArrayFieldVector::initializeClass, &a0, &a1, &p1, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(self->object.set(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "set", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setEntry(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_setSubVector(t_ArrayFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_subtract(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ArrayFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ArrayFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ArrayFieldVector::initializeClass, &a0, &p0, t_ArrayFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_ArrayFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_toArray(t_ArrayFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_toString(t_ArrayFieldVector *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ArrayFieldVector), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ArrayFieldVector_walkInDefaultOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_ArrayFieldVector_walkInOptimizedOrder(t_ArrayFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_ArrayFieldVector_get__parameters_(t_ArrayFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ArrayFieldVector_get__dataRef(t_ArrayFieldVector *self, void *data)
      {
        JArray< ::org::hipparchus::FieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_ArrayFieldVector_get__dimension(t_ArrayFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ArrayFieldVector_get__field(t_ArrayFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/NeQuickModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *NeQuickModel::class$ = NULL;
          jmethodID *NeQuickModel::mids$ = NULL;
          bool NeQuickModel::live$ = false;

          jclass NeQuickModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/NeQuickModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_4c4171e8001c118b] = env->getMethodID(cls, "<init>", "([DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_d2f5e0e8b7e00e80] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_c84aeff9124fe654] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_stec_e7bdbe1bb960bc0e] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
              mids$[mid_stec_4b0f268997a4a1b8] = env->getMethodID(cls, "stec", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

          NeQuickModel::NeQuickModel(const JArray< jdouble > & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c4171e8001c118b, a0.this$, a1.this$)) {}

          ::java::util::List NeQuickModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          jdouble NeQuickModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_d2f5e0e8b7e00e80], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_c84aeff9124fe654], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble NeQuickModel::stec(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::GeodeticPoint & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_stec_e7bdbe1bb960bc0e], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement NeQuickModel::stec(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::bodies::FieldGeodeticPoint & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_stec_4b0f268997a4a1b8], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self);
          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args);
          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data);
          static PyGetSetDef t_NeQuickModel__fields_[] = {
            DECLARE_GET_FIELD(t_NeQuickModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NeQuickModel__methods_[] = {
            DECLARE_METHOD(t_NeQuickModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NeQuickModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_NeQuickModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_NeQuickModel, stec, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NeQuickModel)[] = {
            { Py_tp_methods, t_NeQuickModel__methods_ },
            { Py_tp_init, (void *) t_NeQuickModel_init_ },
            { Py_tp_getset, t_NeQuickModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NeQuickModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NeQuickModel, t_NeQuickModel, NeQuickModel);

          void t_NeQuickModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NeQuickModel), &PY_TYPE_DEF(NeQuickModel), module, "NeQuickModel", 0);
          }

          void t_NeQuickModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "class_", make_descriptor(NeQuickModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "wrapfn_", make_descriptor(t_NeQuickModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NeQuickModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NeQuickModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NeQuickModel::initializeClass, 1)))
              return NULL;
            return t_NeQuickModel::wrap_Object(NeQuickModel(((t_NeQuickModel *) arg)->object.this$));
          }
          static PyObject *t_NeQuickModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NeQuickModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NeQuickModel_init_(t_NeQuickModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = NeQuickModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                NeQuickModel object((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = NeQuickModel(a0, a1));
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

          static PyObject *t_NeQuickModel_getParametersDrivers(t_NeQuickModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_NeQuickModel_pathDelay(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_stec(t_NeQuickModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::bodies::FieldGeodeticPoint a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.stec(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "stec", args);
            return NULL;
          }

          static PyObject *t_NeQuickModel_get__parametersDrivers(t_NeQuickModel *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/DTM2000.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000::class$ = NULL;
          jmethodID *DTM2000::mids$ = NULL;
          bool DTM2000::live$ = false;

          jclass DTM2000::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_58cc3d6f9c6a0dd1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_e1b599b0430d755c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_0c5821935d445848] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_65e73ef68b3713d0] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_d08bf03ff29ff983] = env->getMethodID(cls, "getDensity", "(IDDDDDDDD)D");
              mids$[mid_getDensity_65bb98ccbc3acfcf] = env->getMethodID(cls, "getDensity", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_58cc3d6f9c6a0dd1, a0.this$, a1.this$, a2.this$)) {}

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1b599b0430d755c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_0c5821935d445848], a0.this$, a1.this$, a2.this$));
          }

          jdouble DTM2000::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_65e73ef68b3713d0], a0.this$, a1.this$, a2.this$);
          }

          jdouble DTM2000::getDensity(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_d08bf03ff29ff983], a0, a1, a2, a3, a4, a5, a6, a7, a8);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_65bb98ccbc3acfcf], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8));
          }

          ::org::orekit::frames::Frame DTM2000::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
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
          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args);
          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self);
          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data);
          static PyGetSetDef t_DTM2000__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000__methods_[] = {
            DECLARE_METHOD(t_DTM2000, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_DTM2000, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000)[] = {
            { Py_tp_methods, t_DTM2000__methods_ },
            { Py_tp_init, (void *) t_DTM2000_init_ },
            { Py_tp_getset, t_DTM2000__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DTM2000, t_DTM2000, DTM2000);

          void t_DTM2000::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000), &PY_TYPE_DEF(DTM2000), module, "DTM2000", 0);
          }

          void t_DTM2000::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "class_", make_descriptor(DTM2000::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "wrapfn_", make_descriptor(t_DTM2000::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000::initializeClass, 1)))
              return NULL;
            return t_DTM2000::wrap_Object(DTM2000(((t_DTM2000 *) arg)->object.this$));
          }
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2, a3));
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

          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 9:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble result;

                if (!parseArgs(args, "IDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IKKKKDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ODEIntegratorBuilder::class$ = NULL;
        jmethodID *ODEIntegratorBuilder::mids$ = NULL;
        bool ODEIntegratorBuilder::live$ = false;

        jclass ODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractIntegrator ODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_ODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEIntegratorBuilder, t_ODEIntegratorBuilder, ODEIntegratorBuilder);

        void t_ODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEIntegratorBuilder), &PY_TYPE_DEF(ODEIntegratorBuilder), module, "ODEIntegratorBuilder", 0);
        }

        void t_ODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "class_", make_descriptor(ODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "wrapfn_", make_descriptor(t_ODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ODEIntegratorBuilder::wrap_Object(ODEIntegratorBuilder(((t_ODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmHeader::class$ = NULL;
            jmethodID *OdmHeader::mids$ = NULL;
            bool OdmHeader::live$ = false;

            jclass OdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            OdmHeader::OdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_OdmHeader__methods_[] = {
              DECLARE_METHOD(t_OdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmHeader)[] = {
              { Py_tp_methods, t_OdmHeader__methods_ },
              { Py_tp_init, (void *) t_OdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(OdmHeader, t_OdmHeader, OdmHeader);

            void t_OdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmHeader), &PY_TYPE_DEF(OdmHeader), module, "OdmHeader", 0);
            }

            void t_OdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "class_", make_descriptor(OdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "wrapfn_", make_descriptor(t_OdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmHeader::initializeClass, 1)))
                return NULL;
              return t_OdmHeader::wrap_Object(OdmHeader(((t_OdmHeader *) arg)->object.this$));
            }
            static PyObject *t_OdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_OdmHeader_init_(t_OdmHeader *self, PyObject *args, PyObject *kwds)
            {
              OdmHeader object((jobject) NULL);

              INT_CALL(object = OdmHeader());
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
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToGroundMapping.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *Observables::class$ = NULL;
          jmethodID *Observables::mids$ = NULL;
          bool Observables::live$ = false;

          jclass Observables::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/Observables");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_addGroundMapping_21e736b4bc384718] = env->getMethodID(cls, "addGroundMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;)V");
              mids$[mid_addInterMapping_20c9447629790434] = env->getMethodID(cls, "addInterMapping", "(Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;)V");
              mids$[mid_getGroundMapping_08c1775566c32e10] = env->getMethodID(cls, "getGroundMapping", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToGroundMapping;");
              mids$[mid_getGroundMappings_3bfef5c77ceb081a] = env->getMethodID(cls, "getGroundMappings", "()Ljava/util/Collection;");
              mids$[mid_getInterMapping_47130451895e05bd] = env->getMethodID(cls, "getInterMapping", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/rugged/adjustment/measurements/SensorToSensorMapping;");
              mids$[mid_getInterMappings_3bfef5c77ceb081a] = env->getMethodID(cls, "getInterMappings", "()Ljava/util/Collection;");
              mids$[mid_getNbModels_d6ab429752e7c267] = env->getMethodID(cls, "getNbModels", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Observables::Observables(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

          void Observables::addGroundMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGroundMapping_21e736b4bc384718], a0.this$);
          }

          void Observables::addInterMapping(const ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addInterMapping_20c9447629790434], a0.this$);
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping Observables::getGroundMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping(env->callObjectMethod(this$, mids$[mid_getGroundMapping_08c1775566c32e10], a0.this$, a1.this$));
          }

          ::java::util::Collection Observables::getGroundMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getGroundMappings_3bfef5c77ceb081a]));
          }

          ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping Observables::getInterMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping(env->callObjectMethod(this$, mids$[mid_getInterMapping_47130451895e05bd], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::java::util::Collection Observables::getInterMappings() const
          {
            return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getInterMappings_3bfef5c77ceb081a]));
          }

          jint Observables::getNbModels() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbModels_d6ab429752e7c267]);
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
      namespace adjustment {
        namespace measurements {
          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg);
          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getGroundMappings(t_Observables *self);
          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args);
          static PyObject *t_Observables_getInterMappings(t_Observables *self);
          static PyObject *t_Observables_getNbModels(t_Observables *self);
          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data);
          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data);
          static PyGetSetDef t_Observables__fields_[] = {
            DECLARE_GET_FIELD(t_Observables, groundMappings),
            DECLARE_GET_FIELD(t_Observables, interMappings),
            DECLARE_GET_FIELD(t_Observables, nbModels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Observables__methods_[] = {
            DECLARE_METHOD(t_Observables, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Observables, addGroundMapping, METH_O),
            DECLARE_METHOD(t_Observables, addInterMapping, METH_O),
            DECLARE_METHOD(t_Observables, getGroundMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getGroundMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getInterMapping, METH_VARARGS),
            DECLARE_METHOD(t_Observables, getInterMappings, METH_NOARGS),
            DECLARE_METHOD(t_Observables, getNbModels, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Observables)[] = {
            { Py_tp_methods, t_Observables__methods_ },
            { Py_tp_init, (void *) t_Observables_init_ },
            { Py_tp_getset, t_Observables__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Observables)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Observables, t_Observables, Observables);

          void t_Observables::install(PyObject *module)
          {
            installType(&PY_TYPE(Observables), &PY_TYPE_DEF(Observables), module, "Observables", 0);
          }

          void t_Observables::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "class_", make_descriptor(Observables::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "wrapfn_", make_descriptor(t_Observables::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Observables), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Observables_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Observables::initializeClass, 1)))
              return NULL;
            return t_Observables::wrap_Object(Observables(((t_Observables *) arg)->object.this$));
          }
          static PyObject *t_Observables_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Observables::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Observables_init_(t_Observables *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            Observables object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Observables(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Observables_addGroundMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGroundMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGroundMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_addInterMapping(t_Observables *self, PyObject *arg)
          {
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addInterMapping(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addInterMapping", arg);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToGroundMapping result((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getGroundMapping(a0, a1));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToGroundMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getGroundMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getGroundMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToGroundMapping));
          }

          static PyObject *t_Observables_getInterMapping(t_Observables *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::rugged::adjustment::measurements::SensorToSensorMapping result((jobject) NULL);

            if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getInterMapping(a0, a1, a2, a3));
              return ::org::orekit::rugged::adjustment::measurements::t_SensorToSensorMapping::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInterMapping", args);
            return NULL;
          }

          static PyObject *t_Observables_getInterMappings(t_Observables *self)
          {
            ::java::util::Collection result((jobject) NULL);
            OBJ_CALL(result = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::adjustment::measurements::PY_TYPE(SensorToSensorMapping));
          }

          static PyObject *t_Observables_getNbModels(t_Observables *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbModels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Observables_get__groundMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getGroundMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__interMappings(t_Observables *self, void *data)
          {
            ::java::util::Collection value((jobject) NULL);
            OBJ_CALL(value = self->object.getInterMappings());
            return ::java::util::t_Collection::wrap_Object(value);
          }

          static PyObject *t_Observables_get__nbModels(t_Observables *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbModels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue::class$ = NULL;
          jmethodID *RecordAndContinue::mids$ = NULL;
          bool RecordAndContinue::live$ = false;

          jclass RecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_d751c1a57012b438] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordAndContinue::RecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          RecordAndContinue::RecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

          void RecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          ::org::hipparchus::ode::events::Action RecordAndContinue::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
          }

          ::java::util::List RecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_d751c1a57012b438]));
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
          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args);
          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data);
          static PyGetSetDef t_RecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue, events),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_RecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue)[] = {
            { Py_tp_methods, t_RecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_RecordAndContinue_init_ },
            { Py_tp_getset, t_RecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue, t_RecordAndContinue, RecordAndContinue);

          void t_RecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue), &PY_TYPE_DEF(RecordAndContinue), module, "RecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(RecordAndContinue$Event)));
          }

          void t_RecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "class_", make_descriptor(RecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "wrapfn_", make_descriptor(t_RecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue::wrap_Object(RecordAndContinue(((t_RecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RecordAndContinue object((jobject) NULL);

                INT_CALL(object = RecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                RecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RecordAndContinue(a0));
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

          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args)
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

          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(RecordAndContinue$Event));
          }

          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019Data::class$ = NULL;
              jmethodID *Rtcm1019Data::mids$ = NULL;
              bool Rtcm1019Data::live$ = false;

              jclass Rtcm1019Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGpsCodeOnL2_d6ab429752e7c267] = env->getMethodID(cls, "getGpsCodeOnL2", "()I");
                  mids$[mid_getGpsFitInterval_d6ab429752e7c267] = env->getMethodID(cls, "getGpsFitInterval", "()I");
                  mids$[mid_getGpsL2PDataFlag_eee3de00fe971136] = env->getMethodID(cls, "getGpsL2PDataFlag", "()Z");
                  mids$[mid_getGpsNavigationMessage_4ed25e280f251036] = env->getMethodID(cls, "getGpsNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsNavigationMessage_6ee044ce63e763ab] = env->getMethodID(cls, "getGpsNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;");
                  mids$[mid_getGpsToc_9981f74b2d109da6] = env->getMethodID(cls, "getGpsToc", "()D");
                  mids$[mid_setGpsCodeOnL2_8fd427ab23829bf5] = env->getMethodID(cls, "setGpsCodeOnL2", "(I)V");
                  mids$[mid_setGpsFitInterval_8fd427ab23829bf5] = env->getMethodID(cls, "setGpsFitInterval", "(I)V");
                  mids$[mid_setGpsL2PDataFlag_b35db77cae58639e] = env->getMethodID(cls, "setGpsL2PDataFlag", "(Z)V");
                  mids$[mid_setGpsNavigationMessage_721b6091f6242c29] = env->getMethodID(cls, "setGpsNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
                  mids$[mid_setGpsToc_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setGpsToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019Data::Rtcm1019Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint Rtcm1019Data::getGpsCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsCodeOnL2_d6ab429752e7c267]);
              }

              jint Rtcm1019Data::getGpsFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getGpsFitInterval_d6ab429752e7c267]);
              }

              jboolean Rtcm1019Data::getGpsL2PDataFlag() const
              {
                return env->callBooleanMethod(this$, mids$[mid_getGpsL2PDataFlag_eee3de00fe971136]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_4ed25e280f251036]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage Rtcm1019Data::getGpsNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGpsNavigationMessage_6ee044ce63e763ab], a0.this$));
              }

              jdouble Rtcm1019Data::getGpsToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGpsToc_9981f74b2d109da6]);
              }

              void Rtcm1019Data::setGpsCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsCodeOnL2_8fd427ab23829bf5], a0);
              }

              void Rtcm1019Data::setGpsFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsFitInterval_8fd427ab23829bf5], a0);
              }

              void Rtcm1019Data::setGpsL2PDataFlag(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsL2PDataFlag_b35db77cae58639e], a0);
              }

              void Rtcm1019Data::setGpsNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsNavigationMessage_721b6091f6242c29], a0.this$);
              }

              void Rtcm1019Data::setGpsToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGpsToc_1ad26e8c8c0cd65b], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args);
              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self);
              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg);
              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data);
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1019Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsL2PDataFlag),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1019Data, gpsToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsL2PDataFlag, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1019Data, getGpsToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsL2PDataFlag, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1019Data, setGpsToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019Data)[] = {
                { Py_tp_methods, t_Rtcm1019Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019Data_init_ },
                { Py_tp_getset, t_Rtcm1019Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1019Data, t_Rtcm1019Data, Rtcm1019Data);

              void t_Rtcm1019Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019Data), &PY_TYPE_DEF(Rtcm1019Data), module, "Rtcm1019Data", 0);
              }

              void t_Rtcm1019Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "class_", make_descriptor(Rtcm1019Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "wrapfn_", make_descriptor(t_Rtcm1019Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019Data::wrap_Object(Rtcm1019Data(((t_Rtcm1019Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1019Data_init_(t_Rtcm1019Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1019Data object((jobject) NULL);

                INT_CALL(object = Rtcm1019Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1019Data_getGpsCodeOnL2(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsFitInterval(t_Rtcm1019Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1019Data_getGpsL2PDataFlag(t_Rtcm1019Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1019Data_getGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGpsNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGpsNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGpsNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_getGpsToc(t_Rtcm1019Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGpsToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1019Data_setGpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsFitInterval(t_Rtcm1019Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGpsFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setGpsL2PDataFlag(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsL2PDataFlag", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGpsNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_setGpsToc(t_Rtcm1019Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGpsToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGpsToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1019Data_get__gpsCodeOnL2(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsCodeOnL2(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsFitInterval(t_Rtcm1019Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGpsFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1019Data_set__gpsFitInterval(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGpsFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsL2PDataFlag(t_Rtcm1019Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.getGpsL2PDataFlag());
                Py_RETURN_BOOL(value);
              }
              static int t_Rtcm1019Data_set__gpsL2PDataFlag(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setGpsL2PDataFlag(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsL2PDataFlag", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsNavigationMessage(t_Rtcm1019Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGpsNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GPSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1019Data_set__gpsNavigationMessage(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGpsNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1019Data_get__gpsToc(t_Rtcm1019Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGpsToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1019Data_set__gpsToc(t_Rtcm1019Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGpsToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gpsToc", arg);
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
#include "org/orekit/orbits/OrbitBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
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
          mids$[mid_init$_ccb0bb3e7b6ef2a9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/propagation/Propagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_9e247e5fad360ea6] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitBlender::OrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::propagation::Propagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ccb0bb3e7b6ef2a9, a0.this$, a1.this$, a2.this$)) {}
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
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/lang/InstantiationException.h"
#include "java/io/IOException.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages$UTF8Control::class$ = NULL;
      jmethodID *OrekitMessages$UTF8Control::mids$ = NULL;
      bool OrekitMessages$UTF8Control::live$ = false;

      jclass OrekitMessages$UTF8Control::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages$UTF8Control");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_newBundle_9d8ce1b08b92301a] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitMessages$UTF8Control::OrekitMessages$UTF8Control() : ::java::util::ResourceBundle$Control(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::java::util::ResourceBundle OrekitMessages$UTF8Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
      {
        return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_9d8ce1b08b92301a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args);
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data);
      static PyGetSetDef t_OrekitMessages$UTF8Control__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages$UTF8Control, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages$UTF8Control__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages$UTF8Control, newBundle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages$UTF8Control)[] = {
        { Py_tp_methods, t_OrekitMessages$UTF8Control__methods_ },
        { Py_tp_init, (void *) t_OrekitMessages$UTF8Control_init_ },
        { Py_tp_getset, t_OrekitMessages$UTF8Control__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages$UTF8Control)[] = {
        &PY_TYPE_DEF(::java::util::ResourceBundle$Control),
        NULL
      };

      DEFINE_TYPE(OrekitMessages$UTF8Control, t_OrekitMessages$UTF8Control, OrekitMessages$UTF8Control);
      PyObject *t_OrekitMessages$UTF8Control::wrap_Object(const OrekitMessages$UTF8Control& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages$UTF8Control::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages$UTF8Control::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages$UTF8Control *self = (t_OrekitMessages$UTF8Control *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages$UTF8Control::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages$UTF8Control), &PY_TYPE_DEF(OrekitMessages$UTF8Control), module, "OrekitMessages$UTF8Control", 0);
      }

      void t_OrekitMessages$UTF8Control::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "class_", make_descriptor(OrekitMessages$UTF8Control::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "wrapfn_", make_descriptor(t_OrekitMessages$UTF8Control::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages$UTF8Control), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitMessages$UTF8Control_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages$UTF8Control::wrap_Object(OrekitMessages$UTF8Control(((t_OrekitMessages$UTF8Control *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages$UTF8Control_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages$UTF8Control::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages$UTF8Control_of_(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrekitMessages$UTF8Control_init_(t_OrekitMessages$UTF8Control *self, PyObject *args, PyObject *kwds)
      {
        OrekitMessages$UTF8Control object((jobject) NULL);

        INT_CALL(object = OrekitMessages$UTF8Control());
        self->object = object;
        self->parameters[0] = ::org::orekit::errors::PY_TYPE(OrekitMessages);

        return 0;
      }

      static PyObject *t_OrekitMessages$UTF8Control_newBundle(t_OrekitMessages$UTF8Control *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::util::Locale a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::ClassLoader a3((jobject) NULL);
        jboolean a4;
        ::java::util::ResourceBundle result((jobject) NULL);

        if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
          return ::java::util::t_ResourceBundle::wrap_Object(result);
        }

        return callSuper(PY_TYPE(OrekitMessages$UTF8Control), (PyObject *) self, "newBundle", args, 2);
      }
      static PyObject *t_OrekitMessages$UTF8Control_get__parameters_(t_OrekitMessages$UTF8Control *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *ClockCorrectionsProvider::class$ = NULL;
          jmethodID *ClockCorrectionsProvider::mids$ = NULL;
          bool ClockCorrectionsProvider::live$ = false;
          ::java::lang::String *ClockCorrectionsProvider::CLOCK_CORRECTIONS = NULL;

          jclass ClockCorrectionsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4d8844c78275ffbe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSClockElements;)V");
              mids$[mid_getAdditionalState_e8a4ac02afc72623] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLOCK_CORRECTIONS = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_CORRECTIONS", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ClockCorrectionsProvider::ClockCorrectionsProvider(const ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d8844c78275ffbe, a0.this$)) {}

          JArray< jdouble > ClockCorrectionsProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_e8a4ac02afc72623], a0.this$));
          }

          ::java::lang::String ClockCorrectionsProvider::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
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
          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self);
          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data);
          static PyGetSetDef t_ClockCorrectionsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ClockCorrectionsProvider, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ClockCorrectionsProvider__methods_[] = {
            DECLARE_METHOD(t_ClockCorrectionsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getAdditionalState, METH_O),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ClockCorrectionsProvider)[] = {
            { Py_tp_methods, t_ClockCorrectionsProvider__methods_ },
            { Py_tp_init, (void *) t_ClockCorrectionsProvider_init_ },
            { Py_tp_getset, t_ClockCorrectionsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ClockCorrectionsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ClockCorrectionsProvider, t_ClockCorrectionsProvider, ClockCorrectionsProvider);

          void t_ClockCorrectionsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ClockCorrectionsProvider), &PY_TYPE_DEF(ClockCorrectionsProvider), module, "ClockCorrectionsProvider", 0);
          }

          void t_ClockCorrectionsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "class_", make_descriptor(ClockCorrectionsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "wrapfn_", make_descriptor(t_ClockCorrectionsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "boxfn_", make_descriptor(boxObject));
            env->getClass(ClockCorrectionsProvider::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "CLOCK_CORRECTIONS", make_descriptor(j2p(*ClockCorrectionsProvider::CLOCK_CORRECTIONS)));
          }

          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ClockCorrectionsProvider::initializeClass, 1)))
              return NULL;
            return t_ClockCorrectionsProvider::wrap_Object(ClockCorrectionsProvider(((t_ClockCorrectionsProvider *) arg)->object.this$));
          }
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ClockCorrectionsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements a0((jobject) NULL);
            ClockCorrectionsProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements::initializeClass, &a0))
            {
              INT_CALL(object = ClockCorrectionsProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg)
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

          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Header::class$ = NULL;
              jmethodID *SsrIm201Header::mids$ = NULL;
              bool SsrIm201Header::live$ = false;

              jclass SsrIm201Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfIonosphericLayers_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfIonosphericLayers", "()I");
                  mids$[mid_getVtecQualityIndicator_9981f74b2d109da6] = env->getMethodID(cls, "getVtecQualityIndicator", "()D");
                  mids$[mid_setNumberOfIonosphericLayers_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfIonosphericLayers", "(I)V");
                  mids$[mid_setVtecQualityIndicator_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setVtecQualityIndicator", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Header::SsrIm201Header() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jint SsrIm201Header::getNumberOfIonosphericLayers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfIonosphericLayers_d6ab429752e7c267]);
              }

              jdouble SsrIm201Header::getVtecQualityIndicator() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getVtecQualityIndicator_9981f74b2d109da6]);
              }

              void SsrIm201Header::setNumberOfIonosphericLayers(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfIonosphericLayers_8fd427ab23829bf5], a0);
              }

              void SsrIm201Header::setVtecQualityIndicator(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setVtecQualityIndicator_1ad26e8c8c0cd65b], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self);
              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg);
              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data);
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Header, numberOfIonosphericLayers),
                DECLARE_GETSET_FIELD(t_SsrIm201Header, vtecQualityIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Header__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Header, getNumberOfIonosphericLayers, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, getVtecQualityIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Header, setNumberOfIonosphericLayers, METH_O),
                DECLARE_METHOD(t_SsrIm201Header, setVtecQualityIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Header)[] = {
                { Py_tp_methods, t_SsrIm201Header__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Header_init_ },
                { Py_tp_getset, t_SsrIm201Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIm201Header, t_SsrIm201Header, SsrIm201Header);

              void t_SsrIm201Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Header), &PY_TYPE_DEF(SsrIm201Header), module, "SsrIm201Header", 0);
              }

              void t_SsrIm201Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "class_", make_descriptor(SsrIm201Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "wrapfn_", make_descriptor(t_SsrIm201Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Header::wrap_Object(SsrIm201Header(((t_SsrIm201Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Header_init_(t_SsrIm201Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Header object((jobject) NULL);

                INT_CALL(object = SsrIm201Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Header_getNumberOfIonosphericLayers(t_SsrIm201Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Header_getVtecQualityIndicator(t_SsrIm201Header *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Header_setNumberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfIonosphericLayers(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfIonosphericLayers", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_setVtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setVtecQualityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setVtecQualityIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Header_get__numberOfIonosphericLayers(t_SsrIm201Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfIonosphericLayers());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Header_set__numberOfIonosphericLayers(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfIonosphericLayers(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfIonosphericLayers", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Header_get__vtecQualityIndicator(t_SsrIm201Header *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getVtecQualityIndicator());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Header_set__vtecQualityIndicator(t_SsrIm201Header *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setVtecQualityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "vtecQualityIndicator", arg);
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
#include "org/orekit/attitudes/Inertia.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/Inertia.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Inertia::class$ = NULL;
      jmethodID *Inertia::mids$ = NULL;
      bool Inertia::live$ = false;

      jclass Inertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Inertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_451b696bc5d42d4b] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis2_451b696bc5d42d4b] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis3_451b696bc5d42d4b] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_momentum_53c542efd8574582] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_swap12_355dbe403ed36c8e] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap13_355dbe403ed36c8e] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap23_355dbe403ed36c8e] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/Inertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_451b696bc5d42d4b]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_451b696bc5d42d4b]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_451b696bc5d42d4b]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Inertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_momentum_53c542efd8574582], a0.this$));
      }

      Inertia Inertia::swap12() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap12_355dbe403ed36c8e]));
      }

      Inertia Inertia::swap13() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap13_355dbe403ed36c8e]));
      }

      Inertia Inertia::swap23() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap23_355dbe403ed36c8e]));
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
      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self);
      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg);
      static PyObject *t_Inertia_swap12(t_Inertia *self);
      static PyObject *t_Inertia_swap13(t_Inertia *self);
      static PyObject *t_Inertia_swap23(t_Inertia *self);
      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data);
      static PyGetSetDef t_Inertia__fields_[] = {
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis3),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Inertia__methods_[] = {
        DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, momentum, METH_O),
        DECLARE_METHOD(t_Inertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
        { Py_tp_methods, t_Inertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Inertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Inertia, t_Inertia, Inertia);

      void t_Inertia::install(PyObject *module)
      {
        installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
      }

      void t_Inertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
          return NULL;
        return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
      }
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Inertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_Inertia_swap12(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap13(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap23(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeRateModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeRateModifier::mids$ = NULL;
          bool RelativisticClockRangeRateModifier::live$ = false;

          jclass RelativisticClockRangeRateModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeRateModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeRateModifier::RelativisticClockRangeRateModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List RelativisticClockRangeRateModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void RelativisticClockRangeRateModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self);
          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeRateModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeRateModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeRateModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeRateModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeRateModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeRateModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeRateModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeRateModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeRateModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeRateModifier, t_RelativisticClockRangeRateModifier, RelativisticClockRangeRateModifier);

          void t_RelativisticClockRangeRateModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeRateModifier), &PY_TYPE_DEF(RelativisticClockRangeRateModifier), module, "RelativisticClockRangeRateModifier", 0);
          }

          void t_RelativisticClockRangeRateModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "class_", make_descriptor(RelativisticClockRangeRateModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeRateModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeRateModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeRateModifier::wrap_Object(RelativisticClockRangeRateModifier(((t_RelativisticClockRangeRateModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeRateModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeRateModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeRateModifier_init_(t_RelativisticClockRangeRateModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            RelativisticClockRangeRateModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = RelativisticClockRangeRateModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticClockRangeRateModifier_getParametersDrivers(t_RelativisticClockRangeRateModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeRateModifier_modifyWithoutDerivatives(t_RelativisticClockRangeRateModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeRateModifier_get__parametersDrivers(t_RelativisticClockRangeRateModifier *self, void *data)
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
#include "org/orekit/bodies/Loxodrome.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Loxodrome::class$ = NULL;
      jmethodID *Loxodrome::mids$ = NULL;
      bool Loxodrome::live$ = false;

      jclass Loxodrome::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Loxodrome");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_218fd8b99ca99ca0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_fae9e6423d088e39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_getAltitude_9981f74b2d109da6] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getAzimuth_9981f74b2d109da6] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getBody_dc8275c31111ad9c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
          mids$[mid_getPoint_bdca252cae79438c] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_pointAtDistance_ec6f4d2d88b0733c] = env->getMethodID(cls, "pointAtDistance", "(D)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_218fd8b99ca99ca0, a0.this$, a1, a2.this$)) {}

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fae9e6423d088e39, a0.this$, a1, a2.this$, a3)) {}

      jdouble Loxodrome::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_9981f74b2d109da6]);
      }

      jdouble Loxodrome::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_9981f74b2d109da6]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid Loxodrome::getBody() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dc8275c31111ad9c]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_bdca252cae79438c]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::pointAtDistance(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_ec6f4d2d88b0733c], a0));
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
      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self);
      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg);
      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data);
      static PyGetSetDef t_Loxodrome__fields_[] = {
        DECLARE_GET_FIELD(t_Loxodrome, altitude),
        DECLARE_GET_FIELD(t_Loxodrome, azimuth),
        DECLARE_GET_FIELD(t_Loxodrome, body),
        DECLARE_GET_FIELD(t_Loxodrome, point),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Loxodrome__methods_[] = {
        DECLARE_METHOD(t_Loxodrome, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getBody, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, pointAtDistance, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Loxodrome)[] = {
        { Py_tp_methods, t_Loxodrome__methods_ },
        { Py_tp_init, (void *) t_Loxodrome_init_ },
        { Py_tp_getset, t_Loxodrome__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Loxodrome)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Loxodrome, t_Loxodrome, Loxodrome);

      void t_Loxodrome::install(PyObject *module)
      {
        installType(&PY_TYPE(Loxodrome), &PY_TYPE_DEF(Loxodrome), module, "Loxodrome", 0);
      }

      void t_Loxodrome::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "class_", make_descriptor(Loxodrome::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "wrapfn_", make_descriptor(t_Loxodrome::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Loxodrome::initializeClass, 1)))
          return NULL;
        return t_Loxodrome::wrap_Object(Loxodrome(((t_Loxodrome *) arg)->object.this$));
      }
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Loxodrome::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2, a3));
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

      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", arg);
        return NULL;
      }

      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }

      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PropagatorBuilder::class$ = NULL;
        jmethodID *PropagatorBuilder::mids$ = NULL;
        bool PropagatorBuilder::live$ = false;

        jclass PropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_dbf963913bad78cb] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_3ae868590960a3fb] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_80e11148db499dda] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_7c5a416c83e442be] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_7c5a416c83e442be] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_be783177b060994b] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_17534ef58ef3aaef] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel PropagatorBuilder::buildLeastSquaresModel(const JArray< PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_434804ad6c6cc8a8], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator PropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_dbf963913bad78cb], a0.this$));
        }

        PropagatorBuilder PropagatorBuilder::copy() const
        {
          return PropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_3ae868590960a3fb]));
        }

        ::org::orekit::frames::Frame PropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::time::AbsoluteDate PropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_80e11148db499dda]));
        }

        jdouble PropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::orbits::OrbitType PropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_7c5a416c83e442be]));
        }

        ::org::orekit::orbits::PositionAngleType PropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        ::org::orekit::utils::ParameterDriversList PropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_7c5a416c83e442be]));
        }

        JArray< jdouble > PropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_be783177b060994b]));
        }

        void PropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_17534ef58ef3aaef], a0.this$);
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
        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args);
        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self);
        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg);
        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data);
        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data);
        static PyGetSetDef t_PropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_PropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_PropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_PropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_PropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_PropagatorBuilder, buildPropagator, METH_O),
          DECLARE_METHOD(t_PropagatorBuilder, copy, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_PropagatorBuilder, resetOrbit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PropagatorBuilder)[] = {
          { Py_tp_methods, t_PropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_PropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PropagatorBuilder, t_PropagatorBuilder, PropagatorBuilder);

        void t_PropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PropagatorBuilder), &PY_TYPE_DEF(PropagatorBuilder), module, "PropagatorBuilder", 0);
        }

        void t_PropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "class_", make_descriptor(PropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "wrapfn_", make_descriptor(t_PropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PropagatorBuilder::wrap_Object(PropagatorBuilder(((t_PropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PropagatorBuilder_buildLeastSquaresModel(t_PropagatorBuilder *self, PyObject *args)
        {
          JArray< PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildLeastSquaresModel", args);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_buildPropagator(t_PropagatorBuilder *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildPropagator", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_copy(t_PropagatorBuilder *self)
        {
          PropagatorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_PropagatorBuilder::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getFrame(t_PropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getInitialOrbitDate(t_PropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getMu(t_PropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getOrbitalParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPositionAngleType(t_PropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getPropagationParametersDrivers(t_PropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_PropagatorBuilder_getSelectedNormalizedParameters(t_PropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_PropagatorBuilder_resetOrbit(t_PropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_PropagatorBuilder_get__frame(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__initialOrbitDate(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__mu(t_PropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__orbitalParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__positionAngleType(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__propagationParametersDrivers(t_PropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_PropagatorBuilder_get__selectedNormalizedParameters(t_PropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/PythonAbstractEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
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

        ::java::lang::Class *PythonAbstractEncounterLOF::class$ = NULL;
        jmethodID *PythonAbstractEncounterLOF::mids$ = NULL;
        bool PythonAbstractEncounterLOF::live$ = false;

        jclass PythonAbstractEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonAbstractEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_433e87d544ab05d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_b6feed19a568aaff] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0c632cd592d334d1] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractEncounterLOF::PythonAbstractEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_433e87d544ab05d5, a0.this$)) {}

        void PythonAbstractEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonAbstractEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonAbstractEncounterLOF::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self);
        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonAbstractEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncounterLOF)[] = {
          { Py_tp_methods, t_PythonAbstractEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractEncounterLOF_init_ },
          { Py_tp_getset, t_PythonAbstractEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(PythonAbstractEncounterLOF, t_PythonAbstractEncounterLOF, PythonAbstractEncounterLOF);

        void t_PythonAbstractEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractEncounterLOF), &PY_TYPE_DEF(PythonAbstractEncounterLOF), module, "PythonAbstractEncounterLOF", 1);
        }

        void t_PythonAbstractEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "class_", make_descriptor(PythonAbstractEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "wrapfn_", make_descriptor(t_PythonAbstractEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonAbstractEncounterLOF_getName2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractEncounterLOF_pythonDecRef3 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial4 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonAbstractEncounterLOF_rotationFromInertial5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonAbstractEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractEncounterLOF::wrap_Object(PythonAbstractEncounterLOF(((t_PythonAbstractEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractEncounterLOF_init_(t_PythonAbstractEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
          PythonAbstractEncounterLOF object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractEncounterLOF(a0));
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

        static PyObject *t_PythonAbstractEncounterLOF_finalize(t_PythonAbstractEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractEncounterLOF_pythonExtension(t_PythonAbstractEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_getName2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static void JNICALL t_PythonAbstractEncounterLOF_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonAbstractEncounterLOF_rotationFromInertial5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncounterLOF::mids$[PythonAbstractEncounterLOF::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonAbstractEncounterLOF_get__self(t_PythonAbstractEncounterLOF *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/IntegerBootstrapping.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerBootstrapping::class$ = NULL;
          jmethodID *IntegerBootstrapping::mids$ = NULL;
          bool IntegerBootstrapping::live$ = false;

          jclass IntegerBootstrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerBootstrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_discreteSearch_ff7cb6c242604316] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_bc28affeaa2339a4] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntegerBootstrapping::IntegerBootstrapping(jdouble a0) : ::org::orekit::estimation::measurements::gnss::LambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}
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
          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_IntegerBootstrapping__methods_[] = {
            DECLARE_METHOD(t_IntegerBootstrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerBootstrapping, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerBootstrapping)[] = {
            { Py_tp_methods, t_IntegerBootstrapping__methods_ },
            { Py_tp_init, (void *) t_IntegerBootstrapping_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerBootstrapping)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::LambdaMethod),
            NULL
          };

          DEFINE_TYPE(IntegerBootstrapping, t_IntegerBootstrapping, IntegerBootstrapping);

          void t_IntegerBootstrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerBootstrapping), &PY_TYPE_DEF(IntegerBootstrapping), module, "IntegerBootstrapping", 0);
          }

          void t_IntegerBootstrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "class_", make_descriptor(IntegerBootstrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "wrapfn_", make_descriptor(t_IntegerBootstrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerBootstrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerBootstrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerBootstrapping::initializeClass, 1)))
              return NULL;
            return t_IntegerBootstrapping::wrap_Object(IntegerBootstrapping(((t_IntegerBootstrapping *) arg)->object.this$));
          }
          static PyObject *t_IntegerBootstrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerBootstrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IntegerBootstrapping_init_(t_IntegerBootstrapping *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            IntegerBootstrapping object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = IntegerBootstrapping(a0));
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
}
