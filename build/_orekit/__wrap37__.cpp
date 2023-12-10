#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PhaseBias::class$ = NULL;
            jmethodID *PhaseBias::mids$ = NULL;
            bool PhaseBias::live$ = false;

            jclass PhaseBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PhaseBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_5b86856c57fb253a] = env->getMethodID(cls, "<init>", "(IZIID)V");
                mids$[mid_getDiscontinuityCounter_f2f64475e4580546] = env->getMethodID(cls, "getDiscontinuityCounter", "()I");
                mids$[mid_getPhaseBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getPhaseBias", "()D");
                mids$[mid_getSignalID_f2f64475e4580546] = env->getMethodID(cls, "getSignalID", "()I");
                mids$[mid_getSignalWideLaneIntegerIndicator_f2f64475e4580546] = env->getMethodID(cls, "getSignalWideLaneIntegerIndicator", "()I");
                mids$[mid_isSignalInteger_e470b6d9e0d979db] = env->getMethodID(cls, "isSignalInteger", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PhaseBias::PhaseBias(jint a0, jboolean a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b86856c57fb253a, a0, a1, a2, a3, a4)) {}

            jint PhaseBias::getDiscontinuityCounter() const
            {
              return env->callIntMethod(this$, mids$[mid_getDiscontinuityCounter_f2f64475e4580546]);
            }

            jdouble PhaseBias::getPhaseBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPhaseBias_456d9a2f64d6b28d]);
            }

            jint PhaseBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_f2f64475e4580546]);
            }

            jint PhaseBias::getSignalWideLaneIntegerIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalWideLaneIntegerIndicator_f2f64475e4580546]);
            }

            jboolean PhaseBias::isSignalInteger() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSignalInteger_e470b6d9e0d979db]);
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
            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self);
            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self);
            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data);
            static PyGetSetDef t_PhaseBias__fields_[] = {
              DECLARE_GET_FIELD(t_PhaseBias, discontinuityCounter),
              DECLARE_GET_FIELD(t_PhaseBias, phaseBias),
              DECLARE_GET_FIELD(t_PhaseBias, signalID),
              DECLARE_GET_FIELD(t_PhaseBias, signalInteger),
              DECLARE_GET_FIELD(t_PhaseBias, signalWideLaneIntegerIndicator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PhaseBias__methods_[] = {
              DECLARE_METHOD(t_PhaseBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, getDiscontinuityCounter, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getPhaseBias, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalID, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalWideLaneIntegerIndicator, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, isSignalInteger, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PhaseBias)[] = {
              { Py_tp_methods, t_PhaseBias__methods_ },
              { Py_tp_init, (void *) t_PhaseBias_init_ },
              { Py_tp_getset, t_PhaseBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PhaseBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PhaseBias, t_PhaseBias, PhaseBias);

            void t_PhaseBias::install(PyObject *module)
            {
              installType(&PY_TYPE(PhaseBias), &PY_TYPE_DEF(PhaseBias), module, "PhaseBias", 0);
            }

            void t_PhaseBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "class_", make_descriptor(PhaseBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "wrapfn_", make_descriptor(t_PhaseBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PhaseBias::initializeClass, 1)))
                return NULL;
              return t_PhaseBias::wrap_Object(PhaseBias(((t_PhaseBias *) arg)->object.this$));
            }
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PhaseBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jboolean a1;
              jint a2;
              jint a3;
              jdouble a4;
              PhaseBias object((jobject) NULL);

              if (!parseArgs(args, "IZIID", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = PhaseBias(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSignalInteger());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSignalInteger());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/AbstractFieldOrbitInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *AbstractFieldOrbitInterpolator::class$ = NULL;
      jmethodID *AbstractFieldOrbitInterpolator::mids$ = NULL;
      bool AbstractFieldOrbitInterpolator::live$ = false;

      jclass AbstractFieldOrbitInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/AbstractFieldOrbitInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_544055afce312742] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;)V");
          mids$[mid_getOutputInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutputInertialFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_7b5e6ef1fbe50083] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldOrbitInterpolator::AbstractFieldOrbitInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_544055afce312742, a0, a1, a2.this$)) {}

      ::org::orekit::frames::Frame AbstractFieldOrbitInterpolator::getOutputInertialFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputInertialFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::orbits::FieldOrbit AbstractFieldOrbitInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_interpolate_7b5e6ef1fbe50083], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self);
      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldOrbitInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, outputInertialFrame),
        DECLARE_GET_FIELD(t_AbstractFieldOrbitInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldOrbitInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, getOutputInertialFrame, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldOrbitInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOrbitInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldOrbitInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldOrbitInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldOrbitInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldOrbitInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbstractFieldOrbitInterpolator, t_AbstractFieldOrbitInterpolator, AbstractFieldOrbitInterpolator);
      PyObject *t_AbstractFieldOrbitInterpolator::wrap_Object(const AbstractFieldOrbitInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldOrbitInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldOrbitInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldOrbitInterpolator *self = (t_AbstractFieldOrbitInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldOrbitInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldOrbitInterpolator), &PY_TYPE_DEF(AbstractFieldOrbitInterpolator), module, "AbstractFieldOrbitInterpolator", 0);
      }

      void t_AbstractFieldOrbitInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "class_", make_descriptor(AbstractFieldOrbitInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldOrbitInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOrbitInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldOrbitInterpolator::wrap_Object(AbstractFieldOrbitInterpolator(((t_AbstractFieldOrbitInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldOrbitInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_of_(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldOrbitInterpolator_init_(t_AbstractFieldOrbitInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        AbstractFieldOrbitInterpolator object((jobject) NULL);

        if (!parseArgs(args, "IDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = AbstractFieldOrbitInterpolator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_getOutputInertialFrame(t_AbstractFieldOrbitInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_interpolate(t_AbstractFieldOrbitInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(AbstractFieldOrbitInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_AbstractFieldOrbitInterpolator_get__parameters_(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldOrbitInterpolator_get__outputInertialFrame(t_AbstractFieldOrbitInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputInertialFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/AbstractWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *AbstractWriter::class$ = NULL;
          jmethodID *AbstractWriter::mids$ = NULL;
          bool AbstractWriter::live$ = false;

          jclass AbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/AbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_enterSection_fb36c2e4ae059ab9] = env->getMethodID(cls, "enterSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_exitSection_fb36c2e4ae059ab9] = env->getMethodID(cls, "exitSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_write_fb36c2e4ae059ab9] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_intArrayToString_e3f5ec408434fab9] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractWriter::enterSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_enterSection_fb36c2e4ae059ab9], a0.this$);
          }

          void AbstractWriter::exitSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_exitSection_fb36c2e4ae059ab9], a0.this$);
          }

          void AbstractWriter::write(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_write_fb36c2e4ae059ab9], a0.this$);
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
          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg);
          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg);

          static PyMethodDef t_AbstractWriter__methods_[] = {
            DECLARE_METHOD(t_AbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWriter, enterSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, exitSection, METH_O),
            DECLARE_METHOD(t_AbstractWriter, write, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWriter)[] = {
            { Py_tp_methods, t_AbstractWriter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWriter, t_AbstractWriter, AbstractWriter);

          void t_AbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWriter), &PY_TYPE_DEF(AbstractWriter), module, "AbstractWriter", 0);
          }

          void t_AbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "class_", make_descriptor(AbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "wrapfn_", make_descriptor(t_AbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWriter::initializeClass, 1)))
              return NULL;
            return t_AbstractWriter::wrap_Object(AbstractWriter(((t_AbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_AbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWriter_enterSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.enterSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "enterSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_exitSection(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.exitSection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "exitSection", arg);
            return NULL;
          }

          static PyObject *t_AbstractWriter_write(t_AbstractWriter *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.write(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "write", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Collection.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "java/util/Spliterator.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collection::class$ = NULL;
    jmethodID *Collection::mids$ = NULL;
    bool Collection::live$ = false;

    jclass Collection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_d88dbdb69255b770] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_parallelStream_a68a17dd093f796d] = env->getMethodID(cls, "parallelStream", "()Ljava/util/stream/Stream;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_d88dbdb69255b770] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_df0341cda53d4d48] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_stream_a68a17dd093f796d] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_66041b51ef6ee21d] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    jboolean Collection::addAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    void Collection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean Collection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean Collection::containsAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_d88dbdb69255b770], a0.this$);
    }

    jboolean Collection::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint Collection::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean Collection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator Collection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    ::java::util::stream::Stream Collection::parallelStream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_parallelStream_a68a17dd093f796d]));
    }

    jboolean Collection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jboolean Collection::removeAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }

    jboolean Collection::retainAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_d88dbdb69255b770], a0.this$);
    }

    jint Collection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    ::java::util::Spliterator Collection::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_df0341cda53d4d48]));
    }

    ::java::util::stream::Stream Collection::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_a68a17dd093f796d]));
    }

    JArray< ::java::lang::Object > Collection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
    }

    JArray< ::java::lang::Object > Collection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_66041b51ef6ee21d], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_clear(t_Collection *self);
    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_hashCode(t_Collection *self);
    static PyObject *t_Collection_isEmpty(t_Collection *self);
    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_parallelStream(t_Collection *self);
    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_size(t_Collection *self);
    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_stream(t_Collection *self);
    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_get__empty(t_Collection *self, void *data);
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data);
    static PyGetSetDef t_Collection__fields_[] = {
      DECLARE_GET_FIELD(t_Collection, empty),
      DECLARE_GET_FIELD(t_Collection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Collection__methods_[] = {
      DECLARE_METHOD(t_Collection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, of_, METH_VARARGS),
      DECLARE_METHOD(t_Collection, add, METH_O),
      DECLARE_METHOD(t_Collection, addAll, METH_O),
      DECLARE_METHOD(t_Collection, clear, METH_NOARGS),
      DECLARE_METHOD(t_Collection, contains, METH_O),
      DECLARE_METHOD(t_Collection, containsAll, METH_O),
      DECLARE_METHOD(t_Collection, equals, METH_O),
      DECLARE_METHOD(t_Collection, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Collection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Collection, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, parallelStream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, remove, METH_O),
      DECLARE_METHOD(t_Collection, removeAll, METH_O),
      DECLARE_METHOD(t_Collection, retainAll, METH_O),
      DECLARE_METHOD(t_Collection, size, METH_NOARGS),
      DECLARE_METHOD(t_Collection, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, stream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collection)[] = {
      { Py_tp_methods, t_Collection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Collection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Collection *)) get_generic_iterator< t_Collection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collection)[] = {
      &PY_TYPE_DEF(::java::lang::Iterable),
      NULL
    };

    DEFINE_TYPE(Collection, t_Collection, Collection);
    PyObject *t_Collection::wrap_Object(const Collection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Collection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Collection::install(PyObject *module)
    {
      installType(&PY_TYPE(Collection), &PY_TYPE_DEF(Collection), module, "Collection", 0);
    }

    void t_Collection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "class_", make_descriptor(Collection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "wrapfn_", make_descriptor(t_Collection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collection::initializeClass, 1)))
        return NULL;
      return t_Collection::wrap_Object(Collection(((t_Collection *) arg)->object.this$));
    }
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_clear(t_Collection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Collection_hashCode(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_isEmpty(t_Collection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Collection_parallelStream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.parallelStream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_size(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Collection_stream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Collection_get__empty(t_Collection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonSwitchHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/attitudes/AttitudesSequence$SwitchHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonSwitchHandler::class$ = NULL;
      jmethodID *PythonSwitchHandler::mids$ = NULL;
      bool PythonSwitchHandler::live$ = false;

      jclass PythonSwitchHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonSwitchHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_switchOccurred_8a05bbdb2856b4ec] = env->getMethodID(cls, "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSwitchHandler::PythonSwitchHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonSwitchHandler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonSwitchHandler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonSwitchHandler::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self);
      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args);
      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data);
      static PyGetSetDef t_PythonSwitchHandler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSwitchHandler, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSwitchHandler__methods_[] = {
        DECLARE_METHOD(t_PythonSwitchHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSwitchHandler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSwitchHandler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSwitchHandler)[] = {
        { Py_tp_methods, t_PythonSwitchHandler__methods_ },
        { Py_tp_init, (void *) t_PythonSwitchHandler_init_ },
        { Py_tp_getset, t_PythonSwitchHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSwitchHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSwitchHandler, t_PythonSwitchHandler, PythonSwitchHandler);

      void t_PythonSwitchHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSwitchHandler), &PY_TYPE_DEF(PythonSwitchHandler), module, "PythonSwitchHandler", 1);
      }

      void t_PythonSwitchHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "class_", make_descriptor(PythonSwitchHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "wrapfn_", make_descriptor(t_PythonSwitchHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSwitchHandler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSwitchHandler::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonSwitchHandler_pythonDecRef0 },
          { "switchOccurred", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSwitchHandler_switchOccurred1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSwitchHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSwitchHandler::initializeClass, 1)))
          return NULL;
        return t_PythonSwitchHandler::wrap_Object(PythonSwitchHandler(((t_PythonSwitchHandler *) arg)->object.this$));
      }
      static PyObject *t_PythonSwitchHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSwitchHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonSwitchHandler_init_(t_PythonSwitchHandler *self, PyObject *args, PyObject *kwds)
      {
        PythonSwitchHandler object((jobject) NULL);

        INT_CALL(object = PythonSwitchHandler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSwitchHandler_finalize(t_PythonSwitchHandler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSwitchHandler_pythonExtension(t_PythonSwitchHandler *self, PyObject *args)
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

      static void JNICALL t_PythonSwitchHandler_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonSwitchHandler_switchOccurred1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSwitchHandler::mids$[PythonSwitchHandler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *o1 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a1));
        PyObject *o2 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a2));
        PyObject *result = PyObject_CallMethod(obj, "switchOccurred", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonSwitchHandler_get__self(t_PythonSwitchHandler *self, void *data)
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
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldStateCovariance::class$ = NULL;
      jmethodID *FieldStateCovariance::mids$ = NULL;
      bool FieldStateCovariance::live$ = false;

      jclass FieldStateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldStateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_6864f987223edb24] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_72604ef56d6aab8a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_ed4a16a3aada590f] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceFrame_46863450506a2a2f] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceType_19c07e1c103265d1] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_6131a2ffcdec47e9] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_cc77900a647586cf] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_shiftedBy_f43a586515ae07e7] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_toStateCovariance_79b153af3bb7e103] = env->getMethodID(cls, "toStateCovariance", "()Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6864f987223edb24, a0.this$, a1.this$, a2.this$)) {}

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72604ef56d6aab8a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_ed4a16a3aada590f], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_46863450506a2a2f], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceType(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_19c07e1c103265d1], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldStateCovariance::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::orekit::frames::Frame FieldStateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::LOF FieldStateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_6131a2ffcdec47e9]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldStateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_cc77900a647586cf]));
      }

      ::org::orekit::orbits::OrbitType FieldStateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
      }

      ::org::orekit::orbits::PositionAngleType FieldStateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
      }

      FieldStateCovariance FieldStateCovariance::shiftedBy(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_f43a586515ae07e7], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::propagation::StateCovariance FieldStateCovariance::toStateCovariance() const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_toStateCovariance_79b153af3bb7e103]));
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
      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args);
      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data);
      static PyGetSetDef t_FieldStateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStateCovariance, date),
        DECLARE_GET_FIELD(t_FieldStateCovariance, frame),
        DECLARE_GET_FIELD(t_FieldStateCovariance, lOF),
        DECLARE_GET_FIELD(t_FieldStateCovariance, matrix),
        DECLARE_GET_FIELD(t_FieldStateCovariance, orbitType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, positionAngleType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStateCovariance__methods_[] = {
        DECLARE_METHOD(t_FieldStateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, toStateCovariance, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStateCovariance)[] = {
        { Py_tp_methods, t_FieldStateCovariance__methods_ },
        { Py_tp_init, (void *) t_FieldStateCovariance_init_ },
        { Py_tp_getset, t_FieldStateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldStateCovariance, t_FieldStateCovariance, FieldStateCovariance);
      PyObject *t_FieldStateCovariance::wrap_Object(const FieldStateCovariance& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStateCovariance::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStateCovariance), &PY_TYPE_DEF(FieldStateCovariance), module, "FieldStateCovariance", 0);
      }

      void t_FieldStateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "class_", make_descriptor(FieldStateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "wrapfn_", make_descriptor(t_FieldStateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStateCovariance::initializeClass, 1)))
          return NULL;
        return t_FieldStateCovariance::wrap_Object(FieldStateCovariance(((t_FieldStateCovariance *) arg)->object.this$));
      }
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOF a2((jobject) NULL);
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKkKK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOF a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self)
      {
        ::org::orekit::propagation::StateCovariance result((jobject) NULL);
        OBJ_CALL(result = self->object.toStateCovariance());
        return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
      }
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
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
              mids$[mid_init$_205d9800aa12a93a] = env->getMethodID(cls, "<init>", "(DLjava/util/List;)V");
              mids$[mid_getCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getTypesObsScaled_a6156df500549a58] = env->getMethodID(cls, "getTypesObsScaled", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaleFactorCorrection::ScaleFactorCorrection(jdouble a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_205d9800aa12a93a, a0, a1.this$)) {}

          jdouble ScaleFactorCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_456d9a2f64d6b28d]);
          }

          ::java::util::List ScaleFactorCorrection::getTypesObsScaled() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTypesObsScaled_a6156df500549a58]));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *PowellOptimizer::class$ = NULL;
            jmethodID *PowellOptimizer::mids$ = NULL;
            bool PowellOptimizer::live$ = false;

            jclass PowellOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_init$_f83ff6a8ad92b0e0] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_init$_7444ef0fe2c51256] = env->getMethodID(cls, "<init>", "(DDDDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_doOptimize_f3368328259a5468] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_f83ff6a8ad92b0e0, a0, a1, a2.this$)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::optim::ConvergenceChecker & a4) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_7444ef0fe2c51256, a0, a1, a2, a3, a4.this$)) {}
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
            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args);
            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data);
            static PyGetSetDef t_PowellOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_PowellOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PowellOptimizer__methods_[] = {
              DECLARE_METHOD(t_PowellOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PowellOptimizer)[] = {
              { Py_tp_methods, t_PowellOptimizer__methods_ },
              { Py_tp_init, (void *) t_PowellOptimizer_init_ },
              { Py_tp_getset, t_PowellOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PowellOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(PowellOptimizer, t_PowellOptimizer, PowellOptimizer);
            PyObject *t_PowellOptimizer::wrap_Object(const PowellOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PowellOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PowellOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(PowellOptimizer), &PY_TYPE_DEF(PowellOptimizer), module, "PowellOptimizer", 0);
            }

            void t_PowellOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "class_", make_descriptor(PowellOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "wrapfn_", make_descriptor(t_PowellOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PowellOptimizer::initializeClass, 1)))
                return NULL;
              return t_PowellOptimizer::wrap_Object(PowellOptimizer(((t_PowellOptimizer *) arg)->object.this$));
            }
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PowellOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
                  PyTypeObject **p2;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3, a4));
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
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getDeltaMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochStart_aaa854c403487cf3] = env->getMethodID(cls, "getEpochStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTorque_17a952530a808943] = env->getMethodID(cls, "getTorque", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_setDeltaMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochStart_e82d68cd9f886886] = env->getMethodID(cls, "setEpochStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTorque_987a5fb872043b12] = env->getMethodID(cls, "setTorque", "(ID)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_456d9a2f64d6b28d]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochStart_aaa854c403487cf3]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_aa70fdb14ae9305f]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getTorque() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTorque_17a952530a808943]));
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_77e0f9a1f260e2e5], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_77e0f9a1f260e2e5], a0);
              }

              void Maneuver::setEpochStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochStart_e82d68cd9f886886], a0.this$);
              }

              void Maneuver::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_a455f3ff24eb0b47], a0.this$);
              }

              void Maneuver::setTorque(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setTorque_987a5fb872043b12], a0, a1);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self);
              static PyObject *t_Maneuver_getFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_getTorque(t_Maneuver *self);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochStart),
                DECLARE_GETSET_FIELD(t_Maneuver, frame),
                DECLARE_GET_FIELD(t_Maneuver, torque),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochStart, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getTorque, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochStart, METH_O),
                DECLARE_METHOD(t_Maneuver, setFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, setTorque, METH_VARARGS),
                DECLARE_METHOD(t_Maneuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
                { Py_tp_methods, t_Maneuver__methods_ },
                { Py_tp_init, (void *) t_Maneuver_init_ },
                { Py_tp_getset, t_Maneuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
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
                Maneuver object((jobject) NULL);

                INT_CALL(object = Maneuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getDuration(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getTorque(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg)
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

              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg)
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

              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochStart", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg)
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

              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setTorque(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTorque", args);
                return NULL;
              }

              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Maneuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data)
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

              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data)
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

              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochStart", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data)
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

              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_380085cc5c31afbb] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_9b5a6f4a51f0ae15] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_23211d1e26c9c2c1] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f7ffb3ec4f2d0056] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_de7363be5af22a90] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_667ac5ee3b8cba8a] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DDLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_ddd31c5991d1fe60] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_61ec0633a7b37601] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_2aa433dfb75a66e5] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_e200d210e0e2ea80] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/hipparchus/analysis/integration/UnivariateIntegrator;ID)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_380085cc5c31afbb], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2, jdouble a3) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_9b5a6f4a51f0ae15], a0.this$, a1.this$, a2, a3));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_23211d1e26c9c2c1], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f7ffb3ec4f2d0056], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_de7363be5af22a90], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a3, jint a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_667ac5ee3b8cba8a], a0.this$, a1, a2, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddd31c5991d1fe60], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a5, jint a6) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_61ec0633a7b37601], a0, a1, a2, a3, a4, a5.this$, a6));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_2aa433dfb75a66e5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7, a8));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter1DNumerical2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a6, jint a7, jdouble a8) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_e200d210e0e2ea80], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7, a8));
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
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);

              static PyMethodDef t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter1DNumerical2DPOCMethod, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod, t_AbstractShortTermEncounter1DNumerical2DPOCMethod, AbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter1DNumerical2DPOCMethod), module, "AbstractShortTermEncounter1DNumerical2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(AbstractShortTermEncounter1DNumerical2DPOCMethod(((t_AbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter1DNumerical2DPOCMethod_compute(t_AbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a1((jobject) NULL);
                    PyTypeObject **p1;
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1, &p1, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                    jint a2;
                    jdouble a3;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkID", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a3((jobject) NULL);
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDDkID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a3((jobject) NULL);
                    PyTypeObject **p3;
                    jint a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKID", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 7:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a5((jobject) NULL);
                    jint a6;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDDkI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
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
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a5((jobject) NULL);
                    PyTypeObject **p5;
                    jint a6;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a6))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 9:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::hipparchus::analysis::integration::UnivariateIntegrator a6((jobject) NULL);
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDkID", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a6((jobject) NULL);
                    PyTypeObject **p6;
                    jint a7;
                    jdouble a8;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKKKID", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_, &a7, &a8))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(AbstractShortTermEncounter1DNumerical2DPOCMethod), (PyObject *) self, "compute", args, 2);
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
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Object.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *BrouwerLyddanePropagatorBuilder::class$ = NULL;
        jmethodID *BrouwerLyddanePropagatorBuilder::mids$ = NULL;
        bool BrouwerLyddanePropagatorBuilder::live$ = false;

        jclass BrouwerLyddanePropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c72207c7d096789d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_init$_79e3a5a0ab71306d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;D)V");
            mids$[mid_init$_d1a2dc4f34c3bd1c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDLorg/orekit/forces/gravity/potential/TideSystem;DDDDLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;DD)V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_2e7dbdfa4a66de88] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/BrouwerLyddanePropagator;");
            mids$[mid_copy_b7a5d2f30ec62cb9] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/BrouwerLyddanePropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, jdouble a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_c72207c7d096789d, a0.this$, a1.this$, a2.this$, a3, a4)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4, jdouble a5) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_79e3a5a0ab71306d, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5)) {}

        BrouwerLyddanePropagatorBuilder::BrouwerLyddanePropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, const ::org::orekit::forces::gravity::potential::TideSystem & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, const ::org::orekit::orbits::OrbitType & a8, const ::org::orekit::orbits::PositionAngleType & a9, jdouble a10, jdouble a11) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d1a2dc4f34c3bd1c, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8.this$, a9.this$, a10, a11)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel BrouwerLyddanePropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::BrouwerLyddanePropagator BrouwerLyddanePropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::BrouwerLyddanePropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_2e7dbdfa4a66de88], a0.this$));
        }

        BrouwerLyddanePropagatorBuilder BrouwerLyddanePropagatorBuilder::copy() const
        {
          return BrouwerLyddanePropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_b7a5d2f30ec62cb9]));
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
        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_BrouwerLyddanePropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagatorBuilder)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagatorBuilder, t_BrouwerLyddanePropagatorBuilder, BrouwerLyddanePropagatorBuilder);

        void t_BrouwerLyddanePropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagatorBuilder), &PY_TYPE_DEF(BrouwerLyddanePropagatorBuilder), module, "BrouwerLyddanePropagatorBuilder", 0);
        }

        void t_BrouwerLyddanePropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "class_", make_descriptor(BrouwerLyddanePropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagatorBuilder::wrap_Object(BrouwerLyddanePropagatorBuilder(((t_BrouwerLyddanePropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagatorBuilder_init_(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 12:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              ::org::orekit::forces::gravity::potential::TideSystem a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              ::org::orekit::orbits::OrbitType a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::orbits::PositionAngleType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              BrouwerLyddanePropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kDDKDDDDKKDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::orbits::t_OrbitType::parameters_, &a9, &p9, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a10, &a11))
              {
                INT_CALL(object = BrouwerLyddanePropagatorBuilder(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
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

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildLeastSquaresModel(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_buildPropagator(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::BrouwerLyddanePropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::t_BrouwerLyddanePropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagatorBuilder_copy(t_BrouwerLyddanePropagatorBuilder *self, PyObject *args)
        {
          BrouwerLyddanePropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_BrouwerLyddanePropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencyHatchFilter::class$ = NULL;
          jmethodID *SingleFrequencyHatchFilter::mids$ = NULL;
          bool SingleFrequencyHatchFilter::live$ = false;

          jclass SingleFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e71f6ca0953b0461] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/MeasurementType;DDID)V");
              mids$[mid_filterData_0381c088adee2e17] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencyHatchFilter::SingleFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::MeasurementType & a2, jdouble a3, jdouble a4, jint a5, jdouble a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_e71f6ca0953b0461, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_0381c088adee2e17], a0.this$, a1.this$));
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
          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args);

          static PyMethodDef t_SingleFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, filterData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_SingleFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencyHatchFilter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(SingleFrequencyHatchFilter, t_SingleFrequencyHatchFilter, SingleFrequencyHatchFilter);

          void t_SingleFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencyHatchFilter), &PY_TYPE_DEF(SingleFrequencyHatchFilter), module, "SingleFrequencyHatchFilter", 0);
          }

          void t_SingleFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "class_", make_descriptor(SingleFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "wrapfn_", make_descriptor(t_SingleFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencyHatchFilter::wrap_Object(SingleFrequencyHatchFilter(((t_SingleFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::MeasurementType a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jint a5;
            jdouble a6;
            SingleFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkKDDID", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_MeasurementType::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = SingleFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *CombinedDerivatives::class$ = NULL;
        jmethodID *CombinedDerivatives::mids$ = NULL;
        bool CombinedDerivatives::live$ = false;

        jclass CombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/CombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_getAdditionalDerivatives_7cdc325af0834901] = env->getMethodID(cls, "getAdditionalDerivatives", "()[D");
            mids$[mid_getMainStateDerivativesIncrements_7cdc325af0834901] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CombinedDerivatives::CombinedDerivatives(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

        JArray< jdouble > CombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_7cdc325af0834901]));
        }

        JArray< jdouble > CombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_7cdc325af0834901]));
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
      namespace integration {
        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data);
        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data);
        static PyGetSetDef t_CombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_CombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_CombinedDerivatives, mainStateDerivativesIncrements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_CombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CombinedDerivatives)[] = {
          { Py_tp_methods, t_CombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_CombinedDerivatives_init_ },
          { Py_tp_getset, t_CombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CombinedDerivatives, t_CombinedDerivatives, CombinedDerivatives);

        void t_CombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(CombinedDerivatives), &PY_TYPE_DEF(CombinedDerivatives), module, "CombinedDerivatives", 0);
        }

        void t_CombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "class_", make_descriptor(CombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "wrapfn_", make_descriptor(t_CombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_CombinedDerivatives::wrap_Object(CombinedDerivatives(((t_CombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          CombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = CombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return value.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCategory::class$ = NULL;
              jmethodID *OrbitCategory::mids$ = NULL;
              bool OrbitCategory::live$ = false;
              OrbitCategory *OrbitCategory::EGO = NULL;
              OrbitCategory *OrbitCategory::ESO = NULL;
              OrbitCategory *OrbitCategory::GEO = NULL;
              OrbitCategory *OrbitCategory::GHO = NULL;
              OrbitCategory *OrbitCategory::GSO = NULL;
              OrbitCategory *OrbitCategory::GTO = NULL;
              OrbitCategory *OrbitCategory::HAO = NULL;
              OrbitCategory *OrbitCategory::HEO = NULL;
              OrbitCategory *OrbitCategory::IGO = NULL;
              OrbitCategory *OrbitCategory::LEO = NULL;
              OrbitCategory *OrbitCategory::LMO = NULL;
              OrbitCategory *OrbitCategory::MEO = NULL;
              OrbitCategory *OrbitCategory::MGO = NULL;
              OrbitCategory *OrbitCategory::NSO = NULL;
              OrbitCategory *OrbitCategory::UFO = NULL;

              jclass OrbitCategory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_15706f411f2eae8d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");
                  mids$[mid_values_be45266061a97127] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EGO = new OrbitCategory(env->getStaticObjectField(cls, "EGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  ESO = new OrbitCategory(env->getStaticObjectField(cls, "ESO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GEO = new OrbitCategory(env->getStaticObjectField(cls, "GEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GHO = new OrbitCategory(env->getStaticObjectField(cls, "GHO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GSO = new OrbitCategory(env->getStaticObjectField(cls, "GSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  GTO = new OrbitCategory(env->getStaticObjectField(cls, "GTO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HAO = new OrbitCategory(env->getStaticObjectField(cls, "HAO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  HEO = new OrbitCategory(env->getStaticObjectField(cls, "HEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  IGO = new OrbitCategory(env->getStaticObjectField(cls, "IGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LEO = new OrbitCategory(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  LMO = new OrbitCategory(env->getStaticObjectField(cls, "LMO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MEO = new OrbitCategory(env->getStaticObjectField(cls, "MEO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  MGO = new OrbitCategory(env->getStaticObjectField(cls, "MGO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  NSO = new OrbitCategory(env->getStaticObjectField(cls, "NSO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  UFO = new OrbitCategory(env->getStaticObjectField(cls, "UFO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCategory;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::lang::String OrbitCategory::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
              }

              OrbitCategory OrbitCategory::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitCategory(env->callStaticObjectMethod(cls, mids$[mid_valueOf_15706f411f2eae8d], a0.this$));
              }

              JArray< OrbitCategory > OrbitCategory::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitCategory >(env->callStaticObjectMethod(cls, mids$[mid_values_be45266061a97127]));
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
              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args);
              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitCategory_values(PyTypeObject *type);
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data);
              static PyGetSetDef t_OrbitCategory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCategory, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCategory__methods_[] = {
                DECLARE_METHOD(t_OrbitCategory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, toString, METH_VARARGS),
                DECLARE_METHOD(t_OrbitCategory, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitCategory, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCategory)[] = {
                { Py_tp_methods, t_OrbitCategory__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitCategory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCategory)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitCategory, t_OrbitCategory, OrbitCategory);
              PyObject *t_OrbitCategory::wrap_Object(const OrbitCategory& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitCategory::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitCategory::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitCategory *self = (t_OrbitCategory *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitCategory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCategory), &PY_TYPE_DEF(OrbitCategory), module, "OrbitCategory", 0);
              }

              void t_OrbitCategory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "class_", make_descriptor(OrbitCategory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "wrapfn_", make_descriptor(t_OrbitCategory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitCategory::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "EGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::EGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "ESO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::ESO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GHO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GHO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "GTO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::GTO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HAO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HAO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "HEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::HEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "IGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::IGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "LMO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::LMO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MEO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MEO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "MGO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::MGO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "NSO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::NSO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCategory), "UFO", make_descriptor(t_OrbitCategory::wrap_Object(*OrbitCategory::UFO)));
              }

              static PyObject *t_OrbitCategory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCategory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCategory::wrap_Object(OrbitCategory(((t_OrbitCategory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCategory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCategory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitCategory_of_(t_OrbitCategory *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitCategory_toString(t_OrbitCategory *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(OrbitCategory), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_OrbitCategory_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitCategory result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::valueOf(a0));
                  return t_OrbitCategory::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitCategory_values(PyTypeObject *type)
              {
                JArray< OrbitCategory > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCategory::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitCategory::wrap_jobject);
              }
              static PyObject *t_OrbitCategory_get__parameters_(t_OrbitCategory *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
                  mids$[mid_getCCSDSType_c2b5c6ffc15c5f1d] = env->getMethodID(cls, "getCCSDSType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
                  mids$[mid_getMethod_caebdf5d02cb71c0] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod;");
                  mids$[mid_valueOf_3fe5f6c9da97ef39] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_values_5f6a8ed784b3e994] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

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
                return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getCCSDSType_c2b5c6ffc15c5f1d]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod ShortTermEncounter2DPOCMethodType::getMethod() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod(env->callObjectMethod(this$, mids$[mid_getMethod_caebdf5d02cb71c0]));
              }

              ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethodType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShortTermEncounter2DPOCMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3fe5f6c9da97ef39], a0.this$));
              }

              JArray< ShortTermEncounter2DPOCMethodType > ShortTermEncounter2DPOCMethodType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShortTermEncounter2DPOCMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_5f6a8ed784b3e994]));
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
#include "org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameDummyAlmanac::class$ = NULL;
          jmethodID *SubFrameDummyAlmanac::mids$ = NULL;
          bool SubFrameDummyAlmanac::live$ = false;

          jclass SubFrameDummyAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameDummyAlmanac");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrameDummyAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameDummyAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameDummyAlmanac, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameDummyAlmanac)[] = {
            { Py_tp_methods, t_SubFrameDummyAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameDummyAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameDummyAlmanac, t_SubFrameDummyAlmanac, SubFrameDummyAlmanac);

          void t_SubFrameDummyAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameDummyAlmanac), &PY_TYPE_DEF(SubFrameDummyAlmanac), module, "SubFrameDummyAlmanac", 0);
          }

          void t_SubFrameDummyAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "class_", make_descriptor(SubFrameDummyAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "wrapfn_", make_descriptor(t_SubFrameDummyAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameDummyAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameDummyAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameDummyAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameDummyAlmanac::wrap_Object(SubFrameDummyAlmanac(((t_SubFrameDummyAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameDummyAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameDummyAlmanac::initializeClass, 0))
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
#include "java/util/AbstractCollection.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractCollection::class$ = NULL;
    jmethodID *AbstractCollection::mids$ = NULL;
    bool AbstractCollection::live$ = false;

    jclass AbstractCollection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractCollection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_d88dbdb69255b770] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_229c87223f486349] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_d88dbdb69255b770] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_229c87223f486349] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_d88dbdb69255b770] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toArray_e81d7907eea7e008] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_66041b51ef6ee21d] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractCollection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    jboolean AbstractCollection::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_d88dbdb69255b770], a0.this$);
    }

    void AbstractCollection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean AbstractCollection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_229c87223f486349], a0.this$);
    }

    jboolean AbstractCollection::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_d88dbdb69255b770], a0.this$);
    }

    jboolean AbstractCollection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
    }

    ::java::util::Iterator AbstractCollection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jboolean AbstractCollection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_229c87223f486349], a0.this$);
    }

    jboolean AbstractCollection::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }

    jboolean AbstractCollection::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_d88dbdb69255b770], a0.this$);
    }

    jint AbstractCollection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e81d7907eea7e008]));
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_66041b51ef6ee21d], a0.this$));
    }

    ::java::lang::String AbstractCollection::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data);
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data);
    static PyGetSetDef t_AbstractCollection__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractCollection, empty),
      DECLARE_GET_FIELD(t_AbstractCollection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractCollection__methods_[] = {
      DECLARE_METHOD(t_AbstractCollection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, add, METH_O),
      DECLARE_METHOD(t_AbstractCollection, addAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, contains, METH_O),
      DECLARE_METHOD(t_AbstractCollection, containsAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, iterator, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, remove, METH_O),
      DECLARE_METHOD(t_AbstractCollection, removeAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, retainAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, toArray, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractCollection)[] = {
      { Py_tp_methods, t_AbstractCollection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractCollection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractCollection *)) get_generic_iterator< t_AbstractCollection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractCollection)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractCollection, t_AbstractCollection, AbstractCollection);
    PyObject *t_AbstractCollection::wrap_Object(const AbstractCollection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractCollection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractCollection::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractCollection), &PY_TYPE_DEF(AbstractCollection), module, "AbstractCollection", 0);
    }

    void t_AbstractCollection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "class_", make_descriptor(AbstractCollection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "wrapfn_", make_descriptor(t_AbstractCollection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractCollection::initializeClass, 1)))
        return NULL;
      return t_AbstractCollection::wrap_Object(AbstractCollection(((t_AbstractCollection *) arg)->object.this$));
    }
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractCollection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.iterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }

    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractCollection), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *Quaternion::class$ = NULL;
      jmethodID *Quaternion::mids$ = NULL;
      bool Quaternion::live$ = false;
      Quaternion *Quaternion::I = NULL;
      Quaternion *Quaternion::IDENTITY = NULL;
      Quaternion *Quaternion::J = NULL;
      Quaternion *Quaternion::K = NULL;
      Quaternion *Quaternion::ZERO = NULL;

      jclass Quaternion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/Quaternion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_b67fd0977346c69b] = env->getMethodID(cls, "<init>", "(D[D)V");
          mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
          mids$[mid_add_0e7f855d458365a2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_add_db46105533d82c9c] = env->getStaticMethodID(cls, "add", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_dotProduct_b9494dc3dd6b577d] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_dotProduct_9ed1ef90a914aabd] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)D");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_db455fda376bf6cf] = env->getMethodID(cls, "equals", "(Lorg/hipparchus/complex/Quaternion;D)Z");
          mids$[mid_getConjugate_db551426640930fe] = env->getMethodID(cls, "getConjugate", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getInverse_db551426640930fe] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getNorm_456d9a2f64d6b28d] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getPositivePolarForm_db551426640930fe] = env->getMethodID(cls, "getPositivePolarForm", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_getQ0_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ0", "()D");
          mids$[mid_getQ1_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ1", "()D");
          mids$[mid_getQ2_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ2", "()D");
          mids$[mid_getQ3_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ3", "()D");
          mids$[mid_getScalarPart_456d9a2f64d6b28d] = env->getMethodID(cls, "getScalarPart", "()D");
          mids$[mid_getVectorPart_7cdc325af0834901] = env->getMethodID(cls, "getVectorPart", "()[D");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isPureQuaternion_e18fb1101b70dcca] = env->getMethodID(cls, "isPureQuaternion", "(D)Z");
          mids$[mid_isUnitQuaternion_e18fb1101b70dcca] = env->getMethodID(cls, "isUnitQuaternion", "(D)Z");
          mids$[mid_multiply_0e7f855d458365a2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_aa27def6e99612f6] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_multiply_db46105533d82c9c] = env->getStaticMethodID(cls, "multiply", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_normalize_db551426640930fe] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_0e7f855d458365a2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_subtract_db46105533d82c9c] = env->getStaticMethodID(cls, "subtract", "(Lorg/hipparchus/complex/Quaternion;Lorg/hipparchus/complex/Quaternion;)Lorg/hipparchus/complex/Quaternion;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          I = new Quaternion(env->getStaticObjectField(cls, "I", "Lorg/hipparchus/complex/Quaternion;"));
          IDENTITY = new Quaternion(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/complex/Quaternion;"));
          J = new Quaternion(env->getStaticObjectField(cls, "J", "Lorg/hipparchus/complex/Quaternion;"));
          K = new Quaternion(env->getStaticObjectField(cls, "K", "Lorg/hipparchus/complex/Quaternion;"));
          ZERO = new Quaternion(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/complex/Quaternion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Quaternion::Quaternion(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

      Quaternion::Quaternion(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b67fd0977346c69b, a0, a1.this$)) {}

      Quaternion::Quaternion(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

      Quaternion Quaternion::add(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_add_0e7f855d458365a2], a0.this$));
      }

      Quaternion Quaternion::add(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_add_db46105533d82c9c], a0.this$, a1.this$));
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_b9494dc3dd6b577d], a0.this$);
      }

      jdouble Quaternion::dotProduct(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_dotProduct_9ed1ef90a914aabd], a0.this$, a1.this$);
      }

      jboolean Quaternion::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jboolean Quaternion::equals(const Quaternion & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_db455fda376bf6cf], a0.this$, a1);
      }

      Quaternion Quaternion::getConjugate() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getConjugate_db551426640930fe]));
      }

      Quaternion Quaternion::getInverse() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getInverse_db551426640930fe]));
      }

      jdouble Quaternion::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_456d9a2f64d6b28d]);
      }

      Quaternion Quaternion::getPositivePolarForm() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_getPositivePolarForm_db551426640930fe]));
      }

      jdouble Quaternion::getQ0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ0_456d9a2f64d6b28d]);
      }

      jdouble Quaternion::getQ1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ1_456d9a2f64d6b28d]);
      }

      jdouble Quaternion::getQ2() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ2_456d9a2f64d6b28d]);
      }

      jdouble Quaternion::getQ3() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getQ3_456d9a2f64d6b28d]);
      }

      jdouble Quaternion::getScalarPart() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScalarPart_456d9a2f64d6b28d]);
      }

      JArray< jdouble > Quaternion::getVectorPart() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVectorPart_7cdc325af0834901]));
      }

      jint Quaternion::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jboolean Quaternion::isPureQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPureQuaternion_e18fb1101b70dcca], a0);
      }

      jboolean Quaternion::isUnitQuaternion(jdouble a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isUnitQuaternion_e18fb1101b70dcca], a0);
      }

      Quaternion Quaternion::multiply(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_0e7f855d458365a2], a0.this$));
      }

      Quaternion Quaternion::multiply(jdouble a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_multiply_aa27def6e99612f6], a0));
      }

      Quaternion Quaternion::multiply(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_multiply_db46105533d82c9c], a0.this$, a1.this$));
      }

      Quaternion Quaternion::normalize() const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_normalize_db551426640930fe]));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0) const
      {
        return Quaternion(env->callObjectMethod(this$, mids$[mid_subtract_0e7f855d458365a2], a0.this$));
      }

      Quaternion Quaternion::subtract(const Quaternion & a0, const Quaternion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Quaternion(env->callStaticObjectMethod(cls, mids$[mid_subtract_db46105533d82c9c], a0.this$, a1.this$));
      }

      ::java::lang::String Quaternion::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self);
      static PyObject *t_Quaternion_getInverse(t_Quaternion *self);
      static PyObject *t_Quaternion_getNorm(t_Quaternion *self);
      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ0(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ1(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ2(t_Quaternion *self);
      static PyObject *t_Quaternion_getQ3(t_Quaternion *self);
      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self);
      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self);
      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_normalize(t_Quaternion *self);
      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg);
      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args);
      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data);
      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data);
      static PyGetSetDef t_Quaternion__fields_[] = {
        DECLARE_GET_FIELD(t_Quaternion, conjugate),
        DECLARE_GET_FIELD(t_Quaternion, inverse),
        DECLARE_GET_FIELD(t_Quaternion, norm),
        DECLARE_GET_FIELD(t_Quaternion, positivePolarForm),
        DECLARE_GET_FIELD(t_Quaternion, q0),
        DECLARE_GET_FIELD(t_Quaternion, q1),
        DECLARE_GET_FIELD(t_Quaternion, q2),
        DECLARE_GET_FIELD(t_Quaternion, q3),
        DECLARE_GET_FIELD(t_Quaternion, scalarPart),
        DECLARE_GET_FIELD(t_Quaternion, vectorPart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Quaternion__methods_[] = {
        DECLARE_METHOD(t_Quaternion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, add, METH_O),
        DECLARE_METHOD(t_Quaternion, add_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, dotProduct, METH_O),
        DECLARE_METHOD(t_Quaternion, dotProduct_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, equals, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, getConjugate, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getPositivePolarForm, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ0, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ1, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ2, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getQ3, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getScalarPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, getVectorPart, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, isPureQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, isUnitQuaternion, METH_O),
        DECLARE_METHOD(t_Quaternion, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Quaternion, multiply_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Quaternion, subtract, METH_O),
        DECLARE_METHOD(t_Quaternion, subtract_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Quaternion, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Quaternion)[] = {
        { Py_tp_methods, t_Quaternion__methods_ },
        { Py_tp_init, (void *) t_Quaternion_init_ },
        { Py_tp_getset, t_Quaternion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Quaternion)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Quaternion, t_Quaternion, Quaternion);

      void t_Quaternion::install(PyObject *module)
      {
        installType(&PY_TYPE(Quaternion), &PY_TYPE_DEF(Quaternion), module, "Quaternion", 0);
      }

      void t_Quaternion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "class_", make_descriptor(Quaternion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "wrapfn_", make_descriptor(t_Quaternion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "boxfn_", make_descriptor(boxObject));
        env->getClass(Quaternion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "I", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "IDENTITY", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::IDENTITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "J", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::J)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "K", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::K)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Quaternion), "ZERO", make_descriptor(t_Quaternion::wrap_Object(*Quaternion::ZERO)));
      }

      static PyObject *t_Quaternion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Quaternion::initializeClass, 1)))
          return NULL;
        return t_Quaternion::wrap_Object(Quaternion(((t_Quaternion *) arg)->object.this$));
      }
      static PyObject *t_Quaternion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Quaternion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Quaternion_init_(t_Quaternion *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Quaternion(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jdouble a0;
            JArray< jdouble > a1((jobject) NULL);
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "D[D", &a0, &a1))
            {
              INT_CALL(object = Quaternion(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            Quaternion object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Quaternion(a0, a1, a2, a3));
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

      static PyObject *t_Quaternion_add(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_add_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::add(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "add_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_dotProduct_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::dotProduct(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "dotProduct_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_equals(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 2:
          {
            Quaternion a0((jobject) NULL);
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "kD", Quaternion::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Quaternion_getConjugate(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getConjugate());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getInverse(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getNorm(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getPositivePolarForm(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_getQ0(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ1(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ2(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ2());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getQ3(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getQ3());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getScalarPart(t_Quaternion *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScalarPart());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Quaternion_getVectorPart(t_Quaternion *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getVectorPart());
        return result.wrap();
      }

      static PyObject *t_Quaternion_hashCode(t_Quaternion *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Quaternion_isPureQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isPureQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isPureQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_isUnitQuaternion(t_Quaternion *self, PyObject *arg)
      {
        jdouble a0;
        jboolean result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.isUnitQuaternion(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isUnitQuaternion", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply(t_Quaternion *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Quaternion a0((jobject) NULL);
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "k", Quaternion::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Quaternion result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Quaternion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Quaternion_multiply_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::multiply(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "multiply_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_normalize(t_Quaternion *self)
      {
        Quaternion result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_Quaternion::wrap_Object(result);
      }

      static PyObject *t_Quaternion_subtract(t_Quaternion *self, PyObject *arg)
      {
        Quaternion a0((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArg(arg, "k", Quaternion::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_Quaternion_subtract_(PyTypeObject *type, PyObject *args)
      {
        Quaternion a0((jobject) NULL);
        Quaternion a1((jobject) NULL);
        Quaternion result((jobject) NULL);

        if (!parseArgs(args, "kk", Quaternion::initializeClass, Quaternion::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::Quaternion::subtract(a0, a1));
          return t_Quaternion::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "subtract_", args);
        return NULL;
      }

      static PyObject *t_Quaternion_toString(t_Quaternion *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Quaternion), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Quaternion_get__conjugate(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getConjugate());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__inverse(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__norm(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__positivePolarForm(t_Quaternion *self, void *data)
      {
        Quaternion value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositivePolarForm());
        return t_Quaternion::wrap_Object(value);
      }

      static PyObject *t_Quaternion_get__q0(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q1(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q2(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ2());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__q3(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getQ3());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__scalarPart(t_Quaternion *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScalarPart());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Quaternion_get__vectorPart(t_Quaternion *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getVectorPart());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Opm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmWriter::class$ = NULL;
              jmethodID *OpmWriter::mids$ = NULL;
              bool OpmWriter::live$ = false;
              jdouble OpmWriter::CCSDS_OPM_VERS = (jdouble) 0;
              jint OpmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OpmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7cae0d769c2d9ccc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OPM_VERS = env->getStaticDoubleField(cls, "CCSDS_OPM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmWriter::OpmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_7cae0d769c2d9ccc, a0.this$, a1.this$, a2.this$)) {}
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
            namespace opm {
              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args);
              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data);
              static PyGetSetDef t_OpmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OpmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmWriter__methods_[] = {
                DECLARE_METHOD(t_OpmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmWriter)[] = {
                { Py_tp_methods, t_OpmWriter__methods_ },
                { Py_tp_init, (void *) t_OpmWriter_init_ },
                { Py_tp_getset, t_OpmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OpmWriter, t_OpmWriter, OpmWriter);
              PyObject *t_OpmWriter::wrap_Object(const OpmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OpmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OpmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OpmWriter *self = (t_OpmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OpmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmWriter), &PY_TYPE_DEF(OpmWriter), module, "OpmWriter", 0);
              }

              void t_OpmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "class_", make_descriptor(OpmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "wrapfn_", make_descriptor(t_OpmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OpmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "CCSDS_OPM_VERS", make_descriptor(OpmWriter::CCSDS_OPM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmWriter), "KVN_PADDING_WIDTH", make_descriptor(OpmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OpmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmWriter::initializeClass, 1)))
                  return NULL;
                return t_OpmWriter::wrap_Object(OpmWriter(((t_OpmWriter *) arg)->object.this$));
              }
              static PyObject *t_OpmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OpmWriter_of_(t_OpmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OpmWriter_init_(t_OpmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OpmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OpmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Opm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OpmWriter_get__parameters_(t_OpmWriter *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ScaledConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *ScaledConstantThrustPropulsionModel::mids$ = NULL;
          bool ScaledConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR = NULL;

          jclass ScaledConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0f1efbd8efdc5b6d] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_05c598bf3375e090] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_e912d21057defe63] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_17a952530a808943] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0afb6e76c9566061] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_31ec2b6903b76c9e] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_71c51b45829333ce] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              THRUSTX_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTX_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTY_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTY_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTZ_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTZ_SCALE_FACTOR", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaledConstantThrustPropulsionModel::ScaledConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_0f1efbd8efdc5b6d, a0, a1, a2.this$, a3.this$)) {}

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_456d9a2f64d6b28d]);
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_f05cb8c6dfd5e0b9], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_05c598bf3375e090], a0.this$));
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_e912d21057defe63], a0.this$);
          }

          ::java::util::List ScaledConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_0afb6e76c9566061], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_31ec2b6903b76c9e], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_71c51b45829333ce], a0.this$));
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ScaledConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaledConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaledConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ScaledConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ScaledConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ScaledConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaledConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(ScaledConstantThrustPropulsionModel, t_ScaledConstantThrustPropulsionModel, ScaledConstantThrustPropulsionModel);

          void t_ScaledConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaledConstantThrustPropulsionModel), &PY_TYPE_DEF(ScaledConstantThrustPropulsionModel), module, "ScaledConstantThrustPropulsionModel", 0);
          }

          void t_ScaledConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "class_", make_descriptor(ScaledConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_ScaledConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(ScaledConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTX_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTY_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTZ_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR)));
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ScaledConstantThrustPropulsionModel::wrap_Object(ScaledConstantThrustPropulsionModel(((t_ScaledConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ScaledConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ScaledConstantThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUtils::class$ = NULL;
      jmethodID *ComplexUtils::mids$ = NULL;
      bool ComplexUtils::live$ = false;

      jclass ComplexUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convertToComplex_69f3673229f30e61] = env->getStaticMethodID(cls, "convertToComplex", "([D)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_4a983b2ed426e60d] = env->getStaticMethodID(cls, "polar2Complex", "(DD)Lorg/hipparchus/complex/Complex;");
          mids$[mid_polar2Complex_90ceabb919e66ea9] = env->getStaticMethodID(cls, "polar2Complex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexUtils::convertToComplex(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::complex::Complex >(env->callStaticObjectMethod(cls, mids$[mid_convertToComplex_69f3673229f30e61], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUtils::polar2Complex(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_4a983b2ed426e60d], a0, a1));
      }

      ::org::hipparchus::complex::FieldComplex ComplexUtils::polar2Complex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_polar2Complex_90ceabb919e66ea9], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ComplexUtils__methods_[] = {
        DECLARE_METHOD(t_ComplexUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, convertToComplex, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUtils, polar2Complex, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUtils)[] = {
        { Py_tp_methods, t_ComplexUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUtils, t_ComplexUtils, ComplexUtils);

      void t_ComplexUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUtils), &PY_TYPE_DEF(ComplexUtils), module, "ComplexUtils", 0);
      }

      void t_ComplexUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "class_", make_descriptor(ComplexUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "wrapfn_", make_descriptor(t_ComplexUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUtils::initializeClass, 1)))
          return NULL;
        return t_ComplexUtils::wrap_Object(ComplexUtils(((t_ComplexUtils *) arg)->object.this$));
      }
      static PyObject *t_ComplexUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexUtils_convertToComplex(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::convertToComplex(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError(type, "convertToComplex", arg);
        return NULL;
      }

      static PyObject *t_ComplexUtils_polar2Complex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexUtils::polar2Complex(a0, a1));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "polar2Complex", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/DetectorBasedEventState.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
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
            mids$[mid_init$_95ad63d6e12b665a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_doEvent_786b2ff82ce4b0ff] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_31e05790c4db57cc] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_8a6f4259e80e096f] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_getEventTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_reinitializeBegin_7f7ea329b6669cd2] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_tryAdvance_6a90482ad4740a55] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DetectorBasedEventState::DetectorBasedEventState(const ::org::hipparchus::ode::events::ODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95ad63d6e12b665a, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence DetectorBasedEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_786b2ff82ce4b0ff], a0.this$));
        }

        jboolean DetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_31e05790c4db57cc], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector DetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_8a6f4259e80e096f]));
        }

        jdouble DetectorBasedEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_456d9a2f64d6b28d]);
        }

        void DetectorBasedEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
        }

        void DetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_7f7ea329b6669cd2], a0.this$);
        }

        jboolean DetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_6a90482ad4740a55], a0.this$, a1.this$);
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader::class$ = NULL;
            jmethodID *DtcDataLoader::mids$ = NULL;
            bool DtcDataLoader::live$ = false;

            jclass DtcDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6d73d536a2f24dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_d01a04ddab6c7194] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader::DtcDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d73d536a2f24dd5, a0.this$)) {}

            ::java::util::SortedSet DtcDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_d01a04ddab6c7194]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
            }

            void DtcDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
            }

            jboolean DtcDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args);
            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data);
            static PyGetSetDef t_DtcDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader, dataSet),
              DECLARE_GET_FIELD(t_DtcDataLoader, maxDate),
              DECLARE_GET_FIELD(t_DtcDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_DtcDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader)[] = {
              { Py_tp_methods, t_DtcDataLoader__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader_init_ },
              { Py_tp_getset, t_DtcDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader, t_DtcDataLoader, DtcDataLoader);

            void t_DtcDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader), &PY_TYPE_DEF(DtcDataLoader), module, "DtcDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(DtcDataLoader$LineParameters)));
            }

            void t_DtcDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "class_", make_descriptor(DtcDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "wrapfn_", make_descriptor(t_DtcDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader::wrap_Object(DtcDataLoader(((t_DtcDataLoader *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              DtcDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = DtcDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(DtcDataLoader$LineParameters));
            }

            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "loadData", args);
              return NULL;
            }

            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_f2f64475e4580546] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_5e6ae88ca7503288] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_doIntegrate_456d9a2f64d6b28d] = env->getMethodID(cls, "doIntegrate", "()D");
            mids$[mid_getMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_computeObjectiveValue_0ba5fed9597b693e] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_setup_77af8aa9123ea2e7] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_456d9a2f64d6b28d]);
        }

        jint BaseAbstractUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
        }

        jint BaseAbstractUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_f2f64475e4580546]);
        }

        jint BaseAbstractUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_f2f64475e4580546]);
        }

        jint BaseAbstractUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_f2f64475e4580546]);
        }

        jdouble BaseAbstractUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_456d9a2f64d6b28d]);
        }

        jdouble BaseAbstractUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_5e6ae88ca7503288], a0, a1.this$, a2, a3);
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
        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateIntegrator, t_BaseAbstractUnivariateIntegrator, BaseAbstractUnivariateIntegrator);

        void t_BaseAbstractUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractUnivariateIntegrator), module, "BaseAbstractUnivariateIntegrator", 0);
        }

        void t_BaseAbstractUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "class_", make_descriptor(BaseAbstractUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateIntegrator::wrap_Object(BaseAbstractUnivariateIntegrator(((t_BaseAbstractUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
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
#include "org/orekit/utils/PythonAbstractMultipleShooting.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
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
          mids$[mid_init$_8d9a40e4963acd76] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;DIZLjava/lang/String;)V");
          mids$[mid_computeAdditionalConstraints_5c4ec51dfa4e445c] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAugmentedInitialState_881fd9055e653db3] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMultipleShooting::PythonAbstractMultipleShooting(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2, jint a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_8d9a40e4963acd76, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

      void PythonAbstractMultipleShooting::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAbstractMultipleShooting::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractMultipleShooting::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMultipleShooting::mids$[PythonAbstractMultipleShooting::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/propagation/analytical/gnss/data/GNSSConstants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSConstants::class$ = NULL;
            jmethodID *GNSSConstants::mids$ = NULL;
            bool GNSSConstants::live$ = false;
            jdouble GNSSConstants::BEIDOU_AV = (jdouble) 0;
            jdouble GNSSConstants::BEIDOU_MU = (jdouble) 0;
            jint GNSSConstants::BEIDOU_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GALILEO_AV = (jdouble) 0;
            jdouble GNSSConstants::GALILEO_MU = (jdouble) 0;
            jint GNSSConstants::GALILEO_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::GLONASS_MU = (jdouble) 0;
            jdouble GNSSConstants::GLONASS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_PI = (jdouble) 0;
            jdouble GNSSConstants::GNSS_WEEK_IN_SECONDS = (jdouble) 0;
            jdouble GNSSConstants::GPS_AV = (jdouble) 0;
            jdouble GNSSConstants::GPS_MU = (jdouble) 0;
            jint GNSSConstants::GPS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::IRNSS_AV = (jdouble) 0;
            jdouble GNSSConstants::IRNSS_MU = (jdouble) 0;
            jint GNSSConstants::IRNSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::QZSS_AV = (jdouble) 0;
            jdouble GNSSConstants::QZSS_MU = (jdouble) 0;
            jint GNSSConstants::QZSS_WEEK_NB = (jint) 0;
            jdouble GNSSConstants::SBAS_MU = (jdouble) 0;

            jclass GNSSConstants::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSConstants");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BEIDOU_AV = env->getStaticDoubleField(cls, "BEIDOU_AV");
                BEIDOU_MU = env->getStaticDoubleField(cls, "BEIDOU_MU");
                BEIDOU_WEEK_NB = env->getStaticIntField(cls, "BEIDOU_WEEK_NB");
                GALILEO_AV = env->getStaticDoubleField(cls, "GALILEO_AV");
                GALILEO_MU = env->getStaticDoubleField(cls, "GALILEO_MU");
                GALILEO_WEEK_NB = env->getStaticIntField(cls, "GALILEO_WEEK_NB");
                GLONASS_MU = env->getStaticDoubleField(cls, "GLONASS_MU");
                GLONASS_PI = env->getStaticDoubleField(cls, "GLONASS_PI");
                GNSS_PI = env->getStaticDoubleField(cls, "GNSS_PI");
                GNSS_WEEK_IN_SECONDS = env->getStaticDoubleField(cls, "GNSS_WEEK_IN_SECONDS");
                GPS_AV = env->getStaticDoubleField(cls, "GPS_AV");
                GPS_MU = env->getStaticDoubleField(cls, "GPS_MU");
                GPS_WEEK_NB = env->getStaticIntField(cls, "GPS_WEEK_NB");
                IRNSS_AV = env->getStaticDoubleField(cls, "IRNSS_AV");
                IRNSS_MU = env->getStaticDoubleField(cls, "IRNSS_MU");
                IRNSS_WEEK_NB = env->getStaticIntField(cls, "IRNSS_WEEK_NB");
                QZSS_AV = env->getStaticDoubleField(cls, "QZSS_AV");
                QZSS_MU = env->getStaticDoubleField(cls, "QZSS_MU");
                QZSS_WEEK_NB = env->getStaticIntField(cls, "QZSS_WEEK_NB");
                SBAS_MU = env->getStaticDoubleField(cls, "SBAS_MU");
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_GNSSConstants__methods_[] = {
              DECLARE_METHOD(t_GNSSConstants, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSConstants, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSConstants)[] = {
              { Py_tp_methods, t_GNSSConstants__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSConstants)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GNSSConstants, t_GNSSConstants, GNSSConstants);

            void t_GNSSConstants::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSConstants), &PY_TYPE_DEF(GNSSConstants), module, "GNSSConstants", 0);
            }

            void t_GNSSConstants::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "class_", make_descriptor(GNSSConstants::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "wrapfn_", make_descriptor(t_GNSSConstants::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "boxfn_", make_descriptor(boxObject));
              env->getClass(GNSSConstants::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_AV", make_descriptor(GNSSConstants::BEIDOU_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_MU", make_descriptor(GNSSConstants::BEIDOU_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "BEIDOU_WEEK_NB", make_descriptor(GNSSConstants::BEIDOU_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_AV", make_descriptor(GNSSConstants::GALILEO_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_MU", make_descriptor(GNSSConstants::GALILEO_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GALILEO_WEEK_NB", make_descriptor(GNSSConstants::GALILEO_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_MU", make_descriptor(GNSSConstants::GLONASS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GLONASS_PI", make_descriptor(GNSSConstants::GLONASS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_PI", make_descriptor(GNSSConstants::GNSS_PI));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GNSS_WEEK_IN_SECONDS", make_descriptor(GNSSConstants::GNSS_WEEK_IN_SECONDS));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_AV", make_descriptor(GNSSConstants::GPS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_MU", make_descriptor(GNSSConstants::GPS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "GPS_WEEK_NB", make_descriptor(GNSSConstants::GPS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_AV", make_descriptor(GNSSConstants::IRNSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_MU", make_descriptor(GNSSConstants::IRNSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "IRNSS_WEEK_NB", make_descriptor(GNSSConstants::IRNSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_AV", make_descriptor(GNSSConstants::QZSS_AV));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_MU", make_descriptor(GNSSConstants::QZSS_MU));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "QZSS_WEEK_NB", make_descriptor(GNSSConstants::QZSS_WEEK_NB));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSConstants), "SBAS_MU", make_descriptor(GNSSConstants::SBAS_MU));
            }

            static PyObject *t_GNSSConstants_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSConstants::initializeClass, 1)))
                return NULL;
              return t_GNSSConstants::wrap_Object(GNSSConstants(((t_GNSSConstants *) arg)->object.this$));
            }
            static PyObject *t_GNSSConstants_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSConstants::initializeClass, 0))
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
#include "org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractFieldIntegratorBuilder::live$ = false;

        jclass AbstractFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_071d3edeab1fa823] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractFieldIntegratorBuilder::AbstractFieldIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_071d3edeab1fa823], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AbstractFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AbstractFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldIntegratorBuilder, t_AbstractFieldIntegratorBuilder, AbstractFieldIntegratorBuilder);
        PyObject *t_AbstractFieldIntegratorBuilder::wrap_Object(const AbstractFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldIntegratorBuilder *self = (t_AbstractFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractFieldIntegratorBuilder), module, "AbstractFieldIntegratorBuilder", 0);
        }

        void t_AbstractFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "class_", make_descriptor(AbstractFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldIntegratorBuilder::wrap_Object(AbstractFieldIntegratorBuilder(((t_AbstractFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_of_(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractFieldIntegratorBuilder_init_(t_AbstractFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          AbstractFieldIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = AbstractFieldIntegratorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractFieldIntegratorBuilder_buildIntegrator(t_AbstractFieldIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
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
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_AbstractFieldIntegratorBuilder_get__parameters_(t_AbstractFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPForceModel::class$ = NULL;
          jmethodID *CR3BPForceModel::mids$ = NULL;
          bool CR3BPForceModel::live$ = false;
          ::java::lang::String *CR3BPForceModel::MASS_RATIO_SUFFIX = NULL;

          jclass CR3BPForceModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPForceModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b154ccffb790db99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPotential_549f1eabc50f0937] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
              mids$[mid_getPotential_82cfe09454b40a26] = env->getMethodID(cls, "getPotential", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MASS_RATIO_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MASS_RATIO_SUFFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPForceModel::CR3BPForceModel(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b154ccffb790db99, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D CR3BPForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
          }

          jboolean CR3BPForceModel::dependsOnPositionOnly() const
          {
            return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
          }

          ::java::util::List CR3BPForceModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_549f1eabc50f0937], a0.this$));
          }

          ::org::hipparchus::analysis::differentiation::DerivativeStructure CR3BPForceModel::getPotential(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPotential_82cfe09454b40a26], a0.this$));
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self);
          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args);
          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data);
          static PyGetSetDef t_CR3BPForceModel__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPForceModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPForceModel__methods_[] = {
            DECLARE_METHOD(t_CR3BPForceModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPForceModel, acceleration, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPForceModel, dependsOnPositionOnly, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_CR3BPForceModel, getPotential, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPForceModel)[] = {
            { Py_tp_methods, t_CR3BPForceModel__methods_ },
            { Py_tp_init, (void *) t_CR3BPForceModel_init_ },
            { Py_tp_getset, t_CR3BPForceModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPForceModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPForceModel, t_CR3BPForceModel, CR3BPForceModel);

          void t_CR3BPForceModel::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPForceModel), &PY_TYPE_DEF(CR3BPForceModel), module, "CR3BPForceModel", 0);
          }

          void t_CR3BPForceModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "class_", make_descriptor(CR3BPForceModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "wrapfn_", make_descriptor(t_CR3BPForceModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(CR3BPForceModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPForceModel), "MASS_RATIO_SUFFIX", make_descriptor(j2p(*CR3BPForceModel::MASS_RATIO_SUFFIX)));
          }

          static PyObject *t_CR3BPForceModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPForceModel::initializeClass, 1)))
              return NULL;
            return t_CR3BPForceModel::wrap_Object(CR3BPForceModel(((t_CR3BPForceModel *) arg)->object.this$));
          }
          static PyObject *t_CR3BPForceModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPForceModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPForceModel_init_(t_CR3BPForceModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            CR3BPForceModel object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = CR3BPForceModel(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPForceModel_acceleration(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
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
            }

            PyErr_SetArgsError((PyObject *) self, "acceleration", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_dependsOnPositionOnly(t_CR3BPForceModel *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.dependsOnPositionOnly());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_CR3BPForceModel_getParametersDrivers(t_CR3BPForceModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_CR3BPForceModel_getPotential(t_CR3BPForceModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getPotential(a0));
                  return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getPotential", args);
            return NULL;
          }

          static PyObject *t_CR3BPForceModel_get__parametersDrivers(t_CR3BPForceModel *self, void *data)
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
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "java/io/InputStream.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "java/io/OutputStream.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *RuggedBuilder::class$ = NULL;
        jmethodID *RuggedBuilder::mids$ = NULL;
        bool RuggedBuilder::live$ = false;

        jclass RuggedBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/RuggedBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addLineSensor_900fe4fdbc2a5cf7] = env->getMethodID(cls, "addLineSensor", "(Lorg/orekit/rugged/linesensor/LineSensor;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_build_aadda624fd91f07a] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_clearLineSensors_e8cc04433d529305] = env->getMethodID(cls, "clearLineSensors", "()Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_getAFilter_c14c1c09874639c8] = env->getMethodID(cls, "getAFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getAInterpolationNumber_f2f64475e4580546] = env->getMethodID(cls, "getAInterpolationNumber", "()I");
            mids$[mid_getAberrationOfLightCorrection_e470b6d9e0d979db] = env->getMethodID(cls, "getAberrationOfLightCorrection", "()Z");
            mids$[mid_getAlgorithm_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getConstantElevation_456d9a2f64d6b28d] = env->getMethodID(cls, "getConstantElevation", "()D");
            mids$[mid_getEllipsoid_98afe253151ec70a] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getLightTimeCorrection_e470b6d9e0d979db] = env->getMethodID(cls, "getLightTimeCorrection", "()Z");
            mids$[mid_getLineSensors_a6156df500549a58] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/List;");
            mids$[mid_getMaxCachedTiles_f2f64475e4580546] = env->getMethodID(cls, "getMaxCachedTiles", "()I");
            mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOvershootTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getPVFilter_237181d932324188] = env->getMethodID(cls, "getPVFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getPVInterpolationNumber_f2f64475e4580546] = env->getMethodID(cls, "getPVInterpolationNumber", "()I");
            mids$[mid_getPositionsVelocities_a6156df500549a58] = env->getMethodID(cls, "getPositionsVelocities", "()Ljava/util/List;");
            mids$[mid_getQuaternions_a6156df500549a58] = env->getMethodID(cls, "getQuaternions", "()Ljava/util/List;");
            mids$[mid_getRefractionCorrection_c5c91b8d86c254a9] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getTStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_getTileUpdater_cb6dc666348d6832] = env->getMethodID(cls, "getTileUpdater", "()Lorg/orekit/rugged/raster/TileUpdater;");
            mids$[mid_setAberrationOfLightCorrection_7ba1d09925a1c2e8] = env->getMethodID(cls, "setAberrationOfLightCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setAlgorithm_b19fe62e744ebdf7] = env->getMethodID(cls, "setAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setConstantElevation_d31a2345d73f0c17] = env->getMethodID(cls, "setConstantElevation", "(D)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setDigitalElevationModel_0351ba82c61d43d5] = env->getMethodID(cls, "setDigitalElevationModel", "(Lorg/orekit/rugged/raster/TileUpdater;I)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_bca1427d03728ac9] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_15657880b2b72a4c] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/rugged/api/EllipsoidId;Lorg/orekit/rugged/api/BodyRotatingFrameId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setLightTimeCorrection_7ba1d09925a1c2e8] = env->getMethodID(cls, "setLightTimeCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setName_e939c6558ae8d313] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setRefractionCorrection_1221c81a5ec5d14c] = env->getMethodID(cls, "setRefractionCorrection", "(Lorg/orekit/rugged/refraction/AtmosphericRefraction;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTimeSpan_1408e731ef5a18be] = env->getMethodID(cls, "setTimeSpan", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_515223da82db6561] = env->getMethodID(cls, "setTrajectory", "(DILorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/propagation/Propagator;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_26cce329645c86d6] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/rugged/api/InertialFrameId;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_6e1eab6eae6713b3] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectoryAndTimeSpan_355e8a475ffc4525] = env->getMethodID(cls, "setTrajectoryAndTimeSpan", "(Ljava/io/InputStream;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_storeInterpolator_255f64cf1272816f] = env->getMethodID(cls, "storeInterpolator", "(Ljava/io/OutputStream;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedBuilder::RuggedBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        RuggedBuilder RuggedBuilder::addLineSensor(const ::org::orekit::rugged::linesensor::LineSensor & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_addLineSensor_900fe4fdbc2a5cf7], a0.this$));
        }

        ::org::orekit::rugged::api::Rugged RuggedBuilder::build() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_build_aadda624fd91f07a]));
        }

        RuggedBuilder RuggedBuilder::clearLineSensors() const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_clearLineSensors_e8cc04433d529305]));
        }

        ::org::orekit::utils::AngularDerivativesFilter RuggedBuilder::getAFilter() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAFilter_c14c1c09874639c8]));
        }

        jint RuggedBuilder::getAInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getAInterpolationNumber_f2f64475e4580546]);
        }

        jboolean RuggedBuilder::getAberrationOfLightCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getAberrationOfLightCorrection_e470b6d9e0d979db]);
        }

        ::org::orekit::rugged::api::AlgorithmId RuggedBuilder::getAlgorithm() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithm_41b1271dfac9173f]));
        }

        jdouble RuggedBuilder::getConstantElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantElevation_456d9a2f64d6b28d]);
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid RuggedBuilder::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_98afe253151ec70a]));
        }

        ::org::orekit::frames::Frame RuggedBuilder::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
        }

        jboolean RuggedBuilder::getLightTimeCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getLightTimeCorrection_e470b6d9e0d979db]);
        }

        ::java::util::List RuggedBuilder::getLineSensors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLineSensors_a6156df500549a58]));
        }

        jint RuggedBuilder::getMaxCachedTiles() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxCachedTiles_f2f64475e4580546]);
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
        }

        ::java::lang::String RuggedBuilder::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        jdouble RuggedBuilder::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter RuggedBuilder::getPVFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVFilter_237181d932324188]));
        }

        jint RuggedBuilder::getPVInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPVInterpolationNumber_f2f64475e4580546]);
        }

        ::java::util::List RuggedBuilder::getPositionsVelocities() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPositionsVelocities_a6156df500549a58]));
        }

        ::java::util::List RuggedBuilder::getQuaternions() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQuaternions_a6156df500549a58]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction RuggedBuilder::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_c5c91b8d86c254a9]));
        }

        jdouble RuggedBuilder::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_456d9a2f64d6b28d]);
        }

        ::org::orekit::rugged::raster::TileUpdater RuggedBuilder::getTileUpdater() const
        {
          return ::org::orekit::rugged::raster::TileUpdater(env->callObjectMethod(this$, mids$[mid_getTileUpdater_cb6dc666348d6832]));
        }

        RuggedBuilder RuggedBuilder::setAberrationOfLightCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAberrationOfLightCorrection_7ba1d09925a1c2e8], a0));
        }

        RuggedBuilder RuggedBuilder::setAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAlgorithm_b19fe62e744ebdf7], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setConstantElevation(jdouble a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setConstantElevation_d31a2345d73f0c17], a0));
        }

        RuggedBuilder RuggedBuilder::setDigitalElevationModel(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setDigitalElevationModel_0351ba82c61d43d5], a0.this$, a1));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_bca1427d03728ac9], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::rugged::api::EllipsoidId & a0, const ::org::orekit::rugged::api::BodyRotatingFrameId & a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_15657880b2b72a4c], a0.this$, a1.this$));
        }

        RuggedBuilder RuggedBuilder::setLightTimeCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setLightTimeCorrection_7ba1d09925a1c2e8], a0));
        }

        void RuggedBuilder::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_e939c6558ae8d313], a0.this$);
        }

        RuggedBuilder RuggedBuilder::setRefractionCorrection(const ::org::orekit::rugged::refraction::AtmosphericRefraction & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setRefractionCorrection_1221c81a5ec5d14c], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setTimeSpan(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTimeSpan_1408e731ef5a18be], a0.this$, a1.this$, a2, a3));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(jdouble a0, jint a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::utils::AngularDerivativesFilter & a3, const ::org::orekit::propagation::Propagator & a4) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_515223da82db6561], a0, a1, a2.this$, a3.this$, a4.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::rugged::api::InertialFrameId & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_26cce329645c86d6], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_6e1eab6eae6713b3], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectoryAndTimeSpan(const ::java::io::InputStream & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectoryAndTimeSpan_355e8a475ffc4525], a0.this$));
        }

        void RuggedBuilder::storeInterpolator(const ::java::io::OutputStream & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_storeInterpolator_255f64cf1272816f], a0.this$);
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
      namespace api {
        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_RuggedBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedBuilder, aFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, aInterpolationNumber),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, aberrationOfLightCorrection),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, algorithm),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, constantElevation),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, ellipsoid),
          DECLARE_GET_FIELD(t_RuggedBuilder, inertialFrame),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, lightTimeCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, lineSensors),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxCachedTiles),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxDate),
          DECLARE_GET_FIELD(t_RuggedBuilder, minDate),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, name),
          DECLARE_GET_FIELD(t_RuggedBuilder, overshootTolerance),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVInterpolationNumber),
          DECLARE_GET_FIELD(t_RuggedBuilder, positionsVelocities),
          DECLARE_GET_FIELD(t_RuggedBuilder, quaternions),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, refractionCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, tStep),
          DECLARE_GET_FIELD(t_RuggedBuilder, tileUpdater),
          DECLARE_SET_FIELD(t_RuggedBuilder, trajectoryAndTimeSpan),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedBuilder__methods_[] = {
          DECLARE_METHOD(t_RuggedBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, addLineSensor, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, clearLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAberrationOfLightCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getConstantElevation, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLightTimeCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxCachedTiles, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getName, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPositionsVelocities, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getQuaternions, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTileUpdater, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, setAberrationOfLightCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setAlgorithm, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setConstantElevation, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setDigitalElevationModel, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setEllipsoid, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setLightTimeCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setName, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setRefractionCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setTimeSpan, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectory, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectoryAndTimeSpan, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, storeInterpolator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedBuilder)[] = {
          { Py_tp_methods, t_RuggedBuilder__methods_ },
          { Py_tp_init, (void *) t_RuggedBuilder_init_ },
          { Py_tp_getset, t_RuggedBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RuggedBuilder, t_RuggedBuilder, RuggedBuilder);

        void t_RuggedBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedBuilder), &PY_TYPE_DEF(RuggedBuilder), module, "RuggedBuilder", 0);
        }

        void t_RuggedBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "class_", make_descriptor(RuggedBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "wrapfn_", make_descriptor(t_RuggedBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedBuilder::initializeClass, 1)))
            return NULL;
          return t_RuggedBuilder::wrap_Object(RuggedBuilder(((t_RuggedBuilder *) arg)->object.this$));
        }
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds)
        {
          RuggedBuilder object((jobject) NULL);

          INT_CALL(object = RuggedBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.addLineSensor(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addLineSensor", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self)
        {
          RuggedBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.clearLineSensors());
          return t_RuggedBuilder::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::raster::TileUpdater result((jobject) NULL);
          OBJ_CALL(result = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setAberrationOfLightCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAberrationOfLightCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
          PyTypeObject **p0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
          {
            OBJ_CALL(result = self->object.setAlgorithm(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAlgorithm", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg)
        {
          jdouble a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.setConstantElevation(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.setDigitalElevationModel(a0, a1));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setDigitalElevationModel", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::EllipsoidId a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::rugged::api::BodyRotatingFrameId a1((jobject) NULL);
              PyTypeObject **p1;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::rugged::api::EllipsoidId::initializeClass, ::org::orekit::rugged::api::BodyRotatingFrameId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_EllipsoidId::parameters_, &a1, &p1, ::org::orekit::rugged::api::t_BodyRotatingFrameId::parameters_))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0, a1));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setEllipsoid", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setLightTimeCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setLightTimeCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setRefractionCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setRefractionCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.setTimeSpan(a0, a1, a2, a3));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSpan", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator a4((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "DIKKk", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::rugged::api::InertialFrameId a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KKIKKIK", ::org::orekit::rugged::api::InertialFrameId::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_InertialFrameId::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "kKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectory", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::InputStream a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setTrajectoryAndTimeSpan(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectoryAndTimeSpan", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::OutputStream a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.storeInterpolator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "storeInterpolator", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setAberrationOfLightCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "aberrationOfLightCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &value))
            {
              INT_CALL(self->object.setAlgorithm(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "algorithm", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) value);
        }
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setConstantElevation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "constantElevation", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &value))
            {
              INT_CALL(self->object.setEllipsoid(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ellipsoid", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setLightTimeCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lightTimeCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &value))
            {
              INT_CALL(self->object.setRefractionCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refractionCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::raster::TileUpdater value((jobject) NULL);
          OBJ_CALL(value = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(value);
        }

        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::io::InputStream value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
            {
              INT_CALL(self->object.setTrajectoryAndTimeSpan(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trajectoryAndTimeSpan", arg);
          return -1;
        }
      }
    }
  }
}
