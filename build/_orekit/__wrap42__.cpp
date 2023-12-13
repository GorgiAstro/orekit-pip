#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/DateDetector.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/events/DateDetector.h"
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
            mids$[mid_init$_92261e91d74abb39] = env->getMethodID(cls, "<init>", "([Lorg/orekit/time/TimeStamped;)V");
            mids$[mid_addEventDate_02135a6ef25adb4b] = env->getMethodID(cls, "addEventDate", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDates_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDates", "()Ljava/util/List;");
            mids$[mid_withMinGap_66bd8d09af792639] = env->getMethodID(cls, "withMinGap", "(D)Lorg/orekit/propagation/events/DateDetector;");
            mids$[mid_create_359409a7dfff0eb5] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/DateDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAX_CHECK = env->getStaticDoubleField(cls, "DEFAULT_MAX_CHECK");
            DEFAULT_MIN_GAP = env->getStaticDoubleField(cls, "DEFAULT_MIN_GAP");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DateDetector::DateDetector(const JArray< ::org::orekit::time::TimeStamped > & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_92261e91d74abb39, a0.this$)) {}

        void DateDetector::addEventDate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDate_02135a6ef25adb4b], a0.this$);
        }

        jdouble DateDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate DateDetector::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        ::java::util::List DateDetector::getDates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDates_e62d3bb06d56d7e3]));
        }

        DateDetector DateDetector::withMinGap(jdouble a0) const
        {
          return DateDetector(env->callObjectMethod(this$, mids$[mid_withMinGap_66bd8d09af792639], a0));
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
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAngVelX_b74f83833fdad017] = env->getMethodID(cls, "getAngVelX", "()D");
                  mids$[mid_getAngVelY_b74f83833fdad017] = env->getMethodID(cls, "getAngVelY", "()D");
                  mids$[mid_getAngVelZ_b74f83833fdad017] = env->getMethodID(cls, "getAngVelZ", "()D");
                  mids$[mid_getEndpoints_c60ad1d207bc8e06] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setAngVelX_8ba9fe7a847cecad] = env->getMethodID(cls, "setAngVelX", "(D)V");
                  mids$[mid_setAngVelY_8ba9fe7a847cecad] = env->getMethodID(cls, "setAngVelY", "(D)V");
                  mids$[mid_setAngVelZ_8ba9fe7a847cecad] = env->getMethodID(cls, "setAngVelZ", "(D)V");
                  mids$[mid_setFrame_4755133c5c4c59be] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AngularVelocity::AngularVelocity() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jdouble AngularVelocity::getAngVelX() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelX_b74f83833fdad017]);
              }

              jdouble AngularVelocity::getAngVelY() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelY_b74f83833fdad017]);
              }

              jdouble AngularVelocity::getAngVelZ() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAngVelZ_b74f83833fdad017]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AngularVelocity::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_c60ad1d207bc8e06]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AngularVelocity::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_69d8be1b6b0a1a94]));
              }

              void AngularVelocity::setAngVelX(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelX_8ba9fe7a847cecad], a0);
              }

              void AngularVelocity::setAngVelY(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelY_8ba9fe7a847cecad], a0);
              }

              void AngularVelocity::setAngVelZ(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngVelZ_8ba9fe7a847cecad], a0);
              }

              void AngularVelocity::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_4755133c5c4c59be], a0.this$);
              }

              void AngularVelocity::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Space::class$ = NULL;
      jmethodID *Space::mids$ = NULL;
      bool Space::live$ = false;

      jclass Space::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Space");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getSubSpace_9afbccb68c8e9ef8] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Space::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      Space Space::getSubSpace() const
      {
        return Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_9afbccb68c8e9ef8]));
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
      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Space_getDimension(t_Space *self);
      static PyObject *t_Space_getSubSpace(t_Space *self);
      static PyObject *t_Space_get__dimension(t_Space *self, void *data);
      static PyObject *t_Space_get__subSpace(t_Space *self, void *data);
      static PyGetSetDef t_Space__fields_[] = {
        DECLARE_GET_FIELD(t_Space, dimension),
        DECLARE_GET_FIELD(t_Space, subSpace),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Space__methods_[] = {
        DECLARE_METHOD(t_Space, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Space, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_Space, getSubSpace, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Space)[] = {
        { Py_tp_methods, t_Space__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Space__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Space)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Space, t_Space, Space);

      void t_Space::install(PyObject *module)
      {
        installType(&PY_TYPE(Space), &PY_TYPE_DEF(Space), module, "Space", 0);
      }

      void t_Space::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "class_", make_descriptor(Space::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "wrapfn_", make_descriptor(t_Space::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Space), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Space_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Space::initializeClass, 1)))
          return NULL;
        return t_Space::wrap_Object(Space(((t_Space *) arg)->object.this$));
      }
      static PyObject *t_Space_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Space::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Space_getDimension(t_Space *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Space_getSubSpace(t_Space *self)
      {
        Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubSpace());
        return t_Space::wrap_Object(result);
      }

      static PyObject *t_Space_get__dimension(t_Space *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Space_get__subSpace(t_Space *self, void *data)
      {
        Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubSpace());
        return t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNodeDetector.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNodeDetector::class$ = NULL;
        jmethodID *FieldNodeDetector::mids$ = NULL;
        bool FieldNodeDetector::live$ = false;

        jclass FieldNodeDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNodeDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_891556684acdd59d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_9904853b43bda69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_75ef0f4eb41b3553] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNodeDetector::FieldNodeDetector(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_891556684acdd59d, a0.this$, a1.this$)) {}

        FieldNodeDetector::FieldNodeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9904853b43bda69b, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNodeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::frames::Frame FieldNodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
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
        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args);
        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args);
        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self);
        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data);
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data);
        static PyGetSetDef t_FieldNodeDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNodeDetector, frame),
          DECLARE_GET_FIELD(t_FieldNodeDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNodeDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNodeDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNodeDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNodeDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNodeDetector)[] = {
          { Py_tp_methods, t_FieldNodeDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNodeDetector_init_ },
          { Py_tp_getset, t_FieldNodeDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNodeDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNodeDetector, t_FieldNodeDetector, FieldNodeDetector);
        PyObject *t_FieldNodeDetector::wrap_Object(const FieldNodeDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNodeDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNodeDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNodeDetector *self = (t_FieldNodeDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNodeDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNodeDetector), &PY_TYPE_DEF(FieldNodeDetector), module, "FieldNodeDetector", 0);
        }

        void t_FieldNodeDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "class_", make_descriptor(FieldNodeDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "wrapfn_", make_descriptor(t_FieldNodeDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNodeDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNodeDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNodeDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNodeDetector::wrap_Object(FieldNodeDetector(((t_FieldNodeDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNodeDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNodeDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNodeDetector_of_(t_FieldNodeDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNodeDetector_init_(t_FieldNodeDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              FieldNodeDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2))
              {
                INT_CALL(object = FieldNodeDetector(a0, a1, a2));
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

        static PyObject *t_FieldNodeDetector_g(t_FieldNodeDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNodeDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNodeDetector_getFrame(t_FieldNodeDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_FieldNodeDetector_get__parameters_(t_FieldNodeDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNodeDetector_get__frame(t_FieldNodeDetector *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/MidpointFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *MidpointFieldIntegrator::class$ = NULL;
        jmethodID *MidpointFieldIntegrator::mids$ = NULL;
        bool MidpointFieldIntegrator::live$ = false;

        jclass MidpointFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/MidpointFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_8001ef028eec97af] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/MidpointFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegrator::MidpointFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > MidpointFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > MidpointFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
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
      namespace nonstiff {
        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args);
        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data);
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, a),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, b),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, c),
          DECLARE_GET_FIELD(t_MidpointFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegrator)[] = {
          { Py_tp_methods, t_MidpointFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegrator_init_ },
          { Py_tp_getset, t_MidpointFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegrator, t_MidpointFieldIntegrator, MidpointFieldIntegrator);
        PyObject *t_MidpointFieldIntegrator::wrap_Object(const MidpointFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegrator *self = (t_MidpointFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegrator), &PY_TYPE_DEF(MidpointFieldIntegrator), module, "MidpointFieldIntegrator", 0);
        }

        void t_MidpointFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "class_", make_descriptor(MidpointFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "wrapfn_", make_descriptor(t_MidpointFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegrator::wrap_Object(MidpointFieldIntegrator(((t_MidpointFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegrator_of_(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegrator_init_(t_MidpointFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          MidpointFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = MidpointFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MidpointFieldIntegrator_getA(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getB(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_MidpointFieldIntegrator_getC(t_MidpointFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_MidpointFieldIntegrator_get__parameters_(t_MidpointFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_MidpointFieldIntegrator_get__a(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_MidpointFieldIntegrator_get__b(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_MidpointFieldIntegrator_get__c(t_MidpointFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState$EventOccurrence::class$ = NULL;
        jmethodID *EventState$EventOccurrence::mids$ = NULL;
        bool EventState$EventOccurrence::live$ = false;

        jclass EventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_0afc8c14772bbac8] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_9d155cc8314c99cf] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStopDate_c325492395d89b24] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action EventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_0afc8c14772bbac8]));
        }

        ::org::orekit::propagation::SpacecraftState EventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_9d155cc8314c99cf]));
        }

        ::org::orekit::time::AbsoluteDate EventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_c325492395d89b24]));
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
        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_EventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState$EventOccurrence)[] = {
          { Py_tp_methods, t_EventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState$EventOccurrence, t_EventState$EventOccurrence, EventState$EventOccurrence);
        PyObject *t_EventState$EventOccurrence::wrap_Object(const EventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState$EventOccurrence), &PY_TYPE_DEF(EventState$EventOccurrence), module, "EventState$EventOccurrence", 0);
        }

        void t_EventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "class_", make_descriptor(EventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "wrapfn_", make_descriptor(t_EventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventState$EventOccurrence::wrap_Object(EventState$EventOccurrence(((t_EventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ModifierGradientConverter.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ModifierGradientConverter::class$ = NULL;
          jmethodID *ModifierGradientConverter::mids$ = NULL;
          bool ModifierGradientConverter::live$ = false;

          jclass ModifierGradientConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ModifierGradientConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f9fee79f1d2ae5a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifierGradientConverter::ModifierGradientConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_f9fee79f1d2ae5a2, a0.this$, a1, a2.this$)) {}
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
          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifierGradientConverter__methods_[] = {
            DECLARE_METHOD(t_ModifierGradientConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifierGradientConverter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifierGradientConverter)[] = {
            { Py_tp_methods, t_ModifierGradientConverter__methods_ },
            { Py_tp_init, (void *) t_ModifierGradientConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifierGradientConverter)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
            NULL
          };

          DEFINE_TYPE(ModifierGradientConverter, t_ModifierGradientConverter, ModifierGradientConverter);

          void t_ModifierGradientConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifierGradientConverter), &PY_TYPE_DEF(ModifierGradientConverter), module, "ModifierGradientConverter", 0);
          }

          void t_ModifierGradientConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "class_", make_descriptor(ModifierGradientConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "wrapfn_", make_descriptor(t_ModifierGradientConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifierGradientConverter::initializeClass, 1)))
              return NULL;
            return t_ModifierGradientConverter::wrap_Object(ModifierGradientConverter(((t_ModifierGradientConverter *) arg)->object.this$));
          }
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifierGradientConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ModifierGradientConverter object((jobject) NULL);

            if (!parseArgs(args, "kIk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ModifierGradientConverter(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractPropagator.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractPropagator::class$ = NULL;
      jmethodID *AbstractPropagator::mids$ = NULL;
      bool AbstractPropagator::live$ = false;

      jclass AbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_40bf76e2f8bcdb6f] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_9d155cc8314c99cf] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_0f94e41879ab7062] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_ec3241005499cbfa] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_4f0008999861ca31] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8e4d3ea100bc0095] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setupMatricesComputation_353079da5ac9e8a7] = env->getMethodID(cls, "setupMatricesComputation", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/MatricesHarvester;");
          mids$[mid_updateAdditionalStates_c3c52b1257139045] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_initializePropagation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_initializeAdditionalStates_02135a6ef25adb4b] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setStartDate_02135a6ef25adb4b] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_updateUnmanagedStates_c3c52b1257139045] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getStartDate_c325492395d89b24] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getHarvester_8381cda72e7e7fab] = env->getMethodID(cls, "getHarvester", "()Lorg/orekit/propagation/AbstractMatricesHarvester;");
          mids$[mid_stateChanged_280c3390961e0a50] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::AdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_40bf76e2f8bcdb6f], a0.this$);
      }

      ::java::util::List AbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_e62d3bb06d56d7e3]));
      }

      ::org::orekit::attitudes::AttitudeProvider AbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_331f12bb6017243b]));
      }

      ::org::orekit::frames::Frame AbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_9d155cc8314c99cf]));
      }

      JArray< ::java::lang::String > AbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_0f94e41879ab7062]));
      }

      ::org::orekit::propagation::sampling::StepHandlerMultiplexer AbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::StepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_ec3241005499cbfa]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AbstractPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      jboolean AbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_cde6b28e15c96b75], a0.this$);
      }

      ::org::orekit::propagation::SpacecraftState AbstractPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_4f0008999861ca31], a0.this$));
      }

      void AbstractPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
      }

      void AbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8e4d3ea100bc0095], a0.this$);
      }

      ::org::orekit::propagation::MatricesHarvester AbstractPropagator::setupMatricesComputation(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) const
      {
        return ::org::orekit::propagation::MatricesHarvester(env->callObjectMethod(this$, mids$[mid_setupMatricesComputation_353079da5ac9e8a7], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self);
      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg);
      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args);
      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data);
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data);
      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data);
      static PyGetSetDef t_AbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_AbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_AbstractPropagator, frame),
        DECLARE_GET_FIELD(t_AbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_AbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_AbstractPropagator, multiplexer),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_AbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_AbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setAttitudeProvider, METH_O),
        DECLARE_METHOD(t_AbstractPropagator, setupMatricesComputation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractPropagator)[] = {
        { Py_tp_methods, t_AbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractPropagator, t_AbstractPropagator, AbstractPropagator);

      void t_AbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractPropagator), &PY_TYPE_DEF(AbstractPropagator), module, "AbstractPropagator", 0);
      }

      void t_AbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "class_", make_descriptor(AbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "wrapfn_", make_descriptor(t_AbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_AbstractPropagator::wrap_Object(AbstractPropagator(((t_AbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_AbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractPropagator_addAdditionalStateProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::AdditionalStateProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::AdditionalStateProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_getAdditionalStateProviders(t_AbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(AdditionalStateProvider));
      }

      static PyObject *t_AbstractPropagator_getAttitudeProvider(t_AbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getFrame(t_AbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getInitialState(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getManagedAdditionalStates(t_AbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_getMultiplexer(t_AbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(result);
      }

      static PyObject *t_AbstractPropagator_getPVCoordinates(t_AbstractPropagator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_isAdditionalStateManaged(t_AbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_propagate(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_resetInitialState(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setAttitudeProvider(t_AbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_setupMatricesComputation(t_AbstractPropagator *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        ::org::orekit::propagation::MatricesHarvester result((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.setupMatricesComputation(a0, a1, a2));
          return ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setupMatricesComputation", args);
        return NULL;
      }

      static PyObject *t_AbstractPropagator_get__additionalStateProviders(t_AbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__attitudeProvider(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_AbstractPropagator_set__attitudeProvider(t_AbstractPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_AbstractPropagator_get__frame(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__initialState(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
      }

      static PyObject *t_AbstractPropagator_get__managedAdditionalStates(t_AbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_AbstractPropagator_get__multiplexer(t_AbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_StepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractMatricesHarvester.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractMatricesHarvester::class$ = NULL;
      jmethodID *AbstractMatricesHarvester::mids$ = NULL;
      bool AbstractMatricesHarvester::live$ = false;
      jint AbstractMatricesHarvester::STATE_DIMENSION = (jint) 0;

      jclass AbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getInitialJacobianColumn_1d7f5d54f6c58f85] = env->getMethodID(cls, "getInitialJacobianColumn", "(Ljava/lang/String;)[D");
          mids$[mid_getInitialStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getInitialStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getParametersJacobian_b7aa5791b069a41f] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStmName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getStmName", "()Ljava/lang/String;");
          mids$[mid_setReferenceState_280c3390961e0a50] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getConversionJacobian_92a90247fa9f7aa3] = env->getMethodID(cls, "getConversionJacobian", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMatricesHarvester::freezeColumnsNames() const
      {
        env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_a1fa5dae97ea5ed2]);
      }

      JArray< jdouble > AbstractMatricesHarvester::getInitialJacobianColumn(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialJacobianColumn_1d7f5d54f6c58f85], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getInitialStateTransitionMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialStateTransitionMatrix_f77d745f2128c391]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_b7aa5791b069a41f], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f], a0.this$));
      }

      ::java::lang::String AbstractMatricesHarvester::getStmName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStmName_1c1fa1e935d6cdcf]));
      }

      void AbstractMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_280c3390961e0a50], a0.this$);
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
      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data);
      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data);
      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_AbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, initialStateTransitionMatrix),
        DECLARE_SET_FIELD(t_AbstractMatricesHarvester, referenceState),
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, stmName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_AbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, freezeColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialJacobianColumn, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialStateTransitionMatrix, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStmName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_AbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMatricesHarvester, t_AbstractMatricesHarvester, AbstractMatricesHarvester);

      void t_AbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMatricesHarvester), &PY_TYPE_DEF(AbstractMatricesHarvester), module, "AbstractMatricesHarvester", 0);
      }

      void t_AbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "class_", make_descriptor(AbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractMatricesHarvester::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "STATE_DIMENSION", make_descriptor(AbstractMatricesHarvester::STATE_DIMENSION));
      }

      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_AbstractMatricesHarvester::wrap_Object(AbstractMatricesHarvester(((t_AbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.freezeColumnsNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getInitialJacobianColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getInitialJacobianColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getStmName());
        return j2p(result);
      }

      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }

      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getStmName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticField::class$ = NULL;
        jmethodID *GeoMagneticField::mids$ = NULL;
        bool GeoMagneticField::live$ = false;

        jclass GeoMagneticField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_calculateField_54d6c2ca75c55cb8] = env->getMethodID(cls, "calculateField", "(DDD)Lorg/orekit/models/earth/GeoMagneticElements;");
            mids$[mid_getDecimalYear_2f53baea9459d443] = env->getStaticMethodID(cls, "getDecimalYear", "(III)D");
            mids$[mid_getEpoch_b74f83833fdad017] = env->getMethodID(cls, "getEpoch", "()D");
            mids$[mid_getModelName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getModelName", "()Ljava/lang/String;");
            mids$[mid_supportsTimeTransform_9ab94ac1dc23b105] = env->getMethodID(cls, "supportsTimeTransform", "()Z");
            mids$[mid_transformModel_0b71ae56f8fa5718] = env->getMethodID(cls, "transformModel", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_transformModel_e0a954d9b53a7db9] = env->getMethodID(cls, "transformModel", "(Lorg/orekit/models/earth/GeoMagneticField;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_validFrom_b74f83833fdad017] = env->getMethodID(cls, "validFrom", "()D");
            mids$[mid_validTo_b74f83833fdad017] = env->getMethodID(cls, "validTo", "()D");
            mids$[mid_setMainFieldCoefficients_97e33498326f7285] = env->getMethodID(cls, "setMainFieldCoefficients", "(IIDD)V");
            mids$[mid_setSecularVariationCoefficients_97e33498326f7285] = env->getMethodID(cls, "setSecularVariationCoefficients", "(IIDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticElements GeoMagneticField::calculateField(jdouble a0, jdouble a1, jdouble a2) const
        {
          return ::org::orekit::models::earth::GeoMagneticElements(env->callObjectMethod(this$, mids$[mid_calculateField_54d6c2ca75c55cb8], a0, a1, a2));
        }

        jdouble GeoMagneticField::getDecimalYear(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDecimalYear_2f53baea9459d443], a0, a1, a2);
        }

        jdouble GeoMagneticField::getEpoch() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpoch_b74f83833fdad017]);
        }

        ::java::lang::String GeoMagneticField::getModelName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModelName_1c1fa1e935d6cdcf]));
        }

        jboolean GeoMagneticField::supportsTimeTransform() const
        {
          return env->callBooleanMethod(this$, mids$[mid_supportsTimeTransform_9ab94ac1dc23b105]);
        }

        GeoMagneticField GeoMagneticField::transformModel(jdouble a0) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_0b71ae56f8fa5718], a0));
        }

        GeoMagneticField GeoMagneticField::transformModel(const GeoMagneticField & a0, jdouble a1) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_e0a954d9b53a7db9], a0.this$, a1));
        }

        jdouble GeoMagneticField::validFrom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validFrom_b74f83833fdad017]);
        }

        jdouble GeoMagneticField::validTo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validTo_b74f83833fdad017]);
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
        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data);
        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data);
        static PyGetSetDef t_GeoMagneticField__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticField, epoch),
          DECLARE_GET_FIELD(t_GeoMagneticField, modelName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticField__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, calculateField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, getDecimalYear, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, getModelName, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, supportsTimeTransform, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, transformModel, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, validFrom, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, validTo, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticField)[] = {
          { Py_tp_methods, t_GeoMagneticField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticField, t_GeoMagneticField, GeoMagneticField);

        void t_GeoMagneticField::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticField), &PY_TYPE_DEF(GeoMagneticField), module, "GeoMagneticField", 0);
        }

        void t_GeoMagneticField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "class_", make_descriptor(GeoMagneticField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "wrapfn_", make_descriptor(t_GeoMagneticField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticField::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticField::wrap_Object(GeoMagneticField(((t_GeoMagneticField *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ::org::orekit::models::earth::GeoMagneticElements result((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.calculateField(a0, a1, a2));
            return ::org::orekit::models::earth::t_GeoMagneticElements::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "calculateField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticField::getDecimalYear(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDecimalYear", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpoch());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getModelName());
          return j2p(result);
        }

        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.supportsTimeTransform());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.transformModel(a0));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              GeoMagneticField a0((jobject) NULL);
              jdouble a1;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "kD", GeoMagneticField::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformModel(a0, a1));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformModel", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validFrom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validTo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpoch());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getModelName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperatureModel.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperatureModel::class$ = NULL;
          jmethodID *GlobalPressureTemperatureModel::mids$ = NULL;
          bool GlobalPressureTemperatureModel::live$ = false;

          jclass GlobalPressureTemperatureModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperatureModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9105dccfcf1a0a84] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
              mids$[mid_init$_7bc3d3b6b3bfe3c4] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)V");
              mids$[mid_getPressure_b74f83833fdad017] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_b74f83833fdad017] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_weatherParameters_98ef3c02384a4218] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9105dccfcf1a0a84, a0, a1, a2.this$)) {}

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7bc3d3b6b3bfe3c4, a0, a1, a2.this$, a3.this$)) {}

          jdouble GlobalPressureTemperatureModel::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_b74f83833fdad017]);
          }

          jdouble GlobalPressureTemperatureModel::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_b74f83833fdad017]);
          }

          void GlobalPressureTemperatureModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_98ef3c02384a4218], a0, a1.this$);
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
          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data);
          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperatureModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, temperature),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperatureModel__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperatureModel)[] = {
            { Py_tp_methods, t_GlobalPressureTemperatureModel__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperatureModel_init_ },
            { Py_tp_getset, t_GlobalPressureTemperatureModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperatureModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperatureModel, t_GlobalPressureTemperatureModel, GlobalPressureTemperatureModel);

          void t_GlobalPressureTemperatureModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperatureModel), &PY_TYPE_DEF(GlobalPressureTemperatureModel), module, "GlobalPressureTemperatureModel", 0);
          }

          void t_GlobalPressureTemperatureModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "class_", make_descriptor(GlobalPressureTemperatureModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "wrapfn_", make_descriptor(t_GlobalPressureTemperatureModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperatureModel::wrap_Object(GlobalPressureTemperatureModel(((t_GlobalPressureTemperatureModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2, a3));
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

          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args)
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

          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonMessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonMessageParser::class$ = NULL;
            jmethodID *PythonMessageParser::mids$ = NULL;
            bool PythonMessageParser::live$ = false;

            jclass PythonMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_541690f9ee81d3ad] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFileFormat_e4c64bde02ca34c3] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_653fe7fd2fcbf113] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_19d473d3b0277de6] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageParser::PythonMessageParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonMessageParser::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args);
            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self);
            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data);
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data);
            static PyGetSetDef t_PythonMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageParser, self),
              DECLARE_GET_FIELD(t_PythonMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageParser)[] = {
              { Py_tp_methods, t_PythonMessageParser__methods_ },
              { Py_tp_init, (void *) t_PythonMessageParser_init_ },
              { Py_tp_getset, t_PythonMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageParser, t_PythonMessageParser, PythonMessageParser);
            PyObject *t_PythonMessageParser::wrap_Object(const PythonMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageParser), &PY_TYPE_DEF(PythonMessageParser), module, "PythonMessageParser", 1);
            }

            void t_PythonMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "class_", make_descriptor(PythonMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "wrapfn_", make_descriptor(t_PythonMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonMessageParser_build0 },
                { "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonMessageParser_getFileFormat1 },
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageParser_getFormatVersionKey2 },
                { "getSpecialXmlElementsBuilders", "()Ljava/util/Map;", (void *) t_PythonMessageParser_getSpecialXmlElementsBuilders3 },
                { "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;", (void *) t_PythonMessageParser_parseMessage4 },
                { "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V", (void *) t_PythonMessageParser_process5 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageParser_pythonDecRef6 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonMessageParser_reset7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonMessageParser::wrap_Object(PythonMessageParser(((t_PythonMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageParser object((jobject) NULL);

              INT_CALL(object = PythonMessageParser());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("build", result);
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

            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFileFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFileFormat", result);
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

            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getSpecialXmlElementsBuilders", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getSpecialXmlElementsBuilders", result);
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

            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
              PyObject *result = PyObject_CallMethod(obj, "parseMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("parseMessage", result);
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

            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "process", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data)
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
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data)
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
#include "org/orekit/gnss/attitude/BeidouMeo.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouMeo::class$ = NULL;
        jmethodID *BeidouMeo::mids$ = NULL;
        bool BeidouMeo::live$ = false;

        jclass BeidouMeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouMeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a872ffc4376f5f34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouMeo::BeidouMeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_a872ffc4376f5f34, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
      namespace attitude {
        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouMeo__methods_[] = {
          DECLARE_METHOD(t_BeidouMeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouMeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouMeo)[] = {
          { Py_tp_methods, t_BeidouMeo__methods_ },
          { Py_tp_init, (void *) t_BeidouMeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouMeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouMeo, t_BeidouMeo, BeidouMeo);

        void t_BeidouMeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouMeo), &PY_TYPE_DEF(BeidouMeo), module, "BeidouMeo", 0);
        }

        void t_BeidouMeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "class_", make_descriptor(BeidouMeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "wrapfn_", make_descriptor(t_BeidouMeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouMeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouMeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouMeo::initializeClass, 1)))
            return NULL;
          return t_BeidouMeo::wrap_Object(BeidouMeo(((t_BeidouMeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouMeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouMeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouMeo_init_(t_BeidouMeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouMeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouMeo(a0, a1, a2, a3));
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
              mids$[mid_init$_4644e9e8a32f72dd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)V");
              mids$[mid_getEnd_8b724f8b4fdad1a2] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getLine_26296f26a05c4026] = env->getMethodID(cls, "getLine", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getStart_8b724f8b4fdad1a2] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Segment::Segment(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Line & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4644e9e8a32f72dd, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getEnd() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEnd_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Segment::getLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_getLine_26296f26a05c4026]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Segment::getStart() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getStart_8b724f8b4fdad1a2]));
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
#include "org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *ModifiedLambdaMethod::class$ = NULL;
          jmethodID *ModifiedLambdaMethod::mids$ = NULL;
          bool ModifiedLambdaMethod::live$ = false;

          jclass ModifiedLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/ModifiedLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_a1fa5dae97ea5ed2] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_ltdlDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_inverseDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_sign_04fd0666b613d2ab] = env->getMethodID(cls, "sign", "(D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifiedLambdaMethod::ModifiedLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifiedLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_ModifiedLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifiedLambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifiedLambdaMethod)[] = {
            { Py_tp_methods, t_ModifiedLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_ModifiedLambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifiedLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(ModifiedLambdaMethod, t_ModifiedLambdaMethod, ModifiedLambdaMethod);

          void t_ModifiedLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifiedLambdaMethod), &PY_TYPE_DEF(ModifiedLambdaMethod), module, "ModifiedLambdaMethod", 0);
          }

          void t_ModifiedLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "class_", make_descriptor(ModifiedLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "wrapfn_", make_descriptor(t_ModifiedLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifiedLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifiedLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifiedLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_ModifiedLambdaMethod::wrap_Object(ModifiedLambdaMethod(((t_ModifiedLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_ModifiedLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifiedLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifiedLambdaMethod_init_(t_ModifiedLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            ModifiedLambdaMethod object((jobject) NULL);

            INT_CALL(object = ModifiedLambdaMethod());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationCNES95Convention.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationCNES95Convention::class$ = NULL;
        jmethodID *IsotropicRadiationCNES95Convention::mids$ = NULL;
        bool IsotropicRadiationCNES95Convention::live$ = false;

        jclass IsotropicRadiationCNES95Convention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationCNES95Convention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_a230d7bdb943f733] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationCNES95Convention::IsotropicRadiationCNES95Convention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationCNES95Convention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a99eceb06c3864f8], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationCNES95Convention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_a230d7bdb943f733], a0.this$, a1.this$, a2.this$));
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
      namespace radiation {
        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self);
        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationCNES95Convention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationCNES95Convention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationCNES95Convention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationCNES95Convention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationCNES95Convention)[] = {
          { Py_tp_methods, t_IsotropicRadiationCNES95Convention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationCNES95Convention_init_ },
          { Py_tp_getset, t_IsotropicRadiationCNES95Convention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationCNES95Convention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationCNES95Convention, t_IsotropicRadiationCNES95Convention, IsotropicRadiationCNES95Convention);

        void t_IsotropicRadiationCNES95Convention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationCNES95Convention), &PY_TYPE_DEF(IsotropicRadiationCNES95Convention), module, "IsotropicRadiationCNES95Convention", 0);
        }

        void t_IsotropicRadiationCNES95Convention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "class_", make_descriptor(IsotropicRadiationCNES95Convention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "wrapfn_", make_descriptor(t_IsotropicRadiationCNES95Convention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationCNES95Convention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationCNES95Convention::wrap_Object(IsotropicRadiationCNES95Convention(((t_IsotropicRadiationCNES95Convention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationCNES95Convention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationCNES95Convention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationCNES95Convention_init_(t_IsotropicRadiationCNES95Convention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationCNES95Convention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationCNES95Convention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_getRadiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationCNES95Convention_radiationPressureAcceleration(t_IsotropicRadiationCNES95Convention *self, PyObject *args)
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

        static PyObject *t_IsotropicRadiationCNES95Convention_get__radiationParametersDrivers(t_IsotropicRadiationCNES95Convention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeStateHistoryMetadataKey::mids$ = NULL;
              bool AttitudeStateHistoryMetadataKey::live$ = false;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_BASIS_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_PREV_ID = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::ATT_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::COMMENT = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::NUMBER_STATES = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::RATE_TYPE = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_A = NULL;
              AttitudeStateHistoryMetadataKey *AttitudeStateHistoryMetadataKey::REF_FRAME_B = NULL;

              jclass AttitudeStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_03afc684bf6d2e03] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_7f935491e35f3cbe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");
                  mids$[mid_values_17b3436d1a038052] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ATT_BASIS = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_BASIS_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_PREV_ID = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  ATT_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "ATT_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  COMMENT = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  EULER_ROT_SEQ = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  NUMBER_STATES = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  RATE_TYPE = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "RATE_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_A = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  REF_FRAME_B = new AttitudeStateHistoryMetadataKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_03afc684bf6d2e03], a0.this$, a1.this$, a2.this$);
              }

              AttitudeStateHistoryMetadataKey AttitudeStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7f935491e35f3cbe], a0.this$));
              }

              JArray< AttitudeStateHistoryMetadataKey > AttitudeStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_17b3436d1a038052]));
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
              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistoryMetadataKey, t_AttitudeStateHistoryMetadataKey, AttitudeStateHistoryMetadataKey);
              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_Object(const AttitudeStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeStateHistoryMetadataKey *self = (t_AttitudeStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistoryMetadataKey), &PY_TYPE_DEF(AttitudeStateHistoryMetadataKey), module, "AttitudeStateHistoryMetadataKey", 0);
              }

              void t_AttitudeStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "class_", make_descriptor(AttitudeStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_BASIS_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_PREV_ID", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "ATT_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::ATT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "NUMBER_STATES", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "RATE_TYPE", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::RATE_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_A", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistoryMetadataKey), "REF_FRAME_B", make_descriptor(t_AttitudeStateHistoryMetadataKey::wrap_Object(*AttitudeStateHistoryMetadataKey::REF_FRAME_B)));
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistoryMetadataKey::wrap_Object(AttitudeStateHistoryMetadataKey(((t_AttitudeStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_of_(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_process(t_AttitudeStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeStateHistoryMetadataKey_get__parameters_(t_AttitudeStateHistoryMetadataKey *self, void *data)
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
#include "org/hipparchus/optim/univariate/UnivariateObjectiveFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateObjectiveFunction::class$ = NULL;
        jmethodID *UnivariateObjectiveFunction::mids$ = NULL;
        bool UnivariateObjectiveFunction::live$ = false;

        jclass UnivariateObjectiveFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateObjectiveFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_deed7b219c540ba8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getObjectiveFunction_afbbf84db2f6c27e] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateObjectiveFunction::UnivariateObjectiveFunction(const ::org::hipparchus::analysis::UnivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_deed7b219c540ba8, a0.this$)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariateObjectiveFunction::getObjectiveFunction() const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_afbbf84db2f6c27e]));
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
        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self);
        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data);
        static PyGetSetDef t_UnivariateObjectiveFunction__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateObjectiveFunction, objectiveFunction),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateObjectiveFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateObjectiveFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateObjectiveFunction, getObjectiveFunction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateObjectiveFunction)[] = {
          { Py_tp_methods, t_UnivariateObjectiveFunction__methods_ },
          { Py_tp_init, (void *) t_UnivariateObjectiveFunction_init_ },
          { Py_tp_getset, t_UnivariateObjectiveFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateObjectiveFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateObjectiveFunction, t_UnivariateObjectiveFunction, UnivariateObjectiveFunction);

        void t_UnivariateObjectiveFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateObjectiveFunction), &PY_TYPE_DEF(UnivariateObjectiveFunction), module, "UnivariateObjectiveFunction", 0);
        }

        void t_UnivariateObjectiveFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "class_", make_descriptor(UnivariateObjectiveFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "wrapfn_", make_descriptor(t_UnivariateObjectiveFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateObjectiveFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateObjectiveFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateObjectiveFunction::wrap_Object(UnivariateObjectiveFunction(((t_UnivariateObjectiveFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateObjectiveFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateObjectiveFunction_init_(t_UnivariateObjectiveFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          UnivariateObjectiveFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
          {
            INT_CALL(object = UnivariateObjectiveFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariateObjectiveFunction_getObjectiveFunction(t_UnivariateObjectiveFunction *self)
        {
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
        }

        static PyObject *t_UnivariateObjectiveFunction_get__objectiveFunction(t_UnivariateObjectiveFunction *self, void *data)
        {
          ::org::hipparchus::analysis::UnivariateFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getObjectiveFunction());
          return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSObserver::class$ = NULL;
        jmethodID *BatchLSObserver::mids$ = NULL;
        bool BatchLSObserver::live$ = false;

        jclass BatchLSObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_d4b8efc731d06215] = env->getMethodID(cls, "evaluationPerformed", "(II[Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/measurements/EstimationsProvider;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BatchLSObserver::evaluationPerformed(jint a0, jint a1, const JArray< ::org::orekit::orbits::Orbit > & a2, const ::org::orekit::utils::ParameterDriversList & a3, const ::org::orekit::utils::ParameterDriversList & a4, const ::org::orekit::utils::ParameterDriversList & a5, const ::org::orekit::estimation::measurements::EstimationsProvider & a6, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a7) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_d4b8efc731d06215], a0, a1, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$);
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
      namespace leastsquares {
        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args);

        static PyMethodDef t_BatchLSObserver__methods_[] = {
          DECLARE_METHOD(t_BatchLSObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSObserver, evaluationPerformed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSObserver)[] = {
          { Py_tp_methods, t_BatchLSObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSObserver, t_BatchLSObserver, BatchLSObserver);

        void t_BatchLSObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSObserver), &PY_TYPE_DEF(BatchLSObserver), module, "BatchLSObserver", 0);
        }

        void t_BatchLSObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "class_", make_descriptor(BatchLSObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "wrapfn_", make_descriptor(t_BatchLSObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSObserver::initializeClass, 1)))
            return NULL;
          return t_BatchLSObserver::wrap_Object(BatchLSObserver(((t_BatchLSObserver *) arg)->object.this$));
        }
        static PyObject *t_BatchLSObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BatchLSObserver_evaluationPerformed(t_BatchLSObserver *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::orbits::Orbit > a2((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a3((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a4((jobject) NULL);
          ::org::orekit::utils::ParameterDriversList a5((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimationsProvider a6((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a7((jobject) NULL);

          if (!parseArgs(args, "II[kkkkkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::measurements::EstimationsProvider::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/util/Map.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmParser::class$ = NULL;
              jmethodID *AcmParser::mids$ = NULL;
              bool AcmParser::live$ = false;

              jclass AcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_c626d74d226d9e14] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_beec2990b8b4fe1e] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_ba9209e328956daf] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_build_c626d74d226d9e14]));
              }

              jboolean AcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean AcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean AcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_beec2990b8b4fe1e]));
              }

              ::java::util::Map AcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_810bed48fafb0b9a]));
              }

              jboolean AcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean AcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean AcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_parse_ba9209e328956daf], a0.this$));
              }

              jboolean AcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean AcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean AcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void AcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg);
              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data);
              static PyGetSetDef t_AcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_AcmParser, header),
                DECLARE_GET_FIELD(t_AcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_AcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmParser__methods_[] = {
                DECLARE_METHOD(t_AcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, parse, METH_O),
                DECLARE_METHOD(t_AcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmParser)[] = {
                { Py_tp_methods, t_AcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AcmParser, t_AcmParser, AcmParser);
              PyObject *t_AcmParser::wrap_Object(const AcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmParser), &PY_TYPE_DEF(AcmParser), module, "AcmParser", 0);
              }

              void t_AcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "class_", make_descriptor(AcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "wrapfn_", make_descriptor(t_AcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmParser::initializeClass, 1)))
                  return NULL;
                return t_AcmParser::wrap_Object(AcmParser(((t_AcmParser *) arg)->object.this$));
              }
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }

              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
                return ::java::util::t_Map::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmHeader::class$ = NULL;
            jmethodID *AdmHeader::mids$ = NULL;
            bool AdmHeader::live$ = false;

            jclass AdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmHeader::AdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}
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
            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmHeader__methods_[] = {
              DECLARE_METHOD(t_AdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmHeader)[] = {
              { Py_tp_methods, t_AdmHeader__methods_ },
              { Py_tp_init, (void *) t_AdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(AdmHeader, t_AdmHeader, AdmHeader);

            void t_AdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmHeader), &PY_TYPE_DEF(AdmHeader), module, "AdmHeader", 0);
            }

            void t_AdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "class_", make_descriptor(AdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "wrapfn_", make_descriptor(t_AdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmHeader::initializeClass, 1)))
                return NULL;
              return t_AdmHeader::wrap_Object(AdmHeader(((t_AdmHeader *) arg)->object.this$));
            }
            static PyObject *t_AdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmHeader_init_(t_AdmHeader *self, PyObject *args, PyObject *kwds)
            {
              AdmHeader object((jobject) NULL);

              INT_CALL(object = AdmHeader());
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
#include "org/orekit/data/ZipJarCrawler$Archive$EntryStream.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler$Archive$EntryStream::class$ = NULL;
      jmethodID *ZipJarCrawler$Archive$EntryStream::mids$ = NULL;
      bool ZipJarCrawler$Archive$EntryStream::live$ = false;

      jclass ZipJarCrawler$Archive$EntryStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler$Archive$EntryStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_available_55546ef6a647f39b] = env->getMethodID(cls, "available", "()I");
          mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isDirectory_9ab94ac1dc23b105] = env->getMethodID(cls, "isDirectory", "()Z");
          mids$[mid_mark_44ed599e93e8a30c] = env->getMethodID(cls, "mark", "(I)V");
          mids$[mid_markSupported_9ab94ac1dc23b105] = env->getMethodID(cls, "markSupported", "()Z");
          mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
          mids$[mid_read_53324f422c2c7f64] = env->getMethodID(cls, "read", "([B)I");
          mids$[mid_read_296dd75c373e2c1d] = env->getMethodID(cls, "read", "([BII)I");
          mids$[mid_reset_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ZipJarCrawler$Archive$EntryStream::available() const
      {
        return env->callIntMethod(this$, mids$[mid_available_55546ef6a647f39b]);
      }

      void ZipJarCrawler$Archive$EntryStream::close() const
      {
        env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
      }

      ::java::lang::String ZipJarCrawler$Archive$EntryStream::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jboolean ZipJarCrawler$Archive$EntryStream::isDirectory() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isDirectory_9ab94ac1dc23b105]);
      }

      void ZipJarCrawler$Archive$EntryStream::mark(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_mark_44ed599e93e8a30c], a0);
      }

      jboolean ZipJarCrawler$Archive$EntryStream::markSupported() const
      {
        return env->callBooleanMethod(this$, mids$[mid_markSupported_9ab94ac1dc23b105]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read() const
      {
        return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_read_53324f422c2c7f64], a0.this$);
      }

      jint ZipJarCrawler$Archive$EntryStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        return env->callIntMethod(this$, mids$[mid_read_296dd75c373e2c1d], a0.this$, a1, a2);
      }

      void ZipJarCrawler$Archive$EntryStream::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_a1fa5dae97ea5ed2]);
      }

      jlong ZipJarCrawler$Archive$EntryStream::skip(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
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
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data);
      static PyGetSetDef t_ZipJarCrawler$Archive$EntryStream__fields_[] = {
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, directory),
        DECLARE_GET_FIELD(t_ZipJarCrawler$Archive$EntryStream, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ZipJarCrawler$Archive$EntryStream__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, available, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, close, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, getName, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, isDirectory, METH_NOARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, mark, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, markSupported, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, read, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, reset, METH_VARARGS),
        DECLARE_METHOD(t_ZipJarCrawler$Archive$EntryStream, skip, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler$Archive$EntryStream)[] = {
        { Py_tp_methods, t_ZipJarCrawler$Archive$EntryStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ZipJarCrawler$Archive$EntryStream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler$Archive$EntryStream)[] = {
        &PY_TYPE_DEF(::java::io::InputStream),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler$Archive$EntryStream, t_ZipJarCrawler$Archive$EntryStream, ZipJarCrawler$Archive$EntryStream);

      void t_ZipJarCrawler$Archive$EntryStream::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler$Archive$EntryStream), &PY_TYPE_DEF(ZipJarCrawler$Archive$EntryStream), module, "ZipJarCrawler$Archive$EntryStream", 0);
      }

      void t_ZipJarCrawler$Archive$EntryStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "class_", make_descriptor(ZipJarCrawler$Archive$EntryStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "wrapfn_", make_descriptor(t_ZipJarCrawler$Archive$EntryStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler$Archive$EntryStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler$Archive$EntryStream::wrap_Object(ZipJarCrawler$Archive$EntryStream(((t_ZipJarCrawler$Archive$EntryStream *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler$Archive$EntryStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler$Archive$EntryStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_available(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.available());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "available", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_close(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.close());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "close", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_getName(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_isDirectory(t_ZipJarCrawler$Archive$EntryStream *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isDirectory());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_mark(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jint a0;

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(self->object.mark(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "mark", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_markSupported(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.markSupported());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "markSupported", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_read(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.read());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(result = self->object.read(a0));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.read(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "read", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_reset(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(self->object.reset());
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "reset", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_skip(t_ZipJarCrawler$Archive$EntryStream *self, PyObject *args)
      {
        jlong a0;
        jlong result;

        if (!parseArgs(args, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(ZipJarCrawler$Archive$EntryStream), (PyObject *) self, "skip", args, 2);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__directory(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isDirectory());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_ZipJarCrawler$Archive$EntryStream_get__name(t_ZipJarCrawler$Archive$EntryStream *self, void *data)
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
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_0ac7022abb4b9f0c] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_ec159c1171338d74] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action EventHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
          }

          void EventHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0ac7022abb4b9f0c], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ec159c1171338d74], a0.this$, a1.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$DetectorConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$DetectorConfiguration::mids$ = NULL;
        bool CRDConfiguration$DetectorConfiguration::live$ = false;

        jclass CRDConfiguration$DetectorConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$DetectorConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAmplifierBandwidth_b74f83833fdad017] = env->getMethodID(cls, "getAmplifierBandwidth", "()D");
            mids$[mid_getAmplifierGain_b74f83833fdad017] = env->getMethodID(cls, "getAmplifierGain", "()D");
            mids$[mid_getAmplifierInUse_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAmplifierInUse", "()Ljava/lang/String;");
            mids$[mid_getApplicableWavelength_b74f83833fdad017] = env->getMethodID(cls, "getApplicableWavelength", "()D");
            mids$[mid_getAppliedVoltage_b74f83833fdad017] = env->getMethodID(cls, "getAppliedVoltage", "()D");
            mids$[mid_getDarkCount_b74f83833fdad017] = env->getMethodID(cls, "getDarkCount", "()D");
            mids$[mid_getDetectorId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDetectorId", "()Ljava/lang/String;");
            mids$[mid_getDetectorType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDetectorType", "()Ljava/lang/String;");
            mids$[mid_getExternalSignalProcessing_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getExternalSignalProcessing", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOutputPulseType", "()Ljava/lang/String;");
            mids$[mid_getOutputPulseWidth_b74f83833fdad017] = env->getMethodID(cls, "getOutputPulseWidth", "()D");
            mids$[mid_getQuantumEfficiency_b74f83833fdad017] = env->getMethodID(cls, "getQuantumEfficiency", "()D");
            mids$[mid_getSpatialFilter_b74f83833fdad017] = env->getMethodID(cls, "getSpatialFilter", "()D");
            mids$[mid_getSpectralFilter_b74f83833fdad017] = env->getMethodID(cls, "getSpectralFilter", "()D");
            mids$[mid_getTransmissionOfSpectralFilter_b74f83833fdad017] = env->getMethodID(cls, "getTransmissionOfSpectralFilter", "()D");
            mids$[mid_setAmplifierBandwidth_8ba9fe7a847cecad] = env->getMethodID(cls, "setAmplifierBandwidth", "(D)V");
            mids$[mid_setAmplifierGain_8ba9fe7a847cecad] = env->getMethodID(cls, "setAmplifierGain", "(D)V");
            mids$[mid_setAmplifierInUse_734b91ac30d5f9b4] = env->getMethodID(cls, "setAmplifierInUse", "(Ljava/lang/String;)V");
            mids$[mid_setApplicableWavelength_8ba9fe7a847cecad] = env->getMethodID(cls, "setApplicableWavelength", "(D)V");
            mids$[mid_setAppliedVoltage_8ba9fe7a847cecad] = env->getMethodID(cls, "setAppliedVoltage", "(D)V");
            mids$[mid_setDarkCount_8ba9fe7a847cecad] = env->getMethodID(cls, "setDarkCount", "(D)V");
            mids$[mid_setDetectorId_734b91ac30d5f9b4] = env->getMethodID(cls, "setDetectorId", "(Ljava/lang/String;)V");
            mids$[mid_setDetectorType_734b91ac30d5f9b4] = env->getMethodID(cls, "setDetectorType", "(Ljava/lang/String;)V");
            mids$[mid_setExternalSignalProcessing_734b91ac30d5f9b4] = env->getMethodID(cls, "setExternalSignalProcessing", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseType_734b91ac30d5f9b4] = env->getMethodID(cls, "setOutputPulseType", "(Ljava/lang/String;)V");
            mids$[mid_setOutputPulseWidth_8ba9fe7a847cecad] = env->getMethodID(cls, "setOutputPulseWidth", "(D)V");
            mids$[mid_setQuantumEfficiency_8ba9fe7a847cecad] = env->getMethodID(cls, "setQuantumEfficiency", "(D)V");
            mids$[mid_setSpatialFilter_8ba9fe7a847cecad] = env->getMethodID(cls, "setSpatialFilter", "(D)V");
            mids$[mid_setSpectralFilter_8ba9fe7a847cecad] = env->getMethodID(cls, "setSpectralFilter", "(D)V");
            mids$[mid_setTransmissionOfSpectralFilter_8ba9fe7a847cecad] = env->getMethodID(cls, "setTransmissionOfSpectralFilter", "(D)V");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$DetectorConfiguration::CRDConfiguration$DetectorConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierBandwidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierBandwidth_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAmplifierGain() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAmplifierGain_b74f83833fdad017]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getAmplifierInUse() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAmplifierInUse_1c1fa1e935d6cdcf]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getApplicableWavelength() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getApplicableWavelength_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getAppliedVoltage() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAppliedVoltage_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getDarkCount() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDarkCount_b74f83833fdad017]);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorId_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getDetectorType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDetectorType_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getExternalSignalProcessing() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalSignalProcessing_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::getOutputPulseType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOutputPulseType_1c1fa1e935d6cdcf]));
        }

        jdouble CRDConfiguration$DetectorConfiguration::getOutputPulseWidth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOutputPulseWidth_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getQuantumEfficiency() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuantumEfficiency_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpatialFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpatialFilter_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpectralFilter_b74f83833fdad017]);
        }

        jdouble CRDConfiguration$DetectorConfiguration::getTransmissionOfSpectralFilter() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTransmissionOfSpectralFilter_b74f83833fdad017]);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierBandwidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierBandwidth_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierGain(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierGain_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAmplifierInUse(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAmplifierInUse_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setApplicableWavelength(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setApplicableWavelength_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setAppliedVoltage(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAppliedVoltage_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDarkCount(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDarkCount_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorId_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setDetectorType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDetectorType_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setExternalSignalProcessing(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setExternalSignalProcessing_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseType(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseType_734b91ac30d5f9b4], a0.this$);
        }

        void CRDConfiguration$DetectorConfiguration::setOutputPulseWidth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOutputPulseWidth_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setQuantumEfficiency(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQuantumEfficiency_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpatialFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpatialFilter_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpectralFilter_8ba9fe7a847cecad], a0);
        }

        void CRDConfiguration$DetectorConfiguration::setTransmissionOfSpectralFilter(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransmissionOfSpectralFilter_8ba9fe7a847cecad], a0);
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRDConfiguration$DetectorConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data);
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$DetectorConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierBandwidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierGain),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, amplifierInUse),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, applicableWavelength),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, appliedVoltage),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, darkCount),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, detectorType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, externalSignalProcessing),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseType),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, outputPulseWidth),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, quantumEfficiency),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spatialFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, spectralFilter),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$DetectorConfiguration, transmissionOfSpectralFilter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$DetectorConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierBandwidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierGain, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAmplifierInUse, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getApplicableWavelength, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getAppliedVoltage, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDarkCount, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getDetectorType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getExternalSignalProcessing, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseType, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getOutputPulseWidth, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getQuantumEfficiency, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpatialFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, getTransmissionOfSpectralFilter, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierBandwidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierGain, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAmplifierInUse, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setApplicableWavelength, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setAppliedVoltage, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDarkCount, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setDetectorType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setExternalSignalProcessing, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseType, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setOutputPulseWidth, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setQuantumEfficiency, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpatialFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, setTransmissionOfSpectralFilter, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$DetectorConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$DetectorConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$DetectorConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$DetectorConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$DetectorConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$DetectorConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$DetectorConfiguration, t_CRDConfiguration$DetectorConfiguration, CRDConfiguration$DetectorConfiguration);

        void t_CRDConfiguration$DetectorConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$DetectorConfiguration), &PY_TYPE_DEF(CRDConfiguration$DetectorConfiguration), module, "CRDConfiguration$DetectorConfiguration", 0);
        }

        void t_CRDConfiguration$DetectorConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "class_", make_descriptor(CRDConfiguration$DetectorConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$DetectorConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$DetectorConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$DetectorConfiguration::wrap_Object(CRDConfiguration$DetectorConfiguration(((t_CRDConfiguration$DetectorConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$DetectorConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$DetectorConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$DetectorConfiguration_init_(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$DetectorConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$DetectorConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAmplifierInUse());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDarkCount(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDarkCount());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorId(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getDetectorType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectorType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getExternalSignalProcessing());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOutputPulseType());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_getTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierBandwidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierBandwidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAmplifierGain(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierGain", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAmplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAmplifierInUse(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAmplifierInUse", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setApplicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setApplicableWavelength(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setApplicableWavelength", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setAppliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setAppliedVoltage(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAppliedVoltage", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDarkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDarkCount(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDarkCount", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setDetectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDetectorType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDetectorType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setExternalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setExternalSignalProcessing(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setExternalSignalProcessing", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseType", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setOutputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setOutputPulseWidth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOutputPulseWidth", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setQuantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setQuantumEfficiency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQuantumEfficiency", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpatialFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpatialFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_setTransmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setTransmissionOfSpectralFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTransmissionOfSpectralFilter", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toCrdString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_toString(t_CRDConfiguration$DetectorConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$DetectorConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierBandwidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierBandwidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierBandwidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierBandwidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAmplifierGain());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierGain(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAmplifierGain(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierGain", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAmplifierInUse());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__amplifierInUse(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAmplifierInUse(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "amplifierInUse", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getApplicableWavelength());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__applicableWavelength(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setApplicableWavelength(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "applicableWavelength", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAppliedVoltage());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__appliedVoltage(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setAppliedVoltage(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "appliedVoltage", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__darkCount(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDarkCount());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__darkCount(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDarkCount(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "darkCount", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorId(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorId());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorId(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__detectorType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectorType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__detectorType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDetectorType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "detectorType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getExternalSignalProcessing());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__externalSignalProcessing(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setExternalSignalProcessing(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "externalSignalProcessing", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOutputPulseType());
          return j2p(value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseType(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOutputPulseType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseType", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOutputPulseWidth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__outputPulseWidth(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setOutputPulseWidth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "outputPulseWidth", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuantumEfficiency());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__quantumEfficiency(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setQuantumEfficiency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "quantumEfficiency", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpatialFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spatialFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpatialFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spatialFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__spectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spectralFilter", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$DetectorConfiguration_get__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTransmissionOfSpectralFilter());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$DetectorConfiguration_set__transmissionOfSpectralFilter(t_CRDConfiguration$DetectorConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setTransmissionOfSpectralFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "transmissionOfSpectralFilter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemParser.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemParser::class$ = NULL;
              jmethodID *AemParser::mids$ = NULL;
              bool AemParser::live$ = false;

              jclass AemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_a8b0b34af1805656] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_beec2990b8b4fe1e] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_c30bbb64589ab6b2] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/aem/Aem;");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_build_a8b0b34af1805656]));
              }

              jboolean AemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean AemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean AemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_beec2990b8b4fe1e]));
              }

              jboolean AemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean AemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean AemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::adm::aem::Aem AemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::aem::Aem(env->callObjectMethod(this$, mids$[mid_parse_c30bbb64589ab6b2], a0.this$));
              }

              jboolean AemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean AemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean AemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void AemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
            namespace aem {
              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg);
              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args);
              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data);
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data);
              static PyGetSetDef t_AemParser__fields_[] = {
                DECLARE_GET_FIELD(t_AemParser, header),
                DECLARE_GET_FIELD(t_AemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemParser__methods_[] = {
                DECLARE_METHOD(t_AemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, parse, METH_O),
                DECLARE_METHOD(t_AemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemParser)[] = {
                { Py_tp_methods, t_AemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AemParser, t_AemParser, AemParser);
              PyObject *t_AemParser::wrap_Object(const AemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemParser *self = (t_AemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AemParser), &PY_TYPE_DEF(AemParser), module, "AemParser", 0);
              }

              void t_AemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "class_", make_descriptor(AemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "wrapfn_", make_descriptor(t_AemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemParser::initializeClass, 1)))
                  return NULL;
                return t_AemParser::wrap_Object(AemParser(((t_AemParser *) arg)->object.this$));
              }
              static PyObject *t_AemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemParser_of_(t_AemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AemParser_build(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AemParser_finalizeData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AemParser_finalizeHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AemParser_finalizeMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AemParser_getHeader(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AemParser_inData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AemParser_inHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AemParser_inMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AemParser_parse(t_AemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::Aem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::aem::t_Aem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AemParser_prepareData(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AemParser_prepareHeader(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AemParser_prepareMetadata(t_AemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AemParser_reset(t_AemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AemParser_get__parameters_(t_AemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemParser_get__header(t_AemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresFactory::class$ = NULL;
            jmethodID *LeastSquaresFactory::mids$ = NULL;
            bool LeastSquaresFactory::live$ = false;

            jclass LeastSquaresFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_countEvaluations_bc3bf0361cf57cc2] = env->getStaticMethodID(cls, "countEvaluations", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/util/Incrementor;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_d73376b7ee9ea4da] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_8439c4332e96ba70] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_a2ad252f198005e9] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;[D[DLorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;II)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_create_f8d2e8c227588133] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/optim/ConvergenceChecker;IIZLorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_evaluationChecker_fd9762d68ea9c296] = env->getStaticMethodID(cls, "evaluationChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_model_d5a9fe02790fb184] = env->getStaticMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
                mids$[mid_weightDiagonal_e088da43f85317f3] = env->getStaticMethodID(cls, "weightDiagonal", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_weightMatrix_73812dc734cb49ee] = env->getStaticMethodID(cls, "weightMatrix", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::countEvaluations(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::util::Incrementor & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_countEvaluations_bc3bf0361cf57cc2], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::optim::ConvergenceChecker & a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_d73376b7ee9ea4da], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_8439c4332e96ba70], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::optim::ConvergenceChecker & a5, jint a6, jint a7)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_a2ad252f198005e9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::create(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::optim::ConvergenceChecker & a4, jint a5, jint a6, jboolean a7, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a8)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_create_f8d2e8c227588133], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresFactory::evaluationChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::ConvergenceChecker(env->callStaticObjectMethod(cls, mids$[mid_evaluationChecker_fd9762d68ea9c296], a0.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction LeastSquaresFactory::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction(env->callStaticObjectMethod(cls, mids$[mid_model_d5a9fe02790fb184], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightDiagonal(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealVector & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightDiagonal_e088da43f85317f3], a0.this$, a1.this$));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresFactory::weightMatrix(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0, const ::org::hipparchus::linear::RealMatrix & a1)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callStaticObjectMethod(cls, mids$[mid_weightMatrix_73812dc734cb49ee], a0.this$, a1.this$));
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
            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args);
            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_LeastSquaresFactory__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, countEvaluations, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, create, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, evaluationChecker, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, model, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightDiagonal, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresFactory, weightMatrix, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresFactory)[] = {
              { Py_tp_methods, t_LeastSquaresFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresFactory, t_LeastSquaresFactory, LeastSquaresFactory);

            void t_LeastSquaresFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresFactory), &PY_TYPE_DEF(LeastSquaresFactory), module, "LeastSquaresFactory", 0);
            }

            void t_LeastSquaresFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "class_", make_descriptor(LeastSquaresFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "wrapfn_", make_descriptor(t_LeastSquaresFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresFactory::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresFactory::wrap_Object(LeastSquaresFactory(((t_LeastSquaresFactory *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresFactory_countEvaluations(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::util::Incrementor a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::util::Incrementor::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::countEvaluations(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "countEvaluations", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_create(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 7:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKII", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 8:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > a3((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a5((jobject) NULL);
                  PyTypeObject **p5;
                  jint a6;
                  jint a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kk[D[DkKII", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a6, &a7))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
                break;
               case 9:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a1((jobject) NULL);
                  ::org::hipparchus::linear::RealVector a2((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  jint a5;
                  jint a6;
                  jboolean a7;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a8((jobject) NULL);
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

                  if (!parseArgs(args, "kkkkKIIZk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_, &a5, &a6, &a7, &a8))
                  {
                    OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::create(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                    return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "create", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_evaluationChecker(PyTypeObject *type, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::evaluationChecker(a0));
                return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
              }

              PyErr_SetArgsError(type, "evaluationChecker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_model(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::model(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_MultivariateJacobianFunction::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightDiagonal(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightDiagonal(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightDiagonal", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresFactory_weightMatrix(PyTypeObject *type, PyObject *args)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresFactory::weightMatrix(a0, a1));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "weightMatrix", args);
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
#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"
#include "java/util/Comparator.h"
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
              mids$[mid_setComparator_2c01874c65d2ef2f] = env->getMethodID(cls, "setComparator", "(Ljava/util/Comparator;)V");
              mids$[mid_solveILS_78e4e9f588c2bfe0] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_getDiagReference_25e1757a36c4dde2] = env->getMethodID(cls, "getDiagReference", "()[D");
              mids$[mid_getLowReference_25e1757a36c4dde2] = env->getMethodID(cls, "getLowReference", "()[D");
              mids$[mid_getDecorrelatedReference_25e1757a36c4dde2] = env->getMethodID(cls, "getDecorrelatedReference", "()[D");
              mids$[mid_getZInverseTransformationReference_4d095d7a08163110] = env->getMethodID(cls, "getZInverseTransformationReference", "()[I");
              mids$[mid_zIndex_92ecd94558bf0c68] = env->getMethodID(cls, "zIndex", "(II)I");
              mids$[mid_lIndex_92ecd94558bf0c68] = env->getMethodID(cls, "lIndex", "(II)I");
              mids$[mid_discreteSearch_a1fa5dae97ea5ed2] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_992f722e5b5b80cb] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_permutation_d5322b8b512aeb26] = env->getMethodID(cls, "permutation", "(ID)V");
              mids$[mid_integerGaussTransformation_3313c75e3e16c428] = env->getMethodID(cls, "integerGaussTransformation", "(II)V");
              mids$[mid_getMaxSolution_55546ef6a647f39b] = env->getMethodID(cls, "getMaxSolution", "()I");
              mids$[mid_addSolution_49319a360f3ed64e] = env->getMethodID(cls, "addSolution", "([JD)V");
              mids$[mid_getSolutionsSize_55546ef6a647f39b] = env->getMethodID(cls, "getSolutionsSize", "()I");
              mids$[mid_removeSolution_a1fa5dae97ea5ed2] = env->getMethodID(cls, "removeSolution", "()V");
              mids$[mid_ltdlDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_inverseDecomposition_a1fa5dae97ea5ed2] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_getMaxDistance_b74f83833fdad017] = env->getMethodID(cls, "getMaxDistance", "()D");
              mids$[mid_getSize_55546ef6a647f39b] = env->getMethodID(cls, "getSize", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractLambdaMethod::setComparator(const ::java::util::Comparator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setComparator_2c01874c65d2ef2f], a0.this$);
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > AbstractLambdaMethod::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_78e4e9f588c2bfe0], a0, a1.this$, a2.this$, a3.this$));
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
#include "org/orekit/gnss/metric/ntrip/Record.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Record::class$ = NULL;
          jmethodID *Record::mids$ = NULL;
          bool Record::live$ = false;

          jclass Record::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Record");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMisc_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMisc", "()Ljava/lang/String;");
              mids$[mid_getRecordType_3f153b7c7459a9e2] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getFieldsNumber_55546ef6a647f39b] = env->getMethodID(cls, "getFieldsNumber", "()I");
              mids$[mid_getField_2a9bffd3d5397f7c] = env->getMethodID(cls, "getField", "(I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String Record::getMisc() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMisc_1c1fa1e935d6cdcf]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType Record::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_3f153b7c7459a9e2]));
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
          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Record_getMisc(t_Record *self);
          static PyObject *t_Record_getRecordType(t_Record *self);
          static PyObject *t_Record_get__misc(t_Record *self, void *data);
          static PyObject *t_Record_get__recordType(t_Record *self, void *data);
          static PyGetSetDef t_Record__fields_[] = {
            DECLARE_GET_FIELD(t_Record, misc),
            DECLARE_GET_FIELD(t_Record, recordType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Record__methods_[] = {
            DECLARE_METHOD(t_Record, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Record, getMisc, METH_NOARGS),
            DECLARE_METHOD(t_Record, getRecordType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Record)[] = {
            { Py_tp_methods, t_Record__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Record__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Record)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Record, t_Record, Record);

          void t_Record::install(PyObject *module)
          {
            installType(&PY_TYPE(Record), &PY_TYPE_DEF(Record), module, "Record", 0);
          }

          void t_Record::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "class_", make_descriptor(Record::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "wrapfn_", make_descriptor(t_Record::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Record), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Record_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Record::initializeClass, 1)))
              return NULL;
            return t_Record::wrap_Object(Record(((t_Record *) arg)->object.this$));
          }
          static PyObject *t_Record_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Record::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Record_getMisc(t_Record *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMisc());
            return j2p(result);
          }

          static PyObject *t_Record_getRecordType(t_Record *self)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);
            OBJ_CALL(result = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
          }

          static PyObject *t_Record_get__misc(t_Record *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMisc());
            return j2p(value);
          }

          static PyObject *t_Record_get__recordType(t_Record *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *Theta::class$ = NULL;
          jmethodID *Theta::mids$ = NULL;
          bool Theta::live$ = false;

          jclass Theta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/Theta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_2f0868cbf8c045d4] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta2_2f0868cbf8c045d4] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta3_2f0868cbf8c045d4] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/complex/Complex;");
              mids$[mid_theta4_2f0868cbf8c045d4] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/complex/Complex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex Theta::theta1() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta1_2f0868cbf8c045d4]));
          }

          ::org::hipparchus::complex::Complex Theta::theta2() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta2_2f0868cbf8c045d4]));
          }

          ::org::hipparchus::complex::Complex Theta::theta3() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta3_2f0868cbf8c045d4]));
          }

          ::org::hipparchus::complex::Complex Theta::theta4() const
          {
            return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_theta4_2f0868cbf8c045d4]));
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
          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Theta_theta1(t_Theta *self);
          static PyObject *t_Theta_theta2(t_Theta *self);
          static PyObject *t_Theta_theta3(t_Theta *self);
          static PyObject *t_Theta_theta4(t_Theta *self);

          static PyMethodDef t_Theta__methods_[] = {
            DECLARE_METHOD(t_Theta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Theta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_Theta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Theta)[] = {
            { Py_tp_methods, t_Theta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Theta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Theta, t_Theta, Theta);

          void t_Theta::install(PyObject *module)
          {
            installType(&PY_TYPE(Theta), &PY_TYPE_DEF(Theta), module, "Theta", 0);
          }

          void t_Theta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "class_", make_descriptor(Theta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "wrapfn_", make_descriptor(t_Theta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Theta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Theta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Theta::initializeClass, 1)))
              return NULL;
            return t_Theta::wrap_Object(Theta(((t_Theta *) arg)->object.this$));
          }
          static PyObject *t_Theta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Theta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Theta_theta1(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta2(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta3(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          static PyObject *t_Theta_theta4(t_Theta *self)
          {
            ::org::hipparchus::complex::Complex result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphericCorrectionType::class$ = NULL;
          jmethodID *IonosphericCorrectionType::mids$ = NULL;
          bool IonosphericCorrectionType::live$ = false;
          IonosphericCorrectionType *IonosphericCorrectionType::BDS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GAL = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GPS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::IRN = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::QZS = NULL;

          jclass IonosphericCorrectionType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphericCorrectionType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_7bd07224476383b6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_values_2bf5d6902d31e785] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GAL = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GPS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              IRN = new IonosphericCorrectionType(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              QZS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphericCorrectionType IonosphericCorrectionType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IonosphericCorrectionType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7bd07224476383b6], a0.this$));
          }

          JArray< IonosphericCorrectionType > IonosphericCorrectionType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IonosphericCorrectionType >(env->callStaticObjectMethod(cls, mids$[mid_values_2bf5d6902d31e785]));
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
          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type);
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data);
          static PyGetSetDef t_IonosphericCorrectionType__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphericCorrectionType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphericCorrectionType__methods_[] = {
            DECLARE_METHOD(t_IonosphericCorrectionType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IonosphericCorrectionType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericCorrectionType)[] = {
            { Py_tp_methods, t_IonosphericCorrectionType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IonosphericCorrectionType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericCorrectionType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IonosphericCorrectionType, t_IonosphericCorrectionType, IonosphericCorrectionType);
          PyObject *t_IonosphericCorrectionType::wrap_Object(const IonosphericCorrectionType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IonosphericCorrectionType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IonosphericCorrectionType::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericCorrectionType), &PY_TYPE_DEF(IonosphericCorrectionType), module, "IonosphericCorrectionType", 0);
          }

          void t_IonosphericCorrectionType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "class_", make_descriptor(IonosphericCorrectionType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "wrapfn_", make_descriptor(t_IonosphericCorrectionType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphericCorrectionType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "BDS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GAL", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GPS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "IRN", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "QZS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::QZS)));
          }

          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericCorrectionType::initializeClass, 1)))
              return NULL;
            return t_IonosphericCorrectionType::wrap_Object(IonosphericCorrectionType(((t_IonosphericCorrectionType *) arg)->object.this$));
          }
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericCorrectionType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IonosphericCorrectionType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::valueOf(a0));
              return t_IonosphericCorrectionType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type)
          {
            JArray< IonosphericCorrectionType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::values());
            return JArray<jobject>(result.this$).wrap(t_IonosphericCorrectionType::wrap_jobject);
          }
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data)
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
#include "org/orekit/propagation/PythonAbstractPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractPropagator::class$ = NULL;
      jmethodID *PythonAbstractPropagator::mids$ = NULL;
      bool PythonAbstractPropagator::live$ = false;

      jclass PythonAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addEventDetector_e13564f833403504] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_5df44e253e7e7782] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_cb666ea1a15f5210] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_6845ec704c846b03] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractPropagator::PythonAbstractPropagator() : ::org::orekit::propagation::AbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractPropagator::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self);
      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonAbstractPropagator, t_PythonAbstractPropagator, PythonAbstractPropagator);

      void t_PythonAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractPropagator), &PY_TYPE_DEF(PythonAbstractPropagator), module, "PythonAbstractPropagator", 1);
      }

      void t_PythonAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "class_", make_descriptor(PythonAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "wrapfn_", make_descriptor(t_PythonAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractPropagator::wrap_Object(PythonAbstractPropagator(((t_PythonAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractPropagator object((jobject) NULL);

        INT_CALL(object = PythonAbstractPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data)
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
#include "org/orekit/bodies/LoxodromeArc.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LoxodromeArc::class$ = NULL;
      jmethodID *LoxodromeArc::mids$ = NULL;
      bool LoxodromeArc::live$ = false;

      jclass LoxodromeArc::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LoxodromeArc");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ea24656e424c71b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_34b55d8fdce3d642] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_calculatePointAlongArc_11599325d56b0055] = env->getMethodID(cls, "calculatePointAlongArc", "(D)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getDistance_b74f83833fdad017] = env->getMethodID(cls, "getDistance", "()D");
          mids$[mid_getFinalPoint_963915d358b1e63a] = env->getMethodID(cls, "getFinalPoint", "()Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_ea24656e424c71b9, a0.this$, a1.this$, a2.this$)) {}

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_34b55d8fdce3d642, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::calculatePointAlongArc(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_calculatePointAlongArc_11599325d56b0055], a0));
      }

      jdouble LoxodromeArc::getDistance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_b74f83833fdad017]);
      }

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::getFinalPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getFinalPoint_963915d358b1e63a]));
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
      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg);
      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data);
      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data);
      static PyGetSetDef t_LoxodromeArc__fields_[] = {
        DECLARE_GET_FIELD(t_LoxodromeArc, distance),
        DECLARE_GET_FIELD(t_LoxodromeArc, finalPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoxodromeArc__methods_[] = {
        DECLARE_METHOD(t_LoxodromeArc, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, calculatePointAlongArc, METH_O),
        DECLARE_METHOD(t_LoxodromeArc, getDistance, METH_NOARGS),
        DECLARE_METHOD(t_LoxodromeArc, getFinalPoint, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoxodromeArc)[] = {
        { Py_tp_methods, t_LoxodromeArc__methods_ },
        { Py_tp_init, (void *) t_LoxodromeArc_init_ },
        { Py_tp_getset, t_LoxodromeArc__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoxodromeArc)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Loxodrome),
        NULL
      };

      DEFINE_TYPE(LoxodromeArc, t_LoxodromeArc, LoxodromeArc);

      void t_LoxodromeArc::install(PyObject *module)
      {
        installType(&PY_TYPE(LoxodromeArc), &PY_TYPE_DEF(LoxodromeArc), module, "LoxodromeArc", 0);
      }

      void t_LoxodromeArc::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "class_", make_descriptor(LoxodromeArc::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "wrapfn_", make_descriptor(t_LoxodromeArc::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoxodromeArc::initializeClass, 1)))
          return NULL;
        return t_LoxodromeArc::wrap_Object(LoxodromeArc(((t_LoxodromeArc *) arg)->object.this$));
      }
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoxodromeArc::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2, a3));
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

      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.calculatePointAlongArc(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "calculatePointAlongArc", arg);
        return NULL;
      }

      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDistance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDistance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
