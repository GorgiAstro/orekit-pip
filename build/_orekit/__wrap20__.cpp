#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::MM = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NS = NULL;
          ::org::orekit::utils::units::Unit *Units::SEMI_CIRCLE = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              MM = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NS", "Lorg/orekit/utils/units/Unit;"));
              SEMI_CIRCLE = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SEMI_CIRCLE", "Lorg/orekit/utils/units/Unit;"));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "SEMI_CIRCLE", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::SEMI_CIRCLE)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
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
#include "org/orekit/rugged/linesensor/LinearLineDatation.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LinearLineDatation::class$ = NULL;
        jmethodID *LinearLineDatation::mids$ = NULL;
        bool LinearLineDatation::live$ = false;

        jclass LinearLineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LinearLineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7a7066686bdc7efc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DD)V");
            mids$[mid_getDate_a76f1ca2cc1b76e5] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_e912d21057defe63] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_0ba5fed9597b693e] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearLineDatation::LinearLineDatation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7a7066686bdc7efc, a0.this$, a1, a2)) {}

        ::org::orekit::time::AbsoluteDate LinearLineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_a76f1ca2cc1b76e5], a0));
        }

        jdouble LinearLineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_e912d21057defe63], a0.this$);
        }

        jdouble LinearLineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_0ba5fed9597b693e], a0);
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
      namespace linesensor {
        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg);

        static PyMethodDef t_LinearLineDatation__methods_[] = {
          DECLARE_METHOD(t_LinearLineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearLineDatation)[] = {
          { Py_tp_methods, t_LinearLineDatation__methods_ },
          { Py_tp_init, (void *) t_LinearLineDatation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearLineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearLineDatation, t_LinearLineDatation, LinearLineDatation);

        void t_LinearLineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearLineDatation), &PY_TYPE_DEF(LinearLineDatation), module, "LinearLineDatation", 0);
        }

        void t_LinearLineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "class_", make_descriptor(LinearLineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "wrapfn_", make_descriptor(t_LinearLineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearLineDatation::initializeClass, 1)))
            return NULL;
          return t_LinearLineDatation::wrap_Object(LinearLineDatation(((t_LinearLineDatation *) arg)->object.this$));
        }
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearLineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          LinearLineDatation object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = LinearLineDatation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractWindUp.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractWindUp::class$ = NULL;
          jmethodID *PythonAbstractWindUp::mids$ = NULL;
          bool PythonAbstractWindUp::live$ = false;

          jclass PythonAbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0afbc95553157507] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/estimation/measurements/gnss/Dipole;)V");
              mids$[mid_emitterToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_receiverToInert_fd1bf64855bd2d79] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWindUp::PythonAbstractWindUp(const ::org::orekit::estimation::measurements::gnss::Dipole & a0, const ::org::orekit::estimation::measurements::gnss::Dipole & a1) : ::org::orekit::estimation::measurements::gnss::AbstractWindUp(env->newObject(initializeClass, &mids$, mid_init$_0afbc95553157507, a0.this$, a1.this$)) {}

          void PythonAbstractWindUp::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractWindUp::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractWindUp::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args);
          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self);
          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data);
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data);
          static PyGetSetDef t_PythonAbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, self),
            DECLARE_GET_FIELD(t_PythonAbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWindUp, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWindUp)[] = {
            { Py_tp_methods, t_PythonAbstractWindUp__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWindUp_init_ },
            { Py_tp_getset, t_PythonAbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWindUp)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractWindUp),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWindUp, t_PythonAbstractWindUp, PythonAbstractWindUp);
          PyObject *t_PythonAbstractWindUp::wrap_Object(const PythonAbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractWindUp *self = (t_PythonAbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWindUp), &PY_TYPE_DEF(PythonAbstractWindUp), module, "PythonAbstractWindUp", 1);
          }

          void t_PythonAbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "class_", make_descriptor(PythonAbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "wrapfn_", make_descriptor(t_PythonAbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWindUp), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWindUp::initializeClass);
            JNINativeMethod methods[] = {
              { "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_emitterToInert0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWindUp_pythonDecRef1 },
              { "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonAbstractWindUp_receiverToInert2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonAbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWindUp::wrap_Object(PythonAbstractWindUp(((t_PythonAbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractWindUp_of_(t_PythonAbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractWindUp_init_(t_PythonAbstractWindUp *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::Dipole a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::Dipole a1((jobject) NULL);
            PythonAbstractWindUp object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWindUp(a0, a1));
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

          static PyObject *t_PythonAbstractWindUp_finalize(t_PythonAbstractWindUp *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWindUp_pythonExtension(t_PythonAbstractWindUp *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractWindUp_emitterToInert0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "emitterToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("emitterToInert", result);
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

          static void JNICALL t_PythonAbstractWindUp_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonAbstractWindUp_receiverToInert2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWindUp::mids$[PythonAbstractWindUp::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurementBase(a0));
            PyObject *result = PyObject_CallMethod(obj, "receiverToInert", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
            {
              throwTypeError("receiverToInert", result);
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

          static PyObject *t_PythonAbstractWindUp_get__self(t_PythonAbstractWindUp *self, void *data)
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
          static PyObject *t_PythonAbstractWindUp_get__parameters_(t_PythonAbstractWindUp *self, void *data)
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
#include "org/hipparchus/fitting/WeightedObservedPoints.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoints::class$ = NULL;
      jmethodID *WeightedObservedPoints::mids$ = NULL;
      bool WeightedObservedPoints::live$ = false;

      jclass WeightedObservedPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_63ac42c3bd1a5151] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fitting/WeightedObservedPoint;)V");
          mids$[mid_add_1d715fa3b7b756e1] = env->getMethodID(cls, "add", "(DD)V");
          mids$[mid_add_d0d6094fbd7015c5] = env->getMethodID(cls, "add", "(DDD)V");
          mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_toList_a6156df500549a58] = env->getMethodID(cls, "toList", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoints::WeightedObservedPoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void WeightedObservedPoints::add(const ::org::hipparchus::fitting::WeightedObservedPoint & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_63ac42c3bd1a5151], a0.this$);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_add_1d715fa3b7b756e1], a0, a1);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_add_d0d6094fbd7015c5], a0, a1, a2);
      }

      void WeightedObservedPoints::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
      }

      ::java::util::List WeightedObservedPoints::toList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_toList_a6156df500549a58]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args);
      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self);
      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self);

      static PyMethodDef t_WeightedObservedPoints__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, add, METH_VARARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, clear, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, toList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoints)[] = {
        { Py_tp_methods, t_WeightedObservedPoints__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoints_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoints, t_WeightedObservedPoints, WeightedObservedPoints);

      void t_WeightedObservedPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoints), &PY_TYPE_DEF(WeightedObservedPoints), module, "WeightedObservedPoints", 0);
      }

      void t_WeightedObservedPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "class_", make_descriptor(WeightedObservedPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "wrapfn_", make_descriptor(t_WeightedObservedPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoints::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoints::wrap_Object(WeightedObservedPoints(((t_WeightedObservedPoints *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds)
      {
        WeightedObservedPoints object((jobject) NULL);

        INT_CALL(object = WeightedObservedPoints());
        self->object = object;

        return 0;
      }

      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::fitting::WeightedObservedPoint a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::fitting::WeightedObservedPoint::initializeClass, &a0))
            {
              OBJ_CALL(self->object.add(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(self->object.add(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.add(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.toList());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::fitting::PY_TYPE(WeightedObservedPoint));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonSeriesTerm.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonSeriesTerm::class$ = NULL;
      jmethodID *PythonSeriesTerm::mids$ = NULL;
      bool PythonSeriesTerm::live$ = false;

      jclass PythonSeriesTerm::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonSeriesTerm");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_argument_68f0627d4a947675] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argument_8988cf596cc2decd] = env->getMethodID(cls, "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_argumentDerivative_68f0627d4a947675] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D");
          mids$[mid_argumentDerivative_8988cf596cc2decd] = env->getMethodID(cls, "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSeriesTerm::PythonSeriesTerm() : ::org::orekit::data::SeriesTerm(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonSeriesTerm::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonSeriesTerm::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonSeriesTerm::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self);
      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args);
      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data);
      static PyGetSetDef t_PythonSeriesTerm__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSeriesTerm, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSeriesTerm__methods_[] = {
        DECLARE_METHOD(t_PythonSeriesTerm, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSeriesTerm, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSeriesTerm, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSeriesTerm)[] = {
        { Py_tp_methods, t_PythonSeriesTerm__methods_ },
        { Py_tp_init, (void *) t_PythonSeriesTerm_init_ },
        { Py_tp_getset, t_PythonSeriesTerm__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSeriesTerm)[] = {
        &PY_TYPE_DEF(::org::orekit::data::SeriesTerm),
        NULL
      };

      DEFINE_TYPE(PythonSeriesTerm, t_PythonSeriesTerm, PythonSeriesTerm);

      void t_PythonSeriesTerm::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSeriesTerm), &PY_TYPE_DEF(PythonSeriesTerm), module, "PythonSeriesTerm", 1);
      }

      void t_PythonSeriesTerm::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "class_", make_descriptor(PythonSeriesTerm::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "wrapfn_", make_descriptor(t_PythonSeriesTerm::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSeriesTerm), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSeriesTerm::initializeClass);
        JNINativeMethod methods[] = {
          { "argument", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argument0 },
          { "argument", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argument1 },
          { "argumentDerivative", "(Lorg/orekit/data/BodiesElements;)D", (void *) t_PythonSeriesTerm_argumentDerivative2 },
          { "argumentDerivative", "(Lorg/orekit/data/FieldBodiesElements;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonSeriesTerm_argumentDerivative3 },
          { "pythonDecRef", "()V", (void *) t_PythonSeriesTerm_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonSeriesTerm_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSeriesTerm::initializeClass, 1)))
          return NULL;
        return t_PythonSeriesTerm::wrap_Object(PythonSeriesTerm(((t_PythonSeriesTerm *) arg)->object.this$));
      }
      static PyObject *t_PythonSeriesTerm_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSeriesTerm::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSeriesTerm_init_(t_PythonSeriesTerm *self, PyObject *args, PyObject *kwds)
      {
        PythonSeriesTerm object((jobject) NULL);

        INT_CALL(object = PythonSeriesTerm());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSeriesTerm_finalize(t_PythonSeriesTerm *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSeriesTerm_pythonExtension(t_PythonSeriesTerm *self, PyObject *args)
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

      static jdouble JNICALL t_PythonSeriesTerm_argument0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argument", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argument1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argument", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argument", result);
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

      static jdouble JNICALL t_PythonSeriesTerm_argumentDerivative2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("argumentDerivative", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonSeriesTerm_argumentDerivative3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::data::t_FieldBodiesElements::wrap_Object(::org::orekit::data::FieldBodiesElements(a0));
        PyObject *result = PyObject_CallMethod(obj, "argumentDerivative", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("argumentDerivative", result);
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

      static void JNICALL t_PythonSeriesTerm_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSeriesTerm::mids$[PythonSeriesTerm::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSeriesTerm_get__self(t_PythonSeriesTerm *self, void *data)
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
#include "org/hipparchus/analysis/integration/gauss/FieldRuleFactory.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldRuleFactory::class$ = NULL;
          jmethodID *FieldRuleFactory::mids$ = NULL;
          bool FieldRuleFactory::live$ = false;

          jclass FieldRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_086dd68d091255ed] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair FieldRuleFactory::getRule(jint a0) const
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
          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args);
          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg);
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data);
          static PyGetSetDef t_FieldRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRuleFactory, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRuleFactory)[] = {
            { Py_tp_methods, t_FieldRuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRuleFactory, t_FieldRuleFactory, FieldRuleFactory);
          PyObject *t_FieldRuleFactory::wrap_Object(const FieldRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRuleFactory *self = (t_FieldRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRuleFactory), &PY_TYPE_DEF(FieldRuleFactory), module, "FieldRuleFactory", 0);
          }

          void t_FieldRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "class_", make_descriptor(FieldRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "wrapfn_", make_descriptor(t_FieldRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldRuleFactory::wrap_Object(FieldRuleFactory(((t_FieldRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRuleFactory_of_(t_FieldRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldRuleFactory_getRule(t_FieldRuleFactory *self, PyObject *arg)
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
          static PyObject *t_FieldRuleFactory_get__parameters_(t_FieldRuleFactory *self, void *data)
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
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ClassicalRungeKuttaFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder, t_ClassicalRungeKuttaFieldIntegratorBuilder, ClassicalRungeKuttaFieldIntegratorBuilder);
        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegratorBuilder), module, "ClassicalRungeKuttaFieldIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(ClassicalRungeKuttaFieldIntegratorBuilder(((t_ClassicalRungeKuttaFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
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

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixChangingVisitor::class$ = NULL;
      jmethodID *RealMatrixChangingVisitor::mids$ = NULL;
      bool RealMatrixChangingVisitor::live$ = false;

      jclass RealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_456d9a2f64d6b28d] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_4f773f7fb5410128] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_456d9a2f64d6b28d]);
      }

      void RealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      jdouble RealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_4f773f7fb5410128], a0, a1, a2);
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
      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self);
      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixChangingVisitor, t_RealMatrixChangingVisitor, RealMatrixChangingVisitor);

      void t_RealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixChangingVisitor), &PY_TYPE_DEF(RealMatrixChangingVisitor), module, "RealMatrixChangingVisitor", 0);
      }

      void t_RealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "class_", make_descriptor(RealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_RealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixChangingVisitor::wrap_Object(RealMatrixChangingVisitor(((t_RealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixChangingVisitor_end(t_RealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixChangingVisitor_start(t_RealMatrixChangingVisitor *self, PyObject *args)
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

      static PyObject *t_RealMatrixChangingVisitor_visit(t_RealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54Integrator::class$ = NULL;
        jmethodID *HighamHall54Integrator::mids$ = NULL;
        bool HighamHall54Integrator::live$ = false;

        jclass HighamHall54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5787c5177784e12] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_b25e5cc9fd980192] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54StateInterpolator;");
            mids$[mid_estimateError_8ae23a975a0e5320] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e5787c5177784e12, a0, a1, a2.this$, a3.this$)) {}

        HighamHall54Integrator::HighamHall54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > HighamHall54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > HighamHall54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > HighamHall54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
        }

        jint HighamHall54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
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
        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args);
        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data);
        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data);
        static PyGetSetDef t_HighamHall54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54Integrator, a),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, b),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, c),
          DECLARE_GET_FIELD(t_HighamHall54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54Integrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54Integrator)[] = {
          { Py_tp_methods, t_HighamHall54Integrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54Integrator_init_ },
          { Py_tp_getset, t_HighamHall54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54Integrator, t_HighamHall54Integrator, HighamHall54Integrator);

        void t_HighamHall54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54Integrator), &PY_TYPE_DEF(HighamHall54Integrator), module, "HighamHall54Integrator", 0);
        }

        void t_HighamHall54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "class_", make_descriptor(HighamHall54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "wrapfn_", make_descriptor(t_HighamHall54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54Integrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54Integrator::wrap_Object(HighamHall54Integrator(((t_HighamHall54Integrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HighamHall54Integrator_init_(t_HighamHall54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              HighamHall54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = HighamHall54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_HighamHall54Integrator_getA(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getB(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getC(t_HighamHall54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_getOrder(t_HighamHall54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_HighamHall54Integrator_get__a(t_HighamHall54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54Integrator_get__b(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__c(t_HighamHall54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_HighamHall54Integrator_get__order(t_HighamHall54Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorConverter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorConverter::class$ = NULL;
        jmethodID *PythonPropagatorConverter::mids$ = NULL;
        bool PythonPropagatorConverter::live$ = false;

        jclass PythonPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_convert_b26c78fdb005126c] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_392814b1b1bbdd34] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_979b6b07281c1e27] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_b641a72d0c9694a7] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorConverter::PythonPropagatorConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonPropagatorConverter::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace conversion {
        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self);
        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorConverter, t_PythonPropagatorConverter, PythonPropagatorConverter);

        void t_PythonPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorConverter), &PY_TYPE_DEF(PythonPropagatorConverter), module, "PythonPropagatorConverter", 1);
        }

        void t_PythonPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "class_", make_descriptor(PythonPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "wrapfn_", make_descriptor(t_PythonPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert0 },
            { "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert1 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert2 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert3 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorConverter_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorConverter::wrap_Object(PythonPropagatorConverter(((t_PythonPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorConverter object((jobject) NULL);

          INT_CALL(object = PythonPropagatorConverter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = JArray<jstring>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = ::java::util::t_List::wrap_Object(::java::util::List(a2));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = JArray<jstring>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = ::java::util::t_List::wrap_Object(::java::util::List(a3));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ordering::class$ = NULL;
              jmethodID *Ordering::mids$ = NULL;
              bool Ordering::live$ = false;
              Ordering *Ordering::FULL = NULL;
              Ordering *Ordering::LTM = NULL;
              Ordering *Ordering::LTMWCC = NULL;
              Ordering *Ordering::UTM = NULL;
              Ordering *Ordering::UTMWCC = NULL;

              jclass Ordering::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ordering");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_3150c63f89c5aaa6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_values_311c2f15e5faf67b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FULL = new Ordering(env->getStaticObjectField(cls, "FULL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTM = new Ordering(env->getStaticObjectField(cls, "LTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTMWCC = new Ordering(env->getStaticObjectField(cls, "LTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTM = new Ordering(env->getStaticObjectField(cls, "UTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTMWCC = new Ordering(env->getStaticObjectField(cls, "UTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ordering Ordering::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return Ordering(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3150c63f89c5aaa6], a0.this$));
              }

              JArray< Ordering > Ordering::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< Ordering >(env->callStaticObjectMethod(cls, mids$[mid_values_311c2f15e5faf67b]));
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
              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args);
              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_Ordering_values(PyTypeObject *type);
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data);
              static PyGetSetDef t_Ordering__fields_[] = {
                DECLARE_GET_FIELD(t_Ordering, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ordering__methods_[] = {
                DECLARE_METHOD(t_Ordering, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ordering, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_Ordering, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ordering)[] = {
                { Py_tp_methods, t_Ordering__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_Ordering__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ordering)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(Ordering, t_Ordering, Ordering);
              PyObject *t_Ordering::wrap_Object(const Ordering& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Ordering::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Ordering::install(PyObject *module)
              {
                installType(&PY_TYPE(Ordering), &PY_TYPE_DEF(Ordering), module, "Ordering", 0);
              }

              void t_Ordering::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "class_", make_descriptor(Ordering::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "wrapfn_", make_descriptor(t_Ordering::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ordering::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "FULL", make_descriptor(t_Ordering::wrap_Object(*Ordering::FULL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTMWCC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTMWCC)));
              }

              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ordering::initializeClass, 1)))
                  return NULL;
                return t_Ordering::wrap_Object(Ordering(((t_Ordering *) arg)->object.this$));
              }
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ordering::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                Ordering result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::valueOf(a0));
                  return t_Ordering::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_Ordering_values(PyTypeObject *type)
              {
                JArray< Ordering > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::values());
                return JArray<jobject>(result.this$).wrap(t_Ordering::wrap_jobject);
              }
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data)
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
#include "org/orekit/gnss/attitude/BeidouMeo.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
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
            mids$[mid_init$_65fb710ff0be7da1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouMeo::BeidouMeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_65fb710ff0be7da1, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuver::class$ = NULL;
              jmethodID *OrbitManeuver::mids$ = NULL;
              bool OrbitManeuver::live$ = false;

              jclass OrbitManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAcceleration_17a952530a808943] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getAccelerationDirectionSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccelerationDirectionSigma", "()D");
                  mids$[mid_getAccelerationInterpolation_2c7c60132dafe913] = env->getMethodID(cls, "getAccelerationInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getAccelerationMagnitudeSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getAccelerationMagnitudeSigma", "()D");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDeltaMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDeployDirSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeployDirSigma", "()D");
                  mids$[mid_getDeployDv_17a952530a808943] = env->getMethodID(cls, "getDeployDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeployDvCda_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeployDvCda", "()D");
                  mids$[mid_getDeployDvRatio_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeployDvRatio", "()D");
                  mids$[mid_getDeployDvSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeployDvSigma", "()D");
                  mids$[mid_getDeployId_0090f7797e403f43] = env->getMethodID(cls, "getDeployId", "()Ljava/lang/String;");
                  mids$[mid_getDeployMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeployMass", "()D");
                  mids$[mid_getDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getDv_17a952530a808943] = env->getMethodID(cls, "getDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDvDirSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getDvDirSigma", "()D");
                  mids$[mid_getDvMagSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getDvMagSigma", "()D");
                  mids$[mid_getThrust_17a952530a808943] = env->getMethodID(cls, "getThrust", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getThrustDirectionSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustDirectionSigma", "()D");
                  mids$[mid_getThrustEfficiency_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustEfficiency", "()D");
                  mids$[mid_getThrustInterpolation_2c7c60132dafe913] = env->getMethodID(cls, "getThrustInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getThrustIsp_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustIsp", "()D");
                  mids$[mid_getThrustMagnitudeSigma_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustMagnitudeSigma", "()D");
                  mids$[mid_setAcceleration_987a5fb872043b12] = env->getMethodID(cls, "setAcceleration", "(ID)V");
                  mids$[mid_setAccelerationDirectionSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAccelerationDirectionSigma", "(D)V");
                  mids$[mid_setAccelerationInterpolation_29b37ced46ce95fa] = env->getMethodID(cls, "setAccelerationInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setAccelerationMagnitudeSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAccelerationMagnitudeSigma", "(D)V");
                  mids$[mid_setDate_e82d68cd9f886886] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDeltaMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDeployDirSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeployDirSigma", "(D)V");
                  mids$[mid_setDeployDv_987a5fb872043b12] = env->getMethodID(cls, "setDeployDv", "(ID)V");
                  mids$[mid_setDeployDvCda_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeployDvCda", "(D)V");
                  mids$[mid_setDeployDvRatio_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeployDvRatio", "(D)V");
                  mids$[mid_setDeployDvSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeployDvSigma", "(D)V");
                  mids$[mid_setDeployId_e939c6558ae8d313] = env->getMethodID(cls, "setDeployId", "(Ljava/lang/String;)V");
                  mids$[mid_setDeployMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeployMass", "(D)V");
                  mids$[mid_setDuration_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setDv_987a5fb872043b12] = env->getMethodID(cls, "setDv", "(ID)V");
                  mids$[mid_setDvDirSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDvDirSigma", "(D)V");
                  mids$[mid_setDvMagSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDvMagSigma", "(D)V");
                  mids$[mid_setThrust_987a5fb872043b12] = env->getMethodID(cls, "setThrust", "(ID)V");
                  mids$[mid_setThrustDirectionSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setThrustDirectionSigma", "(D)V");
                  mids$[mid_setThrustEfficiency_77e0f9a1f260e2e5] = env->getMethodID(cls, "setThrustEfficiency", "(D)V");
                  mids$[mid_setThrustInterpolation_29b37ced46ce95fa] = env->getMethodID(cls, "setThrustInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setThrustIsp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setThrustIsp", "(D)V");
                  mids$[mid_setThrustMagnitudeSigma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setThrustMagnitudeSigma", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuver::OrbitManeuver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getAcceleration() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_17a952530a808943]));
              }

              jdouble OrbitManeuver::getAccelerationDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationDirectionSigma_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getAccelerationInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getAccelerationInterpolation_2c7c60132dafe913]));
              }

              jdouble OrbitManeuver::getAccelerationMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationMagnitudeSigma_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuver::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              jdouble OrbitManeuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getDeployDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDirSigma_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDeployDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeployDv_17a952530a808943]));
              }

              jdouble OrbitManeuver::getDeployDvCda() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvCda_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getDeployDvRatio() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvRatio_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getDeployDvSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvSigma_456d9a2f64d6b28d]);
              }

              ::java::lang::String OrbitManeuver::getDeployId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeployId_0090f7797e403f43]));
              }

              jdouble OrbitManeuver::getDeployMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployMass_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDv_17a952530a808943]));
              }

              jdouble OrbitManeuver::getDvDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvDirSigma_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getDvMagSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvMagSigma_456d9a2f64d6b28d]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getThrust() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrust_17a952530a808943]));
              }

              jdouble OrbitManeuver::getThrustDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustDirectionSigma_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getThrustEfficiency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustEfficiency_456d9a2f64d6b28d]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getThrustInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getThrustInterpolation_2c7c60132dafe913]));
              }

              jdouble OrbitManeuver::getThrustIsp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustIsp_456d9a2f64d6b28d]);
              }

              jdouble OrbitManeuver::getThrustMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitudeSigma_456d9a2f64d6b28d]);
              }

              void OrbitManeuver::setAcceleration(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcceleration_987a5fb872043b12], a0, a1);
              }

              void OrbitManeuver::setAccelerationDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationDirectionSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationInterpolation_29b37ced46ce95fa], a0.this$);
              }

              void OrbitManeuver::setAccelerationMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationMagnitudeSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDate_e82d68cd9f886886], a0.this$);
              }

              void OrbitManeuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDeployDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDirSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDeployDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDv_987a5fb872043b12], a0, a1);
              }

              void OrbitManeuver::setDeployDvCda(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvCda_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDeployDvRatio(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvRatio_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDeployDvSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDeployId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployId_e939c6558ae8d313], a0.this$);
              }

              void OrbitManeuver::setDeployMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployMass_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDv_987a5fb872043b12], a0, a1);
              }

              void OrbitManeuver::setDvDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvDirSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setDvMagSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvMagSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setThrust(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrust_987a5fb872043b12], a0, a1);
              }

              void OrbitManeuver::setThrustDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustDirectionSigma_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setThrustEfficiency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustEfficiency_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustInterpolation_29b37ced46ce95fa], a0.this$);
              }

              void OrbitManeuver::setThrustIsp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustIsp_77e0f9a1f260e2e5], a0);
              }

              void OrbitManeuver::setThrustMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustMagnitudeSigma_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuver__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuver, acceleration),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationMagnitudeSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, date),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deltaMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDirSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, deployDv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvCda),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvRatio),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployId),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, duration),
                DECLARE_GET_FIELD(t_OrbitManeuver, dv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvDirSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvMagSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, thrust),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustEfficiency),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustIsp),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustMagnitudeSigma),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuver__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, getAcceleration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvCda, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvRatio, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvMagSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustEfficiency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustIsp, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAcceleration, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationMagnitudeSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDate, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvCda, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvRatio, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployId, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDvDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDvMagSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrust, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setThrustDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustEfficiency, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustIsp, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustMagnitudeSigma, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuver)[] = {
                { Py_tp_methods, t_OrbitManeuver__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuver_init_ },
                { Py_tp_getset, t_OrbitManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuver)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuver, t_OrbitManeuver, OrbitManeuver);

              void t_OrbitManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuver), &PY_TYPE_DEF(OrbitManeuver), module, "OrbitManeuver", 0);
              }

              void t_OrbitManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "class_", make_descriptor(OrbitManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "wrapfn_", make_descriptor(t_OrbitManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuver::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuver::wrap_Object(OrbitManeuver(((t_OrbitManeuver *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds)
              {
                OrbitManeuver object((jobject) NULL);

                INT_CALL(object = OrbitManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployId());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setAcceleration(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcceleration", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setAccelerationInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDate", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDeployDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvCda(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvCda", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvRatio(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvRatio", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setDeployId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployId", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvMagSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvMagSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setThrust(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrust", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustEfficiency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustEfficiency", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setThrustInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustIsp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustIsp", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccelerationInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationMagnitudeSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "date", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvCda(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvCda", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvRatio(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvRatio", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployId());
                return j2p(value);
              }
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setDeployId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployId", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvMagSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvMagSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustEfficiency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustEfficiency", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setThrustInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustIsp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustIsp", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustMagnitudeSigma", arg);
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
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils$FactorialLog::class$ = NULL;
      jmethodID *CombinatoricsUtils$FactorialLog::mids$ = NULL;
      bool CombinatoricsUtils$FactorialLog::live$ = false;

      jclass CombinatoricsUtils$FactorialLog::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils$FactorialLog");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_dea51f361c17123f] = env->getStaticMethodID(cls, "create", "()Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");
          mids$[mid_value_b772323fc98b7293] = env->getMethodID(cls, "value", "(I)D");
          mids$[mid_withCache_f45449bdc4622eb6] = env->getMethodID(cls, "withCache", "(I)Lorg/hipparchus/util/CombinatoricsUtils$FactorialLog;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::create()
      {
        jclass cls = env->getClass(initializeClass);
        return CombinatoricsUtils$FactorialLog(env->callStaticObjectMethod(cls, mids$[mid_create_dea51f361c17123f]));
      }

      jdouble CombinatoricsUtils$FactorialLog::value(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_b772323fc98b7293], a0);
      }

      CombinatoricsUtils$FactorialLog CombinatoricsUtils$FactorialLog::withCache(jint a0) const
      {
        return CombinatoricsUtils$FactorialLog(env->callObjectMethod(this$, mids$[mid_withCache_f45449bdc4622eb6], a0));
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
      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type);
      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);
      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg);

      static PyMethodDef t_CombinatoricsUtils$FactorialLog__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, create, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, value, METH_O),
        DECLARE_METHOD(t_CombinatoricsUtils$FactorialLog, withCache, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils$FactorialLog)[] = {
        { Py_tp_methods, t_CombinatoricsUtils$FactorialLog__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils$FactorialLog)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils$FactorialLog, t_CombinatoricsUtils$FactorialLog, CombinatoricsUtils$FactorialLog);

      void t_CombinatoricsUtils$FactorialLog::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils$FactorialLog), &PY_TYPE_DEF(CombinatoricsUtils$FactorialLog), module, "CombinatoricsUtils$FactorialLog", 0);
      }

      void t_CombinatoricsUtils$FactorialLog::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "class_", make_descriptor(CombinatoricsUtils$FactorialLog::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "wrapfn_", make_descriptor(t_CombinatoricsUtils$FactorialLog::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils$FactorialLog), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(CombinatoricsUtils$FactorialLog(((t_CombinatoricsUtils$FactorialLog *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils$FactorialLog_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils$FactorialLog::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_create(PyTypeObject *type)
      {
        CombinatoricsUtils$FactorialLog result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils$FactorialLog::create());
        return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_value(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils$FactorialLog_withCache(t_CombinatoricsUtils$FactorialLog *self, PyObject *arg)
      {
        jint a0;
        CombinatoricsUtils$FactorialLog result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCache(a0));
          return t_CombinatoricsUtils$FactorialLog::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCache", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularTroposphericDelayModifier::class$ = NULL;
          jmethodID *AngularTroposphericDelayModifier::mids$ = NULL;
          bool AngularTroposphericDelayModifier::live$ = false;

          jclass AngularTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularTroposphericDelayModifier::AngularTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          ::java::util::List AngularTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void AngularTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self);
          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_AngularTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_AngularTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_AngularTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_AngularTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularTroposphericDelayModifier, t_AngularTroposphericDelayModifier, AngularTroposphericDelayModifier);

          void t_AngularTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularTroposphericDelayModifier), &PY_TYPE_DEF(AngularTroposphericDelayModifier), module, "AngularTroposphericDelayModifier", 0);
          }

          void t_AngularTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "class_", make_descriptor(AngularTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "wrapfn_", make_descriptor(t_AngularTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_AngularTroposphericDelayModifier::wrap_Object(AngularTroposphericDelayModifier(((t_AngularTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularTroposphericDelayModifier_init_(t_AngularTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            AngularTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularTroposphericDelayModifier_getParametersDrivers(t_AngularTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularTroposphericDelayModifier_modifyWithoutDerivatives(t_AngularTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_AngularTroposphericDelayModifier_get__parametersDrivers(t_AngularTroposphericDelayModifier *self, void *data)
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

          ::java::lang::Class *MeasurementFilter::class$ = NULL;
          jmethodID *MeasurementFilter::mids$ = NULL;
          bool MeasurementFilter::live$ = false;

          jclass MeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/MeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_filter_00f3b288ddb27bce] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
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
          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args);
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data);
          static PyGetSetDef t_MeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_MeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementFilter)[] = {
            { Py_tp_methods, t_MeasurementFilter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementFilter, t_MeasurementFilter, MeasurementFilter);
          PyObject *t_MeasurementFilter::wrap_Object(const MeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementFilter *self = (t_MeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementFilter), &PY_TYPE_DEF(MeasurementFilter), module, "MeasurementFilter", 0);
          }

          void t_MeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "class_", make_descriptor(MeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "wrapfn_", make_descriptor(t_MeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_MeasurementFilter::wrap_Object(MeasurementFilter(((t_MeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_MeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementFilter_of_(t_MeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementFilter_filter(t_MeasurementFilter *self, PyObject *args)
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
          static PyObject *t_MeasurementFilter_get__parameters_(t_MeasurementFilter *self, void *data)
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
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *TimeSystem::class$ = NULL;
      jmethodID *TimeSystem::mids$ = NULL;
      bool TimeSystem::live$ = false;
      TimeSystem *TimeSystem::BEIDOU = NULL;
      TimeSystem *TimeSystem::GALILEO = NULL;
      TimeSystem *TimeSystem::GLONASS = NULL;
      TimeSystem *TimeSystem::GMT = NULL;
      TimeSystem *TimeSystem::GPS = NULL;
      TimeSystem *TimeSystem::IRNSS = NULL;
      TimeSystem *TimeSystem::QZSS = NULL;
      TimeSystem *TimeSystem::SBAS = NULL;
      TimeSystem *TimeSystem::TAI = NULL;
      TimeSystem *TimeSystem::UNKNOWN = NULL;
      TimeSystem *TimeSystem::UTC = NULL;

      jclass TimeSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/TimeSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getTimeScale_f8bc26f48dbcde4b] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_parseOneLetterCode_ab19773f58f647f6] = env->getStaticMethodID(cls, "parseOneLetterCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTimeSystem_ab19773f58f647f6] = env->getStaticMethodID(cls, "parseTimeSystem", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_parseTwoLettersCode_ab19773f58f647f6] = env->getStaticMethodID(cls, "parseTwoLettersCode", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_valueOf_ab19773f58f647f6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/TimeSystem;");
          mids$[mid_values_31060621dd6c4416] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/TimeSystem;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BEIDOU = new TimeSystem(env->getStaticObjectField(cls, "BEIDOU", "Lorg/orekit/gnss/TimeSystem;"));
          GALILEO = new TimeSystem(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/gnss/TimeSystem;"));
          GLONASS = new TimeSystem(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/TimeSystem;"));
          GMT = new TimeSystem(env->getStaticObjectField(cls, "GMT", "Lorg/orekit/gnss/TimeSystem;"));
          GPS = new TimeSystem(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/TimeSystem;"));
          IRNSS = new TimeSystem(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/gnss/TimeSystem;"));
          QZSS = new TimeSystem(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/TimeSystem;"));
          SBAS = new TimeSystem(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/gnss/TimeSystem;"));
          TAI = new TimeSystem(env->getStaticObjectField(cls, "TAI", "Lorg/orekit/gnss/TimeSystem;"));
          UNKNOWN = new TimeSystem(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/gnss/TimeSystem;"));
          UTC = new TimeSystem(env->getStaticObjectField(cls, "UTC", "Lorg/orekit/gnss/TimeSystem;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TimeSystem::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
      }

      ::org::orekit::time::TimeScale TimeSystem::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_f8bc26f48dbcde4b], a0.this$));
      }

      TimeSystem TimeSystem::parseOneLetterCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseOneLetterCode_ab19773f58f647f6], a0.this$));
      }

      TimeSystem TimeSystem::parseTimeSystem(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTimeSystem_ab19773f58f647f6], a0.this$));
      }

      TimeSystem TimeSystem::parseTwoLettersCode(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_parseTwoLettersCode_ab19773f58f647f6], a0.this$));
      }

      TimeSystem TimeSystem::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ab19773f58f647f6], a0.this$));
      }

      JArray< TimeSystem > TimeSystem::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< TimeSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_31060621dd6c4416]));
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
      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args);
      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self);
      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg);
      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeSystem_values(PyTypeObject *type);
      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data);
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data);
      static PyGetSetDef t_TimeSystem__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSystem, key),
        DECLARE_GET_FIELD(t_TimeSystem, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSystem__methods_[] = {
        DECLARE_METHOD(t_TimeSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSystem, getKey, METH_NOARGS),
        DECLARE_METHOD(t_TimeSystem, getTimeScale, METH_O),
        DECLARE_METHOD(t_TimeSystem, parseOneLetterCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTimeSystem, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, parseTwoLettersCode, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeSystem, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSystem)[] = {
        { Py_tp_methods, t_TimeSystem__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(TimeSystem, t_TimeSystem, TimeSystem);
      PyObject *t_TimeSystem::wrap_Object(const TimeSystem& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSystem::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSystem *self = (t_TimeSystem *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSystem), &PY_TYPE_DEF(TimeSystem), module, "TimeSystem", 0);
      }

      void t_TimeSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "class_", make_descriptor(TimeSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "wrapfn_", make_descriptor(t_TimeSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeSystem::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "BEIDOU", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::BEIDOU)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GALILEO", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GALILEO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GLONASS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GLONASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GMT", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GMT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "GPS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "IRNSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::IRNSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "QZSS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::QZSS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "SBAS", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::SBAS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "TAI", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::TAI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UNKNOWN", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UNKNOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystem), "UTC", make_descriptor(t_TimeSystem::wrap_Object(*TimeSystem::UTC)));
      }

      static PyObject *t_TimeSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSystem::initializeClass, 1)))
          return NULL;
        return t_TimeSystem::wrap_Object(TimeSystem(((t_TimeSystem *) arg)->object.this$));
      }
      static PyObject *t_TimeSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSystem_of_(t_TimeSystem *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSystem_getKey(t_TimeSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_TimeSystem_getTimeScale(t_TimeSystem *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseOneLetterCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseOneLetterCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseOneLetterCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTimeSystem(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTimeSystem(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTimeSystem", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_parseTwoLettersCode(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::parseTwoLettersCode(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTwoLettersCode", arg);
        return NULL;
      }

      static PyObject *t_TimeSystem_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeSystem result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::valueOf(a0));
          return t_TimeSystem::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_TimeSystem_values(PyTypeObject *type)
      {
        JArray< TimeSystem > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::TimeSystem::values());
        return JArray<jobject>(result.this$).wrap(t_TimeSystem::wrap_jobject);
      }
      static PyObject *t_TimeSystem_get__parameters_(t_TimeSystem *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSystem_get__key(t_TimeSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/IntRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *IntRandomGenerator::class$ = NULL;
      jmethodID *IntRandomGenerator::mids$ = NULL;
      bool IntRandomGenerator::live$ = false;

      jclass IntRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/IntRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_125b1e9f043b29f8] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean IntRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
      }

      void IntRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_125b1e9f043b29f8], a0.this$, a1, a2);
      }

      jdouble IntRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
      }

      jfloat IntRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
      }

      jint IntRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      jlong IntRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
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
      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args);
      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args);

      static PyMethodDef t_IntRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_IntRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_IntRandomGenerator, nextLong, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntRandomGenerator)[] = {
        { Py_tp_methods, t_IntRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntRandomGenerator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::BaseRandomGenerator),
        NULL
      };

      DEFINE_TYPE(IntRandomGenerator, t_IntRandomGenerator, IntRandomGenerator);

      void t_IntRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(IntRandomGenerator), &PY_TYPE_DEF(IntRandomGenerator), module, "IntRandomGenerator", 0);
      }

      void t_IntRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "class_", make_descriptor(IntRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "wrapfn_", make_descriptor(t_IntRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_IntRandomGenerator::wrap_Object(IntRandomGenerator(((t_IntRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_IntRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntRandomGenerator_nextBoolean(t_IntRandomGenerator *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextBytes(t_IntRandomGenerator *self, PyObject *args)
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

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextDouble(t_IntRandomGenerator *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextFloat(t_IntRandomGenerator *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextInt(t_IntRandomGenerator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_IntRandomGenerator_nextLong(t_IntRandomGenerator *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextLong());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(IntRandomGenerator), (PyObject *) self, "nextLong", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GoalType::class$ = NULL;
          jmethodID *GoalType::mids$ = NULL;
          bool GoalType::live$ = false;
          GoalType *GoalType::MAXIMIZE = NULL;
          GoalType *GoalType::MINIMIZE = NULL;

          jclass GoalType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GoalType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_3004716d3e1b3e84] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
              mids$[mid_values_ccbbc8e9c41cafbd] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MAXIMIZE = new GoalType(env->getStaticObjectField(cls, "MAXIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              MINIMIZE = new GoalType(env->getStaticObjectField(cls, "MINIMIZE", "Lorg/hipparchus/optim/nonlinear/scalar/GoalType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GoalType GoalType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return GoalType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3004716d3e1b3e84], a0.this$));
          }

          JArray< GoalType > GoalType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< GoalType >(env->callStaticObjectMethod(cls, mids$[mid_values_ccbbc8e9c41cafbd]));
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
          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args);
          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_GoalType_values(PyTypeObject *type);
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data);
          static PyGetSetDef t_GoalType__fields_[] = {
            DECLARE_GET_FIELD(t_GoalType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GoalType__methods_[] = {
            DECLARE_METHOD(t_GoalType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GoalType, of_, METH_VARARGS),
            DECLARE_METHOD(t_GoalType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GoalType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GoalType)[] = {
            { Py_tp_methods, t_GoalType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GoalType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GoalType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(GoalType, t_GoalType, GoalType);
          PyObject *t_GoalType::wrap_Object(const GoalType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GoalType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GoalType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GoalType *self = (t_GoalType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GoalType::install(PyObject *module)
          {
            installType(&PY_TYPE(GoalType), &PY_TYPE_DEF(GoalType), module, "GoalType", 0);
          }

          void t_GoalType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "class_", make_descriptor(GoalType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "wrapfn_", make_descriptor(t_GoalType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "boxfn_", make_descriptor(boxObject));
            env->getClass(GoalType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MAXIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MAXIMIZE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GoalType), "MINIMIZE", make_descriptor(t_GoalType::wrap_Object(*GoalType::MINIMIZE)));
          }

          static PyObject *t_GoalType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GoalType::initializeClass, 1)))
              return NULL;
            return t_GoalType::wrap_Object(GoalType(((t_GoalType *) arg)->object.this$));
          }
          static PyObject *t_GoalType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GoalType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GoalType_of_(t_GoalType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GoalType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            GoalType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::valueOf(a0));
              return t_GoalType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_GoalType_values(PyTypeObject *type)
          {
            JArray< GoalType > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::GoalType::values());
            return JArray<jobject>(result.this$).wrap(t_GoalType::wrap_jobject);
          }
          static PyObject *t_GoalType_get__parameters_(t_GoalType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *Aem::class$ = NULL;
              jmethodID *Aem::mids$ = NULL;
              bool Aem::live$ = false;
              ::java::lang::String *Aem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Aem::ROOT = NULL;

              jclass Aem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/Aem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ebab4e4b79b3ed3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Aem::Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_7ebab4e4b79b3ed3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map Aem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
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
              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args);
              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Aem_getSatellites(t_Aem *self);
              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data);
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data);
              static PyGetSetDef t_Aem__fields_[] = {
                DECLARE_GET_FIELD(t_Aem, satellites),
                DECLARE_GET_FIELD(t_Aem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Aem__methods_[] = {
                DECLARE_METHOD(t_Aem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Aem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Aem)[] = {
                { Py_tp_methods, t_Aem__methods_ },
                { Py_tp_init, (void *) t_Aem_init_ },
                { Py_tp_getset, t_Aem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Aem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Aem, t_Aem, Aem);
              PyObject *t_Aem::wrap_Object(const Aem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Aem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Aem::install(PyObject *module)
              {
                installType(&PY_TYPE(Aem), &PY_TYPE_DEF(Aem), module, "Aem", 0);
              }

              void t_Aem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "class_", make_descriptor(Aem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "wrapfn_", make_descriptor(t_Aem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Aem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Aem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "ROOT", make_descriptor(j2p(*Aem::ROOT)));
              }

              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Aem::initializeClass, 1)))
                  return NULL;
                return t_Aem::wrap_Object(Aem(((t_Aem *) arg)->object.this$));
              }
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Aem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Aem object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Aem(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Aem_getSatellites(t_Aem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSatelliteEphemeris));
              }
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationSensorKey::class$ = NULL;
              jmethodID *AttitudeDeterminationSensorKey::mids$ = NULL;
              bool AttitudeDeterminationSensorKey::live$ = false;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_FREQUENCY = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_NUMBER = NULL;
              AttitudeDeterminationSensorKey *AttitudeDeterminationSensorKey::SENSOR_USED = NULL;

              jclass AttitudeDeterminationSensorKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_5c734817633a82e8] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)Z");
                  mids$[mid_valueOf_a5711b8d1e60d5c1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");
                  mids$[mid_values_13bc0bfc1613a38b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  NUMBER_SENSOR_NOISE_COVARIANCE = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "NUMBER_SENSOR_NOISE_COVARIANCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_FREQUENCY = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_FREQUENCY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NOISE_STDDEV = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_NUMBER = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_NUMBER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  SENSOR_USED = new AttitudeDeterminationSensorKey(env->getStaticObjectField(cls, "SENSOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensorKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationSensorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_5c734817633a82e8], a0.this$, a1.this$, a2.this$);
              }

              AttitudeDeterminationSensorKey AttitudeDeterminationSensorKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationSensorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a5711b8d1e60d5c1], a0.this$));
              }

              JArray< AttitudeDeterminationSensorKey > AttitudeDeterminationSensorKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationSensorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_13bc0bfc1613a38b]));
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
              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationSensorKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationSensorKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationSensorKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationSensorKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationSensorKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationSensorKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationSensorKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationSensorKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationSensorKey, t_AttitudeDeterminationSensorKey, AttitudeDeterminationSensorKey);
              PyObject *t_AttitudeDeterminationSensorKey::wrap_Object(const AttitudeDeterminationSensorKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationSensorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationSensorKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationSensorKey *self = (t_AttitudeDeterminationSensorKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationSensorKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationSensorKey), &PY_TYPE_DEF(AttitudeDeterminationSensorKey), module, "AttitudeDeterminationSensorKey", 0);
              }

              void t_AttitudeDeterminationSensorKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "class_", make_descriptor(AttitudeDeterminationSensorKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationSensorKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "NUMBER_SENSOR_NOISE_COVARIANCE", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::NUMBER_SENSOR_NOISE_COVARIANCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_FREQUENCY", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_FREQUENCY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_NUMBER", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_NUMBER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationSensorKey), "SENSOR_USED", make_descriptor(t_AttitudeDeterminationSensorKey::wrap_Object(*AttitudeDeterminationSensorKey::SENSOR_USED)));
              }

              static PyObject *t_AttitudeDeterminationSensorKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationSensorKey::wrap_Object(AttitudeDeterminationSensorKey(((t_AttitudeDeterminationSensorKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationSensorKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationSensorKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_of_(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_process(t_AttitudeDeterminationSensorKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationSensorKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationSensorKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::valueOf(a0));
                  return t_AttitudeDeterminationSensorKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationSensorKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationSensorKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensorKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationSensorKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationSensorKey_get__parameters_(t_AttitudeDeterminationSensorKey *self, void *data)
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
#include "org/orekit/data/AbstractSelfFeedingLoader.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractSelfFeedingLoader::class$ = NULL;
      jmethodID *AbstractSelfFeedingLoader::mids$ = NULL;
      bool AbstractSelfFeedingLoader::live$ = false;

      jclass AbstractSelfFeedingLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractSelfFeedingLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_feed_ca33caeeef6a5b64] = env->getMethodID(cls, "feed", "(Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_setSupportedNames_e939c6558ae8d313] = env->getMethodID(cls, "setSupportedNames", "(Ljava/lang/String;)V");
          mids$[mid_getDataProvidersManager_e1fc6728282cfec7] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractSelfFeedingLoader::AbstractSelfFeedingLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_AbstractSelfFeedingLoader__methods_[] = {
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractSelfFeedingLoader, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractSelfFeedingLoader)[] = {
        { Py_tp_methods, t_AbstractSelfFeedingLoader__methods_ },
        { Py_tp_init, (void *) t_AbstractSelfFeedingLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractSelfFeedingLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractSelfFeedingLoader, t_AbstractSelfFeedingLoader, AbstractSelfFeedingLoader);

      void t_AbstractSelfFeedingLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractSelfFeedingLoader), &PY_TYPE_DEF(AbstractSelfFeedingLoader), module, "AbstractSelfFeedingLoader", 0);
      }

      void t_AbstractSelfFeedingLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "class_", make_descriptor(AbstractSelfFeedingLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "wrapfn_", make_descriptor(t_AbstractSelfFeedingLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSelfFeedingLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractSelfFeedingLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 1)))
          return NULL;
        return t_AbstractSelfFeedingLoader::wrap_Object(AbstractSelfFeedingLoader(((t_AbstractSelfFeedingLoader *) arg)->object.this$));
      }
      static PyObject *t_AbstractSelfFeedingLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractSelfFeedingLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AbstractSelfFeedingLoader_init_(t_AbstractSelfFeedingLoader *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
        AbstractSelfFeedingLoader object((jobject) NULL);

        if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
        {
          INT_CALL(object = AbstractSelfFeedingLoader(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBody::class$ = NULL;
      jmethodID *CelestialBody::mids$ = NULL;
      bool CelestialBody::live$ = false;

      jclass CelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyOrientedFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_456d9a2f64d6b28d] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame CelestialBody::getBodyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyOrientedFrame_c8fe21bcdac65bf6]));
      }

      jdouble CelestialBody::getGM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGM_456d9a2f64d6b28d]);
      }

      ::org::orekit::frames::Frame CelestialBody::getInertiallyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertiallyOrientedFrame_c8fe21bcdac65bf6]));
      }

      ::java::lang::String CelestialBody::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
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
      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getName(t_CelestialBody *self);
      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data);
      static PyGetSetDef t_CelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBody, bodyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, gM),
        DECLARE_GET_FIELD(t_CelestialBody, inertiallyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBody__methods_[] = {
        DECLARE_METHOD(t_CelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, getBodyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getGM, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getInertiallyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBody)[] = {
        { Py_tp_methods, t_CelestialBody__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBody)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(CelestialBody, t_CelestialBody, CelestialBody);

      void t_CelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBody), &PY_TYPE_DEF(CelestialBody), module, "CelestialBody", 0);
      }

      void t_CelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "class_", make_descriptor(CelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "wrapfn_", make_descriptor(t_CelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBody::initializeClass, 1)))
          return NULL;
        return t_CelestialBody::wrap_Object(CelestialBody(((t_CelestialBody *) arg)->object.this$));
      }
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getName(t_CelestialBody *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data)
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
#include "org/hipparchus/util/Blendable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Blendable::class$ = NULL;
      jmethodID *Blendable::mids$ = NULL;
      bool Blendable::live$ = false;

      jclass Blendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Blendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_fd54668d5a0959d8] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;D)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Blendable::blendArithmeticallyWith(const ::java::lang::Object & a0, jdouble a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_fd54668d5a0959d8], a0.this$, a1));
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
      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data);
      static PyGetSetDef t_Blendable__fields_[] = {
        DECLARE_GET_FIELD(t_Blendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Blendable__methods_[] = {
        DECLARE_METHOD(t_Blendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_Blendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Blendable)[] = {
        { Py_tp_methods, t_Blendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Blendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Blendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Blendable, t_Blendable, Blendable);
      PyObject *t_Blendable::wrap_Object(const Blendable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Blendable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Blendable::install(PyObject *module)
      {
        installType(&PY_TYPE(Blendable), &PY_TYPE_DEF(Blendable), module, "Blendable", 0);
      }

      void t_Blendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "class_", make_descriptor(Blendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "wrapfn_", make_descriptor(t_Blendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Blendable::initializeClass, 1)))
          return NULL;
        return t_Blendable::wrap_Object(Blendable(((t_Blendable *) arg)->object.this$));
      }
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Blendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble a1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OD", self->parameters[0], &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNodeDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
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
            mids$[mid_init$_bdfbb98834a5ed6a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_init$_16b3a9717ca34d38] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_8259d7c252dc0600] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNodeDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNodeDetector::FieldNodeDetector(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bdfbb98834a5ed6a, a0.this$, a1.this$)) {}

        FieldNodeDetector::FieldNodeDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_16b3a9717ca34d38, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNodeDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::frames::Frame FieldNodeDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
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
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticElements::class$ = NULL;
        jmethodID *GeoMagneticElements::mids$ = NULL;
        bool GeoMagneticElements::live$ = false;

        jclass GeoMagneticElements::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticElements");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a94622407b723689] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDeclination_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeclination", "()D");
            mids$[mid_getFieldVector_17a952530a808943] = env->getMethodID(cls, "getFieldVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHorizontalIntensity_456d9a2f64d6b28d] = env->getMethodID(cls, "getHorizontalIntensity", "()D");
            mids$[mid_getInclination_456d9a2f64d6b28d] = env->getMethodID(cls, "getInclination", "()D");
            mids$[mid_getTotalIntensity_456d9a2f64d6b28d] = env->getMethodID(cls, "getTotalIntensity", "()D");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticElements::GeoMagneticElements(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a94622407b723689, a0.this$)) {}

        jdouble GeoMagneticElements::getDeclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDeclination_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GeoMagneticElements::getFieldVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFieldVector_17a952530a808943]));
        }

        jdouble GeoMagneticElements::getHorizontalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHorizontalIntensity_456d9a2f64d6b28d]);
        }

        jdouble GeoMagneticElements::getInclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInclination_456d9a2f64d6b28d]);
        }

        jdouble GeoMagneticElements::getTotalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalIntensity_456d9a2f64d6b28d]);
        }

        ::java::lang::String GeoMagneticElements::toString() const
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
    namespace models {
      namespace earth {
        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args);
        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data);
        static PyGetSetDef t_GeoMagneticElements__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticElements, declination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, fieldVector),
          DECLARE_GET_FIELD(t_GeoMagneticElements, horizontalIntensity),
          DECLARE_GET_FIELD(t_GeoMagneticElements, inclination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, totalIntensity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticElements__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticElements, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, getDeclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getFieldVector, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getHorizontalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getInclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getTotalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticElements)[] = {
          { Py_tp_methods, t_GeoMagneticElements__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticElements_init_ },
          { Py_tp_getset, t_GeoMagneticElements__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticElements)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticElements, t_GeoMagneticElements, GeoMagneticElements);

        void t_GeoMagneticElements::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticElements), &PY_TYPE_DEF(GeoMagneticElements), module, "GeoMagneticElements", 0);
        }

        void t_GeoMagneticElements::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "class_", make_descriptor(GeoMagneticElements::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "wrapfn_", make_descriptor(t_GeoMagneticElements::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticElements::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticElements::wrap_Object(GeoMagneticElements(((t_GeoMagneticElements *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticElements::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          GeoMagneticElements object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            INT_CALL(object = GeoMagneticElements(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDeclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(GeoMagneticElements), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDeclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/EquinoctialOrbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/FieldEquinoctialOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldEquinoctialOrbit::class$ = NULL;
      jmethodID *FieldEquinoctialOrbit::mids$ = NULL;
      bool FieldEquinoctialOrbit::live$ = false;

      jclass FieldEquinoctialOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldEquinoctialOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_5a1cf5460128e0f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/EquinoctialOrbit;)V");
          mids$[mid_init$_3630ab60f65fc257] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c46027b2f093f684] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_cca8d8314ace10b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_c5c88eb1c5b50a4d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_de4891ed91bd58e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_72af0bc419feab2f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_f56548599899c286] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_f56548599899c286] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_e6d4d3215c30992a] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_e6d4d3215c30992a] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_e6d4d3215c30992a] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_e6d4d3215c30992a] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_d275813d7aa8ed95] = env->getMethodID(cls, "getL", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_d275813d7aa8ed95] = env->getMethodID(cls, "getLDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_f56548599899c286] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_24c45ad619cf59cb] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_058acc7969f782b9] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_shiftedBy_2de2a35b833cec1a] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldEquinoctialOrbit;");
          mids$[mid_toOrbit_fad2038b7b755f73] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/EquinoctialOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_f56548599899c286] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_5791f80683b5227e] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::EquinoctialOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_5a1cf5460128e0f4, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3630ab60f65fc257, a0.this$, a1.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c46027b2f093f684, a0.this$, a1.this$, a2.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cca8d8314ace10b6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c5c88eb1c5b50a4d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldEquinoctialOrbit::FieldEquinoctialOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_de4891ed91bd58e7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldEquinoctialOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_72af0bc419feab2f], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_f56548599899c286], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_f56548599899c286], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::PositionAngleType FieldEquinoctialOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getL(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_d275813d7aa8ed95], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_d275813d7aa8ed95], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::OrbitType FieldEquinoctialOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean FieldEquinoctialOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      jboolean FieldEquinoctialOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_f56548599899c286], a0.this$, a1.this$, a2.this$));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::removeRates() const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_24c45ad619cf59cb]));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(jdouble a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_058acc7969f782b9], a0));
      }

      FieldEquinoctialOrbit FieldEquinoctialOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldEquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_2de2a35b833cec1a], a0.this$));
      }

      ::org::orekit::orbits::EquinoctialOrbit FieldEquinoctialOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::EquinoctialOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_fad2038b7b755f73]));
      }

      ::java::lang::String FieldEquinoctialOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::hipparchus::CalculusFieldElement FieldEquinoctialOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_f56548599899c286], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args);
      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg);
      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self);
      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data);
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data);
      static PyGetSetDef t_FieldEquinoctialOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, a),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, e),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hx),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hy),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, i),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lE),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lM),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lv),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, type),
        DECLARE_GET_FIELD(t_FieldEquinoctialOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquinoctialOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldEquinoctialOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getL, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLDot, METH_O),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquinoctialOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquinoctialOrbit)[] = {
        { Py_tp_methods, t_FieldEquinoctialOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldEquinoctialOrbit_init_ },
        { Py_tp_getset, t_FieldEquinoctialOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquinoctialOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldEquinoctialOrbit, t_FieldEquinoctialOrbit, FieldEquinoctialOrbit);
      PyObject *t_FieldEquinoctialOrbit::wrap_Object(const FieldEquinoctialOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquinoctialOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquinoctialOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquinoctialOrbit *self = (t_FieldEquinoctialOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquinoctialOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquinoctialOrbit), &PY_TYPE_DEF(FieldEquinoctialOrbit), module, "FieldEquinoctialOrbit", 0);
      }

      void t_FieldEquinoctialOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "class_", make_descriptor(FieldEquinoctialOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "wrapfn_", make_descriptor(t_FieldEquinoctialOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquinoctialOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquinoctialOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquinoctialOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldEquinoctialOrbit::wrap_Object(FieldEquinoctialOrbit(((t_FieldEquinoctialOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldEquinoctialOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquinoctialOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquinoctialOrbit_of_(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldEquinoctialOrbit_init_(t_FieldEquinoctialOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::EquinoctialOrbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::EquinoctialOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
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
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
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
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldEquinoctialOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldEquinoctialOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldEquinoctialOrbit_addKeplerContribution(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getA(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getADot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getCachedPositionAngleType(t_FieldEquinoctialOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_getE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialExDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getEquinoctialEyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHx(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHxDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getHyDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getI(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getIDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getL(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getL(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getL", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLDot(t_FieldEquinoctialOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getLDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLDot", arg);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_getLE(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLEDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLM(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLMDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLv(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getLvDot(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_getType(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasDerivatives(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_hasRates(t_FieldEquinoctialOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldEquinoctialOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldEquinoctialOrbit_removeRates(t_FieldEquinoctialOrbit *self)
      {
        FieldEquinoctialOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldEquinoctialOrbit_shiftedBy(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldEquinoctialOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldEquinoctialOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toOrbit(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::EquinoctialOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_EquinoctialOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_toString(t_FieldEquinoctialOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldEquinoctialOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldEquinoctialOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldEquinoctialOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldEquinoctialOrbit_get__parameters_(t_FieldEquinoctialOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquinoctialOrbit_get__a(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__aDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__cachedPositionAngleType(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__e(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__eDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialExDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__equinoctialEyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hx(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hxDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hy(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__hyDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__i(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__iDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lE(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lEDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lM(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lMDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lv(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__lvDot(t_FieldEquinoctialOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldEquinoctialOrbit_get__type(t_FieldEquinoctialOrbit *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractRegion::class$ = NULL;
        jmethodID *AbstractRegion::mids$ = NULL;
        bool AbstractRegion::live$ = false;

        jclass AbstractRegion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractRegion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0ac82b5b7c238a40] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;D)V");
            mids$[mid_applyTransform_77825de2d339997c] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_buildNew_3384298d17fb447d] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_checkPoint_153fabdeca87a5c4] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_72bc5cad7c856665] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_b25943163cbdf489] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_acb6092c5eac86b3] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_getBarycenter_268784e47ab908a6] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_456d9a2f64d6b28d] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_getTree_5bed1988454faad9] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_55f41ec2172e02d3] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_257992acaacae48a] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_e470b6d9e0d979db] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_257992acaacae48a] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_a3932f0f8ec705f8] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
            mids$[mid_setSize_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSize", "(D)V");
            mids$[mid_checkPoint_fc1bfdf07c2c223f] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_c4fd9d1092ff2129] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_computeGeometricalProperties_7ae3461a92a43152] = env->getMethodID(cls, "computeGeometricalProperties", "()V");
            mids$[mid_setBarycenter_757a0a52ad332378] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Vector;)V");
            mids$[mid_setBarycenter_0a3f49fb37fbe874] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Point;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractRegion::AbstractRegion(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ac82b5b7c238a40, a0.this$, a1)) {}

        AbstractRegion AbstractRegion::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_applyTransform_77825de2d339997c], a0.this$));
        }

        AbstractRegion AbstractRegion::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_buildNew_3384298d17fb447d], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_153fabdeca87a5c4], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Vector & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_72bc5cad7c856665], a0.this$));
        }

        jboolean AbstractRegion::contains(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_b25943163cbdf489], a0.this$);
        }

        AbstractRegion AbstractRegion::copySelf() const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_copySelf_acb6092c5eac86b3]));
        }

        ::org::hipparchus::geometry::Point AbstractRegion::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_268784e47ab908a6]));
        }

        jdouble AbstractRegion::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_456d9a2f64d6b28d]);
        }

        jdouble AbstractRegion::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
        }

        jdouble AbstractRegion::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree AbstractRegion::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_5bed1988454faad9], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane AbstractRegion::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_55f41ec2172e02d3], a0.this$));
        }

        jboolean AbstractRegion::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
        }

        jboolean AbstractRegion::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_257992acaacae48a], a0.this$);
        }

        jboolean AbstractRegion::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_e470b6d9e0d979db]);
        }

        jboolean AbstractRegion::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_257992acaacae48a], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection AbstractRegion::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_a3932f0f8ec705f8], a0.this$));
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
        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args);
        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data);
        static PyGetSetDef t_AbstractRegion__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRegion, barycenter),
          DECLARE_GET_FIELD(t_AbstractRegion, boundarySize),
          DECLARE_GET_FIELD(t_AbstractRegion, empty),
          DECLARE_GET_FIELD(t_AbstractRegion, full),
          DECLARE_GET_FIELD(t_AbstractRegion, size),
          DECLARE_GET_FIELD(t_AbstractRegion, tolerance),
          DECLARE_GET_FIELD(t_AbstractRegion, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRegion__methods_[] = {
          DECLARE_METHOD(t_AbstractRegion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractRegion, buildNew, METH_O),
          DECLARE_METHOD(t_AbstractRegion, checkPoint, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, contains, METH_O),
          DECLARE_METHOD(t_AbstractRegion, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTree, METH_O),
          DECLARE_METHOD(t_AbstractRegion, intersection, METH_O),
          DECLARE_METHOD(t_AbstractRegion, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, isFull, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRegion)[] = {
          { Py_tp_methods, t_AbstractRegion__methods_ },
          { Py_tp_init, (void *) t_AbstractRegion_init_ },
          { Py_tp_getset, t_AbstractRegion__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRegion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRegion, t_AbstractRegion, AbstractRegion);
        PyObject *t_AbstractRegion::wrap_Object(const AbstractRegion& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractRegion::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractRegion::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRegion), &PY_TYPE_DEF(AbstractRegion), module, "AbstractRegion", 0);
        }

        void t_AbstractRegion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "class_", make_descriptor(AbstractRegion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "wrapfn_", make_descriptor(t_AbstractRegion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRegion::initializeClass, 1)))
            return NULL;
          return t_AbstractRegion::wrap_Object(AbstractRegion(((t_AbstractRegion *) arg)->object.this$));
        }
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRegion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          AbstractRegion object((jobject) NULL);

          if (!parseArgs(args, "[KD", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1))
          {
            INT_CALL(object = AbstractRegion(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::Vector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self)
        {
          AbstractRegion result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Parser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Parser::class$ = NULL;
        jmethodID *SP3Parser::mids$ = NULL;
        bool SP3Parser::live$ = false;
        ::java::lang::String *SP3Parser::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_parse_d34d0adf91f79571] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/sp3/SP3;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Parser::SP3Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::files::sp3::SP3 SP3Parser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::sp3::SP3(env->callObjectMethod(this$, mids$[mid_parse_d34d0adf91f79571], a0.this$));
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
        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg);

        static PyMethodDef t_SP3Parser__methods_[] = {
          DECLARE_METHOD(t_SP3Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Parser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Parser)[] = {
          { Py_tp_methods, t_SP3Parser__methods_ },
          { Py_tp_init, (void *) t_SP3Parser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Parser, t_SP3Parser, SP3Parser);

        void t_SP3Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Parser), &PY_TYPE_DEF(SP3Parser), module, "SP3Parser", 0);
        }

        void t_SP3Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "class_", make_descriptor(SP3Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "wrapfn_", make_descriptor(t_SP3Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Parser::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Parser), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Parser::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Parser::initializeClass, 1)))
            return NULL;
          return t_SP3Parser::wrap_Object(SP3Parser(((t_SP3Parser *) arg)->object.this$));
        }
        static PyObject *t_SP3Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Parser_init_(t_SP3Parser *self, PyObject *args, PyObject *kwds)
        {
          SP3Parser object((jobject) NULL);

          INT_CALL(object = SP3Parser());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Parser_parse(t_SP3Parser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::sp3::SP3 result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::sp3::t_SP3::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
