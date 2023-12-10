#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CharConsumer::class$ = NULL;
            jmethodID *ParseToken$CharConsumer::mids$ = NULL;
            bool ParseToken$CharConsumer::live$ = false;

            jclass ParseToken$CharConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CharConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_be0046d7f7239695] = env->getMethodID(cls, "accept", "(C)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CharConsumer::accept(jchar a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_be0046d7f7239695], a0);
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
            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CharConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CharConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CharConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CharConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CharConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CharConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CharConsumer, t_ParseToken$CharConsumer, ParseToken$CharConsumer);

            void t_ParseToken$CharConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CharConsumer), &PY_TYPE_DEF(ParseToken$CharConsumer), module, "ParseToken$CharConsumer", 0);
            }

            void t_ParseToken$CharConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "class_", make_descriptor(ParseToken$CharConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "wrapfn_", make_descriptor(t_ParseToken$CharConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CharConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CharConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CharConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CharConsumer::wrap_Object(ParseToken$CharConsumer(((t_ParseToken$CharConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CharConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CharConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CharConsumer_accept(t_ParseToken$CharConsumer *self, PyObject *arg)
            {
              jchar a0;

              if (!parseArg(arg, "C", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *DataQuality::class$ = NULL;
            jmethodID *DataQuality::mids$ = NULL;
            bool DataQuality::live$ = false;
            DataQuality *DataQuality::DEGRADED = NULL;
            DataQuality *DataQuality::RAW = NULL;
            DataQuality *DataQuality::VALIDATED = NULL;

            jclass DataQuality::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/DataQuality");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_57b262c05e83cf48] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_values_7fed206b06543ff4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEGRADED = new DataQuality(env->getStaticObjectField(cls, "DEGRADED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                RAW = new DataQuality(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                VALIDATED = new DataQuality(env->getStaticObjectField(cls, "VALIDATED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DataQuality DataQuality::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return DataQuality(env->callStaticObjectMethod(cls, mids$[mid_valueOf_57b262c05e83cf48], a0.this$));
            }

            JArray< DataQuality > DataQuality::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< DataQuality >(env->callStaticObjectMethod(cls, mids$[mid_values_7fed206b06543ff4]));
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
            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args);
            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_DataQuality_values(PyTypeObject *type);
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data);
            static PyGetSetDef t_DataQuality__fields_[] = {
              DECLARE_GET_FIELD(t_DataQuality, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DataQuality__methods_[] = {
              DECLARE_METHOD(t_DataQuality, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, of_, METH_VARARGS),
              DECLARE_METHOD(t_DataQuality, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DataQuality)[] = {
              { Py_tp_methods, t_DataQuality__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DataQuality__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DataQuality)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(DataQuality, t_DataQuality, DataQuality);
            PyObject *t_DataQuality::wrap_Object(const DataQuality& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_DataQuality::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_DataQuality::install(PyObject *module)
            {
              installType(&PY_TYPE(DataQuality), &PY_TYPE_DEF(DataQuality), module, "DataQuality", 0);
            }

            void t_DataQuality::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "class_", make_descriptor(DataQuality::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "wrapfn_", make_descriptor(t_DataQuality::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "boxfn_", make_descriptor(boxObject));
              env->getClass(DataQuality::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "DEGRADED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::DEGRADED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "RAW", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::RAW)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "VALIDATED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::VALIDATED)));
            }

            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DataQuality::initializeClass, 1)))
                return NULL;
              return t_DataQuality::wrap_Object(DataQuality(((t_DataQuality *) arg)->object.this$));
            }
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DataQuality::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              DataQuality result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::valueOf(a0));
                return t_DataQuality::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_DataQuality_values(PyTypeObject *type)
            {
              JArray< DataQuality > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::values());
              return JArray<jobject>(result.this$).wrap(t_DataQuality::wrap_jobject);
            }
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data)
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
#include "org/orekit/propagation/numerical/cr3bp/CR3BPConstants.h"
#include "org/orekit/time/TimeScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPConstants::class$ = NULL;
          jmethodID *CR3BPConstants::mids$ = NULL;
          bool CR3BPConstants::live$ = false;

          jclass CR3BPConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPConstants");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEarthMoonBarycenterSemiMajorAxis_8be30d4a50bd5048] = env->getStaticMethodID(cls, "getEarthMoonBarycenterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getJupiterSemiMajorAxis_8be30d4a50bd5048] = env->getStaticMethodID(cls, "getJupiterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getMoonSemiMajorAxis_456d9a2f64d6b28d] = env->getStaticMethodID(cls, "getMoonSemiMajorAxis", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getEarthMoonBarycenterSemiMajorAxis_8be30d4a50bd5048], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getJupiterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getJupiterSemiMajorAxis_8be30d4a50bd5048], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getMoonSemiMajorAxis()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMoonSemiMajorAxis_456d9a2f64d6b28d]);
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
          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type);
          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data);
          static PyGetSetDef t_CR3BPConstants__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPConstants, moonSemiMajorAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPConstants__methods_[] = {
            DECLARE_METHOD(t_CR3BPConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getEarthMoonBarycenterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getJupiterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getMoonSemiMajorAxis, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPConstants)[] = {
            { Py_tp_methods, t_CR3BPConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CR3BPConstants__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPConstants, t_CR3BPConstants, CR3BPConstants);

          void t_CR3BPConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPConstants), &PY_TYPE_DEF(CR3BPConstants), module, "CR3BPConstants", 0);
          }

          void t_CR3BPConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "class_", make_descriptor(CR3BPConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "wrapfn_", make_descriptor(t_CR3BPConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPConstants::initializeClass, 1)))
              return NULL;
            return t_CR3BPConstants::wrap_Object(CR3BPConstants(((t_CR3BPConstants *) arg)->object.this$));
          }
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getEarthMoonBarycenterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getJupiterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getJupiterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedException::class$ = NULL;
      jmethodID *LocalizedException::mids$ = NULL;
      bool LocalizedException::live$ = false;

      jclass LocalizedException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMessage_bab3be9b232acc5a] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_e81d7907eea7e008] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_2e589a53386da289] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_bab3be9b232acc5a], a0.this$));
      }

      JArray< ::java::lang::Object > LocalizedException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_e81d7907eea7e008]));
      }

      ::org::hipparchus::exception::Localizable LocalizedException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_2e589a53386da289]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg);
      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self);
      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self);
      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data);
      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data);
      static PyGetSetDef t_LocalizedException__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedException, parts),
        DECLARE_GET_FIELD(t_LocalizedException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedException__methods_[] = {
        DECLARE_METHOD(t_LocalizedException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedException, getMessage, METH_O),
        DECLARE_METHOD(t_LocalizedException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedException)[] = {
        { Py_tp_methods, t_LocalizedException__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedException)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LocalizedException, t_LocalizedException, LocalizedException);

      void t_LocalizedException::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedException), &PY_TYPE_DEF(LocalizedException), module, "LocalizedException", 0);
      }

      void t_LocalizedException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "class_", make_descriptor(LocalizedException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "wrapfn_", make_descriptor(t_LocalizedException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalizedException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedException::initializeClass, 1)))
          return NULL;
        return t_LocalizedException::wrap_Object(LocalizedException(((t_LocalizedException *) arg)->object.this$));
      }
      static PyObject *t_LocalizedException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedException_getMessage(t_LocalizedException *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getMessage(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getMessage", arg);
        return NULL;
      }

      static PyObject *t_LocalizedException_getParts(t_LocalizedException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_getSpecifier(t_LocalizedException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_LocalizedException_get__parts(t_LocalizedException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_LocalizedException_get__specifier(t_LocalizedException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DatesSelector::class$ = NULL;
      jmethodID *DatesSelector::mids$ = NULL;
      bool DatesSelector::live$ = false;

      jclass DatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_selectDates_b7149ea6787a6f3c] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List DatesSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_b7149ea6787a6f3c], a0.this$, a1.this$));
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
      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args);

      static PyMethodDef t_DatesSelector__methods_[] = {
        DECLARE_METHOD(t_DatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DatesSelector)[] = {
        { Py_tp_methods, t_DatesSelector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DatesSelector, t_DatesSelector, DatesSelector);

      void t_DatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(DatesSelector), &PY_TYPE_DEF(DatesSelector), module, "DatesSelector", 0);
      }

      void t_DatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "class_", make_descriptor(DatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "wrapfn_", make_descriptor(t_DatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DatesSelector::initializeClass, 1)))
          return NULL;
        return t_DatesSelector::wrap_Object(DatesSelector(((t_DatesSelector *) arg)->object.this$));
      }
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateTroposphericDelayModifier::live$ = false;

          jclass BistaticRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateTroposphericDelayModifier::BistaticRangeRateTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          void BistaticRangeRateTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void BistaticRangeRateTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateTroposphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateTroposphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateTroposphericDelayModifier, t_BistaticRangeRateTroposphericDelayModifier, BistaticRangeRateTroposphericDelayModifier);

          void t_BistaticRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateTroposphericDelayModifier), module, "BistaticRangeRateTroposphericDelayModifier", 0);
          }

          void t_BistaticRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "class_", make_descriptor(BistaticRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateTroposphericDelayModifier::wrap_Object(BistaticRangeRateTroposphericDelayModifier(((t_BistaticRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateTroposphericDelayModifier_init_(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            BistaticRangeRateTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = BistaticRangeRateTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modify(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateTroposphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateTroposphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASOrbitalElements::class$ = NULL;
            jmethodID *SBASOrbitalElements::mids$ = NULL;
            bool SBASOrbitalElements::live$ = false;

            jclass SBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAGf0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_f2f64475e4580546] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_f2f64475e4580546] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble SBASOrbitalElements::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_456d9a2f64d6b28d]);
            }

            jint SBASOrbitalElements::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_f2f64475e4580546]);
            }

            jint SBASOrbitalElements::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_f2f64475e4580546]);
            }

            jdouble SBASOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_456d9a2f64d6b28d]);
            }

            jint SBASOrbitalElements::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_f2f64475e4580546]);
            }

            jdouble SBASOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_456d9a2f64d6b28d]);
            }

            jdouble SBASOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_456d9a2f64d6b28d]);
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
            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self);
            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data);
            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data);
            static PyGetSetDef t_SBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf0),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, aGf1),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, iODN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, pRN),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, time),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, toc),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, week),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, x),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, y),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, z),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_SBASOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_SBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getToc, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_SBASOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASOrbitalElements)[] = {
              { Py_tp_methods, t_SBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(SBASOrbitalElements, t_SBASOrbitalElements, SBASOrbitalElements);

            void t_SBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASOrbitalElements), &PY_TYPE_DEF(SBASOrbitalElements), module, "SBASOrbitalElements", 0);
            }

            void t_SBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "class_", make_descriptor(SBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "wrapfn_", make_descriptor(t_SBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_SBASOrbitalElements::wrap_Object(SBASOrbitalElements(((t_SBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_SBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SBASOrbitalElements_getAGf0(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getAGf1(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getIODN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getPRN(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getTime(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getToc(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getWeek(t_SBASOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASOrbitalElements_getX(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getXDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getY(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getYDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZ(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_getZDotDot(t_SBASOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf0(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__aGf1(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__iODN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__pRN(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__time(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__toc(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__week(t_SBASOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_SBASOrbitalElements_get__x(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__xDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__y(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__yDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__z(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_SBASOrbitalElements_get__zDotDot(t_SBASOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenTesseralLinear::class$ = NULL;
              jmethodID *HansenTesseralLinear::mids$ = NULL;
              bool HansenTesseralLinear::live$ = false;

              jclass HansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_863ad0cd78e98df4] = env->getMethodID(cls, "<init>", "(IIIII)V");
                  mids$[mid_computeInitValues_d0d6094fbd7015c5] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_31332242d1624d2c] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_31332242d1624d2c] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenTesseralLinear::HansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_863ad0cd78e98df4, a0, a1, a2, a3, a4)) {}

              void HansenTesseralLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_d0d6094fbd7015c5], a0, a1, a2);
              }

              jdouble HansenTesseralLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_31332242d1624d2c], a0, a1);
              }

              jdouble HansenTesseralLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_31332242d1624d2c], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args);

              static PyMethodDef t_HansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_HansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenTesseralLinear)[] = {
                { Py_tp_methods, t_HansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_HansenTesseralLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenTesseralLinear, t_HansenTesseralLinear, HansenTesseralLinear);

              void t_HansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenTesseralLinear), &PY_TYPE_DEF(HansenTesseralLinear), module, "HansenTesseralLinear", 0);
              }

              void t_HansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "class_", make_descriptor(HansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "wrapfn_", make_descriptor(t_HansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenTesseralLinear::wrap_Object(HansenTesseralLinear(((t_HansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                HansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = HansenTesseralLinear(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/hipparchus/util/MathArrays$Function.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Function::class$ = NULL;
      jmethodID *MathArrays$Function::mids$ = NULL;
      bool MathArrays$Function::live$ = false;

      jclass MathArrays$Function::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Function");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "evaluate", "([D)D");
          mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble MathArrays$Function::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
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
      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args);

      static PyMethodDef t_MathArrays$Function__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Function, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Function, evaluate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Function)[] = {
        { Py_tp_methods, t_MathArrays$Function__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Function)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays$Function, t_MathArrays$Function, MathArrays$Function);

      void t_MathArrays$Function::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Function), &PY_TYPE_DEF(MathArrays$Function), module, "MathArrays$Function", 0);
      }

      void t_MathArrays$Function::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "class_", make_descriptor(MathArrays$Function::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "wrapfn_", make_descriptor(t_MathArrays$Function::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Function), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays$Function_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Function::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Function::wrap_Object(MathArrays$Function(((t_MathArrays$Function *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Function_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Function::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Function_evaluate(t_MathArrays$Function *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
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
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStamped::class$ = NULL;
      jmethodID *FieldTimeStamped::mids$ = NULL;
      bool FieldTimeStamped::live$ = false;

      jclass FieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_durationFrom_ce20b37d13791971] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldTimeStamped;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldTimeStamped::durationFrom(const FieldTimeStamped & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_ce20b37d13791971], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStamped::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
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
      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args);
      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg);
      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self);
      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data);
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data);
      static PyGetSetDef t_FieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStamped, date),
        DECLARE_GET_FIELD(t_FieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStamped, durationFrom, METH_O),
        DECLARE_METHOD(t_FieldTimeStamped, getDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStamped)[] = {
        { Py_tp_methods, t_FieldTimeStamped__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStamped, t_FieldTimeStamped, FieldTimeStamped);
      PyObject *t_FieldTimeStamped::wrap_Object(const FieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStamped *self = (t_FieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStamped), &PY_TYPE_DEF(FieldTimeStamped), module, "FieldTimeStamped", 0);
      }

      void t_FieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "class_", make_descriptor(FieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "wrapfn_", make_descriptor(t_FieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStamped), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStamped::wrap_Object(FieldTimeStamped(((t_FieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStamped_of_(t_FieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStamped_durationFrom(t_FieldTimeStamped *self, PyObject *arg)
      {
        FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTimeStamped::initializeClass, &a0, &p0, t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.durationFrom(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStamped_getDate(t_FieldTimeStamped *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTimeStamped_get__parameters_(t_FieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStamped_get__date(t_FieldTimeStamped *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/ComplexEigenDecomposition.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ComplexEigenDecomposition::class$ = NULL;
      jmethodID *ComplexEigenDecomposition::mids$ = NULL;
      bool ComplexEigenDecomposition::live$ = false;
      jdouble ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON = (jdouble) 0;
      jdouble ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK = (jdouble) 0;

      jclass ComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_257185813e52aecb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_getD_cc77900a647586cf] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getDeterminant_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalues_a42e219c62839d3d] = env->getMethodID(cls, "getEigenvalues", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getEigenvector_61bcfe594fe45427] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getV_cc77900a647586cf] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getVT_cc77900a647586cf] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_hasComplexEigenvalues_e470b6d9e0d979db] = env->getMethodID(cls, "hasComplexEigenvalues", "()Z");
          mids$[mid_matricesToEigenArrays_7ae3461a92a43152] = env->getMethodID(cls, "matricesToEigenArrays", "()V");
          mids$[mid_checkDefinition_30aa151fd03f3096] = env->getMethodID(cls, "checkDefinition", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_findEigenValues_30aa151fd03f3096] = env->getMethodID(cls, "findEigenValues", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_findEigenVectors_3e03971cd3efa337] = env->getMethodID(cls, "findEigenVectors", "(Lorg/hipparchus/linear/FieldMatrix;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EIGENVECTORS_EQUALITY = env->getStaticDoubleField(cls, "DEFAULT_EIGENVECTORS_EQUALITY");
          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          DEFAULT_EPSILON_AV_VD_CHECK = env->getStaticDoubleField(cls, "DEFAULT_EPSILON_AV_VD_CHECK");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      ComplexEigenDecomposition::ComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_257185813e52aecb, a0.this$, a1, a2, a3)) {}

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getD() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getD_cc77900a647586cf]));
      }

      jdouble ComplexEigenDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_456d9a2f64d6b28d]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexEigenDecomposition::getEigenvalues() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_a42e219c62839d3d]));
      }

      ::org::hipparchus::linear::FieldVector ComplexEigenDecomposition::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_61bcfe594fe45427], a0));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getV() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getV_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix ComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_cc77900a647586cf]));
      }

      jboolean ComplexEigenDecomposition::hasComplexEigenvalues() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasComplexEigenvalues_e470b6d9e0d979db]);
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
      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg);
      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self);
      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data);
      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_ComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, d),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, determinant),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, eigenvalues),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, v),
        DECLARE_GET_FIELD(t_ComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_ComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getD, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getEigenvector, METH_O),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, getVT, METH_NOARGS),
        DECLARE_METHOD(t_ComplexEigenDecomposition, hasComplexEigenvalues, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_ComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_ComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_ComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexEigenDecomposition, t_ComplexEigenDecomposition, ComplexEigenDecomposition);

      void t_ComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexEigenDecomposition), &PY_TYPE_DEF(ComplexEigenDecomposition), module, "ComplexEigenDecomposition", 0);
      }

      void t_ComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "class_", make_descriptor(ComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "wrapfn_", make_descriptor(t_ComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(ComplexEigenDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EIGENVECTORS_EQUALITY", make_descriptor(ComplexEigenDecomposition::DEFAULT_EIGENVECTORS_EQUALITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexEigenDecomposition), "DEFAULT_EPSILON_AV_VD_CHECK", make_descriptor(ComplexEigenDecomposition::DEFAULT_EPSILON_AV_VD_CHECK));
      }

      static PyObject *t_ComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_ComplexEigenDecomposition::wrap_Object(ComplexEigenDecomposition(((t_ComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_ComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexEigenDecomposition_init_(t_ComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ComplexEigenDecomposition(a0, a1, a2, a3));
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

      static PyObject *t_ComplexEigenDecomposition_getD(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getDeterminant(t_ComplexEigenDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvalues(t_ComplexEigenDecomposition *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_getEigenvector(t_ComplexEigenDecomposition *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_ComplexEigenDecomposition_getV(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_getVT(t_ComplexEigenDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
      }

      static PyObject *t_ComplexEigenDecomposition_hasComplexEigenvalues(t_ComplexEigenDecomposition *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasComplexEigenvalues());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ComplexEigenDecomposition_get__d(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__determinant(t_ComplexEigenDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__eigenvalues(t_ComplexEigenDecomposition *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexEigenDecomposition_get__v(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_ComplexEigenDecomposition_get__vT(t_ComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Vertex::class$ = NULL;
          jmethodID *Vertex::mids$ = NULL;
          bool Vertex::live$ = false;

          jclass Vertex::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Vertex");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getIncoming_0a4123b034310514] = env->getMethodID(cls, "getIncoming", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");
              mids$[mid_getLocation_71b7da0eb14488b0] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getOutgoing_0a4123b034310514] = env->getMethodID(cls, "getOutgoing", "()Lorg/hipparchus/geometry/spherical/twod/Edge;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getIncoming() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getIncoming_0a4123b034310514]));
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Vertex::getLocation() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getLocation_71b7da0eb14488b0]));
          }

          ::org::hipparchus::geometry::spherical::twod::Edge Vertex::getOutgoing() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Edge(env->callObjectMethod(this$, mids$[mid_getOutgoing_0a4123b034310514]));
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
          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vertex_getIncoming(t_Vertex *self);
          static PyObject *t_Vertex_getLocation(t_Vertex *self);
          static PyObject *t_Vertex_getOutgoing(t_Vertex *self);
          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data);
          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data);
          static PyGetSetDef t_Vertex__fields_[] = {
            DECLARE_GET_FIELD(t_Vertex, incoming),
            DECLARE_GET_FIELD(t_Vertex, location),
            DECLARE_GET_FIELD(t_Vertex, outgoing),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vertex__methods_[] = {
            DECLARE_METHOD(t_Vertex, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vertex, getIncoming, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_Vertex, getOutgoing, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vertex)[] = {
            { Py_tp_methods, t_Vertex__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Vertex__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vertex)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vertex, t_Vertex, Vertex);

          void t_Vertex::install(PyObject *module)
          {
            installType(&PY_TYPE(Vertex), &PY_TYPE_DEF(Vertex), module, "Vertex", 0);
          }

          void t_Vertex::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "class_", make_descriptor(Vertex::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "wrapfn_", make_descriptor(t_Vertex::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vertex), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vertex_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vertex::initializeClass, 1)))
              return NULL;
            return t_Vertex::wrap_Object(Vertex(((t_Vertex *) arg)->object.this$));
          }
          static PyObject *t_Vertex_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vertex::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vertex_getIncoming(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_getLocation(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
          }

          static PyObject *t_Vertex_getOutgoing(t_Vertex *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge result((jobject) NULL);
            OBJ_CALL(result = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(result);
          }

          static PyObject *t_Vertex_get__incoming(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getIncoming());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__location(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(value);
          }

          static PyObject *t_Vertex_get__outgoing(t_Vertex *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Edge value((jobject) NULL);
            OBJ_CALL(value = self->object.getOutgoing());
            return ::org::hipparchus::geometry::spherical::twod::t_Edge::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmDataKey::class$ = NULL;
            jmethodID *TdmDataKey::mids$ = NULL;
            bool TdmDataKey::live$ = false;
            TdmDataKey *TdmDataKey::COMMENT = NULL;
            TdmDataKey *TdmDataKey::EPOCH = NULL;
            TdmDataKey *TdmDataKey::observation = NULL;

            jclass TdmDataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmDataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_83160b1d1e5a0a47] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_valueOf_aaebfb93568826c2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");
                mids$[mid_values_c3cdbe1d876dc9d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new TdmDataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                EPOCH = new TdmDataKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                observation = new TdmDataKey(env->getStaticObjectField(cls, "observation", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmDataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_83160b1d1e5a0a47], a0.this$, a1.this$, a2.this$);
            }

            TdmDataKey TdmDataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmDataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_aaebfb93568826c2], a0.this$));
            }

            JArray< TdmDataKey > TdmDataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmDataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c3cdbe1d876dc9d9]));
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
            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmDataKey_values(PyTypeObject *type);
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data);
            static PyGetSetDef t_TdmDataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmDataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmDataKey__methods_[] = {
              DECLARE_METHOD(t_TdmDataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmDataKey)[] = {
              { Py_tp_methods, t_TdmDataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmDataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmDataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmDataKey, t_TdmDataKey, TdmDataKey);
            PyObject *t_TdmDataKey::wrap_Object(const TdmDataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmDataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmDataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmDataKey), &PY_TYPE_DEF(TdmDataKey), module, "TdmDataKey", 0);
            }

            void t_TdmDataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "class_", make_descriptor(TdmDataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "wrapfn_", make_descriptor(t_TdmDataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmDataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "COMMENT", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "EPOCH", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "observation", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::observation)));
            }

            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmDataKey::initializeClass, 1)))
                return NULL;
              return t_TdmDataKey::wrap_Object(TdmDataKey(((t_TdmDataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmDataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmDataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::valueOf(a0));
                return t_TdmDataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmDataKey_values(PyTypeObject *type)
            {
              JArray< TdmDataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmDataKey::wrap_jobject);
            }
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *DutyCycleType::class$ = NULL;
          jmethodID *DutyCycleType::mids$ = NULL;
          bool DutyCycleType::live$ = false;
          DutyCycleType *DutyCycleType::CONTINUOUS = NULL;
          DutyCycleType *DutyCycleType::TIME = NULL;
          DutyCycleType *DutyCycleType::TIME_AND_ANGLE = NULL;

          jclass DutyCycleType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/DutyCycleType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_fe6e46dcc52821bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
              mids$[mid_values_09b0e278b3413024] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/DutyCycleType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONTINUOUS = new DutyCycleType(env->getStaticObjectField(cls, "CONTINUOUS", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME = new DutyCycleType(env->getStaticObjectField(cls, "TIME", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              TIME_AND_ANGLE = new DutyCycleType(env->getStaticObjectField(cls, "TIME_AND_ANGLE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DutyCycleType DutyCycleType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DutyCycleType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fe6e46dcc52821bc], a0.this$));
          }

          JArray< DutyCycleType > DutyCycleType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DutyCycleType >(env->callStaticObjectMethod(cls, mids$[mid_values_09b0e278b3413024]));
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
        namespace definitions {
          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args);
          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DutyCycleType_values(PyTypeObject *type);
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data);
          static PyGetSetDef t_DutyCycleType__fields_[] = {
            DECLARE_GET_FIELD(t_DutyCycleType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DutyCycleType__methods_[] = {
            DECLARE_METHOD(t_DutyCycleType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DutyCycleType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DutyCycleType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DutyCycleType)[] = {
            { Py_tp_methods, t_DutyCycleType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DutyCycleType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DutyCycleType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DutyCycleType, t_DutyCycleType, DutyCycleType);
          PyObject *t_DutyCycleType::wrap_Object(const DutyCycleType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DutyCycleType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DutyCycleType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DutyCycleType *self = (t_DutyCycleType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DutyCycleType::install(PyObject *module)
          {
            installType(&PY_TYPE(DutyCycleType), &PY_TYPE_DEF(DutyCycleType), module, "DutyCycleType", 0);
          }

          void t_DutyCycleType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "class_", make_descriptor(DutyCycleType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "wrapfn_", make_descriptor(t_DutyCycleType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DutyCycleType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "CONTINUOUS", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::CONTINUOUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DutyCycleType), "TIME_AND_ANGLE", make_descriptor(t_DutyCycleType::wrap_Object(*DutyCycleType::TIME_AND_ANGLE)));
          }

          static PyObject *t_DutyCycleType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DutyCycleType::initializeClass, 1)))
              return NULL;
            return t_DutyCycleType::wrap_Object(DutyCycleType(((t_DutyCycleType *) arg)->object.this$));
          }
          static PyObject *t_DutyCycleType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DutyCycleType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DutyCycleType_of_(t_DutyCycleType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DutyCycleType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DutyCycleType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::valueOf(a0));
              return t_DutyCycleType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DutyCycleType_values(PyTypeObject *type)
          {
            JArray< DutyCycleType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::DutyCycleType::values());
            return JArray<jobject>(result.this$).wrap(t_DutyCycleType::wrap_jobject);
          }
          static PyObject *t_DutyCycleType_get__parameters_(t_DutyCycleType *self, void *data)
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
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorChangingVisitor::class$ = NULL;
      jmethodID *RealVectorChangingVisitor::mids$ = NULL;
      bool RealVectorChangingVisitor::live$ = false;

      jclass RealVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_456d9a2f64d6b28d] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_c80ec2f7d8b5fe87] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_31332242d1624d2c] = env->getMethodID(cls, "visit", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_456d9a2f64d6b28d]);
      }

      void RealVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_c80ec2f7d8b5fe87], a0, a1, a2);
      }

      jdouble RealVectorChangingVisitor::visit(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_31332242d1624d2c], a0, a1);
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
      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self);
      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorChangingVisitor)[] = {
        { Py_tp_methods, t_RealVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorChangingVisitor, t_RealVectorChangingVisitor, RealVectorChangingVisitor);

      void t_RealVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorChangingVisitor), &PY_TYPE_DEF(RealVectorChangingVisitor), module, "RealVectorChangingVisitor", 0);
      }

      void t_RealVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "class_", make_descriptor(RealVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "wrapfn_", make_descriptor(t_RealVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorChangingVisitor::wrap_Object(RealVectorChangingVisitor(((t_RealVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args)
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

      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmSatelliteEphemeris.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmData.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistory.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ocm::class$ = NULL;
              jmethodID *Ocm::mids$ = NULL;
              bool Ocm::live$ = false;
              ::java::lang::String *Ocm::COV_LINE = NULL;
              ::java::lang::String *Ocm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Ocm::MAN_LINE = NULL;
              ::java::lang::String *Ocm::ROOT = NULL;
              ::java::lang::String *Ocm::TRAJ_LINE = NULL;
              ::java::lang::String *Ocm::UNKNOWN_OBJECT = NULL;

              jclass Ocm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ocm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c312acee610c8d08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_getData_aee447d86b4306bb] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmData;");
                  mids$[mid_getMetadata_a76147a70c173790] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;");
                  mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "COV_LINE", "Ljava/lang/String;"));
                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  MAN_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "MAN_LINE", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  TRAJ_LINE = new ::java::lang::String(env->getStaticObjectField(cls, "TRAJ_LINE", "Ljava/lang/String;"));
                  UNKNOWN_OBJECT = new ::java::lang::String(env->getStaticObjectField(cls, "UNKNOWN_OBJECT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ocm::Ocm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_c312acee610c8d08, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData Ocm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData(env->callObjectMethod(this$, mids$[mid_getData_aee447d86b4306bb]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata Ocm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_a76147a70c173790]));
              }

              ::java::util::Map Ocm::getSatellites() const
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
          namespace odm {
            namespace ocm {
              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args);
              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Ocm_getData(t_Ocm *self);
              static PyObject *t_Ocm_getMetadata(t_Ocm *self);
              static PyObject *t_Ocm_getSatellites(t_Ocm *self);
              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data);
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data);
              static PyGetSetDef t_Ocm__fields_[] = {
                DECLARE_GET_FIELD(t_Ocm, data),
                DECLARE_GET_FIELD(t_Ocm, metadata),
                DECLARE_GET_FIELD(t_Ocm, satellites),
                DECLARE_GET_FIELD(t_Ocm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ocm__methods_[] = {
                DECLARE_METHOD(t_Ocm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ocm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ocm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_Ocm, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ocm)[] = {
                { Py_tp_methods, t_Ocm__methods_ },
                { Py_tp_init, (void *) t_Ocm_init_ },
                { Py_tp_getset, t_Ocm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ocm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Ocm, t_Ocm, Ocm);
              PyObject *t_Ocm::wrap_Object(const Ocm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Ocm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Ocm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ocm *self = (t_Ocm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Ocm::install(PyObject *module)
              {
                installType(&PY_TYPE(Ocm), &PY_TYPE_DEF(Ocm), module, "Ocm", 0);
              }

              void t_Ocm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "class_", make_descriptor(Ocm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "wrapfn_", make_descriptor(t_Ocm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ocm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "COV_LINE", make_descriptor(j2p(*Ocm::COV_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Ocm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "MAN_LINE", make_descriptor(j2p(*Ocm::MAN_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "ROOT", make_descriptor(j2p(*Ocm::ROOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "TRAJ_LINE", make_descriptor(j2p(*Ocm::TRAJ_LINE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ocm), "UNKNOWN_OBJECT", make_descriptor(j2p(*Ocm::UNKNOWN_OBJECT)));
              }

              static PyObject *t_Ocm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ocm::initializeClass, 1)))
                  return NULL;
                return t_Ocm::wrap_Object(Ocm(((t_Ocm *) arg)->object.this$));
              }
              static PyObject *t_Ocm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ocm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ocm_of_(t_Ocm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Ocm_init_(t_Ocm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Ocm object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Ocm(a0, a1, a2, a3, a4));
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

              static PyObject *t_Ocm_getData(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(result);
              }

              static PyObject *t_Ocm_getMetadata(t_Ocm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(result);
              }

              static PyObject *t_Ocm_getSatellites(t_Ocm *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OcmSatelliteEphemeris));
              }
              static PyObject *t_Ocm_get__parameters_(t_Ocm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Ocm_get__data(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmData::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__metadata(t_Ocm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmMetadata::wrap_Object(value);
              }

              static PyObject *t_Ocm_get__satellites(t_Ocm *self, void *data)
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
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/lang/String.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftState::class$ = NULL;
      jmethodID *FieldSpacecraftState::mids$ = NULL;
      bool FieldSpacecraftState::live$ = false;

      jclass FieldSpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_207b94fac60a45a2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_a95776d1a327f352] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_340b44ce3adcd347] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_b580df984d5f7410] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_db9faae4419851ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_4a70c10463d10a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_adb1719b0dda6ffc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_0ff01d32a7a845d7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_init$_3675c39f0608ea8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_5ba0288050718eff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_73725e657fc73da1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_4084a3223f2fadcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_de4e72437e35c7c1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b021bd77c3e69cd3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_c0b61e00e60f33ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_15521286cb6a5a8f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_0e01f87f8415d2b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_110be372c3208494] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_addAdditionalState_446c7fca4b71946c] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_446c7fca4b71946c] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_52154b94d63e10ed] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAbsPVA_e4b6a56989293962] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_7ff62b68d24a340b] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStateDerivative_7ff62b68d24a340b] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStatesDerivatives_a517063e6ce1cd85] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_a517063e6ce1cd85] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAttitude_f68321fa097ad8b5] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getDate_09b0a926600dfc14] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_e6d4d3215c30992a] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_e6d4d3215c30992a] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_e6d4d3215c30992a] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMass_e6d4d3215c30992a] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_e6d4d3215c30992a] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOrbit_2f26cad5f478f007] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_getPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_485af6605091d545] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_5791f80683b5227e] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_863ec0d27d7d92bb] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hasAdditionalState_6b161f495ea569b8] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_6b161f495ea569b8] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_e470b6d9e0d979db] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_474d49dada1799a5] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_shiftedBy_5f6943b547152f7d] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_toSpacecraftState_dd3e4a8d51055f1f] = env->getMethodID(cls, "toSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_dd9256b23dabf6f6] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_b8bdad2f73e0bf7c] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_207b94fac60a45a2, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a95776d1a327f352, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_340b44ce3adcd347, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b580df984d5f7410, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db9faae4419851ef, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a70c10463d10a80, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_adb1719b0dda6ffc, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::SpacecraftState & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ff01d32a7a845d7, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3675c39f0608ea8e, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ba0288050718eff, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_73725e657fc73da1, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4084a3223f2fadcf, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de4e72437e35c7c1, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b021bd77c3e69cd3, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0b61e00e60f33ed, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15521286cb6a5a8f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e01f87f8415d2b6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_110be372c3208494, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState FieldSpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_446c7fca4b71946c], a0.this$, a1.this$));
      }

      FieldSpacecraftState FieldSpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_446c7fca4b71946c], a0.this$, a1.this$));
      }

      void FieldSpacecraftState::ensureCompatibleAdditionalStates(const FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_52154b94d63e10ed], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::orekit::utils::FieldAbsolutePVCoordinates FieldSpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_e4b6a56989293962]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_7ff62b68d24a340b], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_7ff62b68d24a340b], a0.this$));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_a517063e6ce1cd85]));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_a517063e6ce1cd85]));
      }

      ::org::orekit::attitudes::FieldAttitude FieldSpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_f68321fa097ad8b5]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldSpacecraftState::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_09b0a926600dfc14]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_e6d4d3215c30992a]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMass() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMass_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::FieldOrbit FieldSpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_2f26cad5f478f007]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_26447a781aafdb9e]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_485af6605091d545], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_863ec0d27d7d92bb], a0.this$));
      }

      jboolean FieldSpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_6b161f495ea569b8], a0.this$);
      }

      jboolean FieldSpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_6b161f495ea569b8], a0.this$);
      }

      jboolean FieldSpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_e470b6d9e0d979db]);
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(jdouble a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_474d49dada1799a5], a0));
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_5f6943b547152f7d], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState FieldSpacecraftState::toSpacecraftState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_toSpacecraftState_dd3e4a8d51055f1f]));
      }

      ::org::orekit::frames::FieldStaticTransform FieldSpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_dd9256b23dabf6f6]));
      }

      ::java::lang::String FieldSpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::orekit::frames::FieldTransform FieldSpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_toTransform_b8bdad2f73e0bf7c]));
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
      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args);
      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data);
      static PyGetSetDef t_FieldSpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftState, a),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, attitude),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, date),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, e),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, frame),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, i),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lE),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lM),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lv),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mass),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mu),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbit),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, position),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftState__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toSpacecraftState, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftState)[] = {
        { Py_tp_methods, t_FieldSpacecraftState__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftState_init_ },
        { Py_tp_getset, t_FieldSpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftState, t_FieldSpacecraftState, FieldSpacecraftState);
      PyObject *t_FieldSpacecraftState::wrap_Object(const FieldSpacecraftState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftState), &PY_TYPE_DEF(FieldSpacecraftState), module, "FieldSpacecraftState", 0);
      }

      void t_FieldSpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "class_", make_descriptor(FieldSpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "wrapfn_", make_descriptor(t_FieldSpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftState::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftState::wrap_Object(FieldSpacecraftState(((t_FieldSpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg)
      {
        FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldSpacecraftState::initializeClass, &a0, &p0, t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self)
      {
        ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMass());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self)
      {
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.toSpacecraftState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMass());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *RealMatrixPreservingVisitor::mids$ = NULL;
      bool RealMatrixPreservingVisitor::live$ = false;

      jclass RealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_456d9a2f64d6b28d] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_78e41e7b5124a628] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_456d9a2f64d6b28d]);
      }

      void RealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      void RealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_78e41e7b5124a628], a0, a1, a2);
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
      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self);
      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixPreservingVisitor, t_RealMatrixPreservingVisitor, RealMatrixPreservingVisitor);

      void t_RealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixPreservingVisitor), &PY_TYPE_DEF(RealMatrixPreservingVisitor), module, "RealMatrixPreservingVisitor", 0);
      }

      void t_RealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "class_", make_descriptor(RealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_RealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixPreservingVisitor::wrap_Object(RealMatrixPreservingVisitor(((t_RealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BDTScale::class$ = NULL;
      jmethodID *BDTScale::mids$ = NULL;
      bool BDTScale::live$ = false;

      jclass BDTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BDTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String BDTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble BDTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement BDTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble BDTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String BDTScale::toString() const
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
  namespace orekit {
    namespace time {
      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_getName(t_BDTScale *self);
      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data);
      static PyGetSetDef t_BDTScale__fields_[] = {
        DECLARE_GET_FIELD(t_BDTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BDTScale__methods_[] = {
        DECLARE_METHOD(t_BDTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_BDTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BDTScale)[] = {
        { Py_tp_methods, t_BDTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BDTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BDTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BDTScale, t_BDTScale, BDTScale);

      void t_BDTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(BDTScale), &PY_TYPE_DEF(BDTScale), module, "BDTScale", 0);
      }

      void t_BDTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "class_", make_descriptor(BDTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "wrapfn_", make_descriptor(t_BDTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BDTScale::initializeClass, 1)))
          return NULL;
        return t_BDTScale::wrap_Object(BDTScale(((t_BDTScale *) arg)->object.this$));
      }
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BDTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BDTScale_getName(t_BDTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args)
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

      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BDTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/PolynomialsUtils.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialsUtils::class$ = NULL;
        jmethodID *PolynomialsUtils::mids$ = NULL;
        bool PolynomialsUtils::live$ = false;

        jclass PolynomialsUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialsUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createChebyshevPolynomial_033dab9bdad55f91] = env->getStaticMethodID(cls, "createChebyshevPolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createHermitePolynomial_033dab9bdad55f91] = env->getStaticMethodID(cls, "createHermitePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createJacobiPolynomial_20e6b0b545894323] = env->getStaticMethodID(cls, "createJacobiPolynomial", "(III)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLaguerrePolynomial_033dab9bdad55f91] = env->getStaticMethodID(cls, "createLaguerrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_createLegendrePolynomial_033dab9bdad55f91] = env->getStaticMethodID(cls, "createLegendrePolynomial", "(I)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
            mids$[mid_shift_1657efb2f051723b] = env->getStaticMethodID(cls, "shift", "([DD)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createChebyshevPolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createChebyshevPolynomial_033dab9bdad55f91], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createHermitePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createHermitePolynomial_033dab9bdad55f91], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createJacobiPolynomial(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createJacobiPolynomial_20e6b0b545894323], a0, a1, a2));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLaguerrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLaguerrePolynomial_033dab9bdad55f91], a0));
        }

        ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialsUtils::createLegendrePolynomial(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callStaticObjectMethod(cls, mids$[mid_createLegendrePolynomial_033dab9bdad55f91], a0));
        }

        JArray< jdouble > PolynomialsUtils::shift(const JArray< jdouble > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_shift_1657efb2f051723b], a0.this$, a1));
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
        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args);
        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_PolynomialsUtils__methods_[] = {
          DECLARE_METHOD(t_PolynomialsUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createChebyshevPolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createHermitePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createJacobiPolynomial, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLaguerrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, createLegendrePolynomial, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialsUtils, shift, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialsUtils)[] = {
          { Py_tp_methods, t_PolynomialsUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialsUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialsUtils, t_PolynomialsUtils, PolynomialsUtils);

        void t_PolynomialsUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialsUtils), &PY_TYPE_DEF(PolynomialsUtils), module, "PolynomialsUtils", 0);
        }

        void t_PolynomialsUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "class_", make_descriptor(PolynomialsUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "wrapfn_", make_descriptor(t_PolynomialsUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialsUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialsUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialsUtils::initializeClass, 1)))
            return NULL;
          return t_PolynomialsUtils::wrap_Object(PolynomialsUtils(((t_PolynomialsUtils *) arg)->object.this$));
        }
        static PyObject *t_PolynomialsUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialsUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PolynomialsUtils_createChebyshevPolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createChebyshevPolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createChebyshevPolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createHermitePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createHermitePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createHermitePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createJacobiPolynomial(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createJacobiPolynomial(a0, a1, a2));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createJacobiPolynomial", args);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLaguerrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLaguerrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLaguerrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_createLegendrePolynomial(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::createLegendrePolynomial(a0));
            return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "createLegendrePolynomial", arg);
          return NULL;
        }

        static PyObject *t_PolynomialsUtils_shift(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::polynomials::PolynomialsUtils::shift(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError(type, "shift", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *PhaseCenterVariationFunction::class$ = NULL;
        jmethodID *PhaseCenterVariationFunction::mids$ = NULL;
        bool PhaseCenterVariationFunction::live$ = false;

        jclass PhaseCenterVariationFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/PhaseCenterVariationFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble PhaseCenterVariationFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
      namespace antenna {
        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args);

        static PyMethodDef t_PhaseCenterVariationFunction__methods_[] = {
          DECLARE_METHOD(t_PhaseCenterVariationFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PhaseCenterVariationFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PhaseCenterVariationFunction)[] = {
          { Py_tp_methods, t_PhaseCenterVariationFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PhaseCenterVariationFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PhaseCenterVariationFunction, t_PhaseCenterVariationFunction, PhaseCenterVariationFunction);

        void t_PhaseCenterVariationFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(PhaseCenterVariationFunction), &PY_TYPE_DEF(PhaseCenterVariationFunction), module, "PhaseCenterVariationFunction", 0);
        }

        void t_PhaseCenterVariationFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "class_", make_descriptor(PhaseCenterVariationFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "wrapfn_", make_descriptor(t_PhaseCenterVariationFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCenterVariationFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PhaseCenterVariationFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PhaseCenterVariationFunction::initializeClass, 1)))
            return NULL;
          return t_PhaseCenterVariationFunction::wrap_Object(PhaseCenterVariationFunction(((t_PhaseCenterVariationFunction *) arg)->object.this$));
        }
        static PyObject *t_PhaseCenterVariationFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PhaseCenterVariationFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PhaseCenterVariationFunction_value(t_PhaseCenterVariationFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
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
#include "org/orekit/frames/encounter/PythonEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonEncounterLOF::class$ = NULL;
        jmethodID *PythonEncounterLOF::mids$ = NULL;
        bool PythonEncounterLOF::live$ = false;

        jclass PythonEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_b10aa29cc18662da] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOther_6761e3f334368d44] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_891f682396b75876] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0483676d141ad17c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEncounterLOF::PythonEncounterLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEncounterLOF::pythonExtension(jlong a0) const
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self);
        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEncounterLOF)[] = {
          { Py_tp_methods, t_PythonEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonEncounterLOF_init_ },
          { Py_tp_getset, t_PythonEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEncounterLOF, t_PythonEncounterLOF, PythonEncounterLOF);

        void t_PythonEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEncounterLOF), &PY_TYPE_DEF(PythonEncounterLOF), module, "PythonEncounterLOF", 1);
        }

        void t_PythonEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "class_", make_descriptor(PythonEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "wrapfn_", make_descriptor(t_PythonEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;", (void *) t_PythonEncounterLOF_getFieldOther2 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonEncounterLOF_getName3 },
            { "getOther", "()Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonEncounterLOF_getOther4 },
            { "pythonDecRef", "()V", (void *) t_PythonEncounterLOF_pythonDecRef5 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonEncounterLOF_rotationFromInertial6 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonEncounterLOF_rotationFromInertial7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonEncounterLOF::wrap_Object(PythonEncounterLOF(((t_PythonEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          PythonEncounterLOF object((jobject) NULL);

          INT_CALL(object = PythonEncounterLOF());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldOther", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &value))
          {
            throwTypeError("getFieldOther", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOther", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
          {
            throwTypeError("getOther", result);
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

        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data)
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
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataSource$Opener.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource::class$ = NULL;
      jmethodID *DataSource::mids$ = NULL;
      bool DataSource::live$ = false;

      jclass DataSource::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_cfb3207ce8134cbf] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$ReaderOpener;)V");
          mids$[mid_init$_9c63952c0f057cf8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataSource$StreamOpener;)V");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getOpener_630150fd7eebc270] = env->getMethodID(cls, "getOpener", "()Lorg/orekit/data/DataSource$Opener;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataSource::DataSource(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$ReaderOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cfb3207ce8134cbf, a0.this$, a1.this$)) {}

      DataSource::DataSource(const ::java::lang::String & a0, const ::org::orekit::data::DataSource$StreamOpener & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c63952c0f057cf8, a0.this$, a1.this$)) {}

      ::java::lang::String DataSource::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::org::orekit::data::DataSource$Opener DataSource::getOpener() const
      {
        return ::org::orekit::data::DataSource$Opener(env->callObjectMethod(this$, mids$[mid_getOpener_630150fd7eebc270]));
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
      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataSource_getName(t_DataSource *self);
      static PyObject *t_DataSource_getOpener(t_DataSource *self);
      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data);
      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data);
      static PyGetSetDef t_DataSource__fields_[] = {
        DECLARE_GET_FIELD(t_DataSource, name),
        DECLARE_GET_FIELD(t_DataSource, opener),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataSource__methods_[] = {
        DECLARE_METHOD(t_DataSource, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource, getName, METH_NOARGS),
        DECLARE_METHOD(t_DataSource, getOpener, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource)[] = {
        { Py_tp_methods, t_DataSource__methods_ },
        { Py_tp_init, (void *) t_DataSource_init_ },
        { Py_tp_getset, t_DataSource__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource, t_DataSource, DataSource);

      void t_DataSource::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource), &PY_TYPE_DEF(DataSource), module, "DataSource", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "Opener", make_descriptor(&PY_TYPE_DEF(DataSource$Opener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "ReaderOpener", make_descriptor(&PY_TYPE_DEF(DataSource$ReaderOpener)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "StreamOpener", make_descriptor(&PY_TYPE_DEF(DataSource$StreamOpener)));
      }

      void t_DataSource::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "class_", make_descriptor(DataSource::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "wrapfn_", make_descriptor(t_DataSource::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource::initializeClass, 1)))
          return NULL;
        return t_DataSource::wrap_Object(DataSource(((t_DataSource *) arg)->object.this$));
      }
      static PyObject *t_DataSource_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataSource_init_(t_DataSource *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataSource(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$ReaderOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$ReaderOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataSource$StreamOpener a1((jobject) NULL);
            DataSource object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataSource$StreamOpener::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DataSource(a0, a1));
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

      static PyObject *t_DataSource_getName(t_DataSource *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_DataSource_getOpener(t_DataSource *self)
      {
        ::org::orekit::data::DataSource$Opener result((jobject) NULL);
        OBJ_CALL(result = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(result);
      }

      static PyObject *t_DataSource_get__name(t_DataSource *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_DataSource_get__opener(t_DataSource *self, void *data)
      {
        ::org::orekit::data::DataSource$Opener value((jobject) NULL);
        OBJ_CALL(value = self->object.getOpener());
        return ::org::orekit::data::t_DataSource$Opener::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *GaussianCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *GaussianCurveFitter$ParameterGuesser::mids$ = NULL;
      bool GaussianCurveFitter$ParameterGuesser::live$ = false;

      jclass GaussianCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/GaussianCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_7cdc325af0834901] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianCurveFitter$ParameterGuesser::GaussianCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

      JArray< jdouble > GaussianCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_7cdc325af0834901]));
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
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_GaussianCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_GaussianCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_GaussianCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianCurveFitter$ParameterGuesser, t_GaussianCurveFitter$ParameterGuesser, GaussianCurveFitter$ParameterGuesser);

      void t_GaussianCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianCurveFitter$ParameterGuesser), &PY_TYPE_DEF(GaussianCurveFitter$ParameterGuesser), module, "GaussianCurveFitter$ParameterGuesser", 0);
      }

      void t_GaussianCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "class_", make_descriptor(GaussianCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_GaussianCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_GaussianCurveFitter$ParameterGuesser::wrap_Object(GaussianCurveFitter$ParameterGuesser(((t_GaussianCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_GaussianCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianCurveFitter$ParameterGuesser_init_(t_GaussianCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        GaussianCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = GaussianCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianCurveFitter$ParameterGuesser_guess(t_GaussianCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *Rugged::class$ = NULL;
        jmethodID *Rugged::mids$ = NULL;
        bool Rugged::live$ = false;

        jclass Rugged::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/Rugged");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dateLocation_2c41494519aab02c] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_dateLocation_9d3e14a06d0b2344] = env->getMethodID(cls, "dateLocation", "(Ljava/lang/String;DDII)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_directLocation_6b3e9bc65f70f68b] = env->getMethodID(cls, "directLocation", "(Ljava/lang/String;D)[Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_directLocation_70b9e0efe6611035] = env->getMethodID(cls, "directLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_distanceBetweenLOS_b88fa7195e9e7517] = env->getMethodID(cls, "distanceBetweenLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;D)[D");
            mids$[mid_distanceBetweenLOSderivatives_982b0f0601e6abd4] = env->getMethodID(cls, "distanceBetweenLOSderivatives", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/SpacecraftToObservedBody;Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getAlgorithm_0d3941fface9e0dd] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/intersection/IntersectionAlgorithm;");
            mids$[mid_getAlgorithmId_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getBodyToInertial_d55545a64ea4a9a7] = env->getMethodID(cls, "getBodyToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getEllipsoid_98afe253151ec70a] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialToBody_d55545a64ea4a9a7] = env->getMethodID(cls, "getInertialToBody", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_getLineSensor_09ab37db90b051e6] = env->getMethodID(cls, "getLineSensor", "(Ljava/lang/String;)Lorg/orekit/rugged/linesensor/LineSensor;");
            mids$[mid_getLineSensors_cfcfd130f9013e3e] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/Collection;");
            mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getRefractionCorrection_c5c91b8d86c254a9] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getScToBody_38f80fac5aafac2a] = env->getMethodID(cls, "getScToBody", "()Lorg/orekit/rugged/utils/SpacecraftToObservedBody;");
            mids$[mid_getScToInertial_d55545a64ea4a9a7] = env->getMethodID(cls, "getScToInertial", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
            mids$[mid_inverseLocation_f77004ec6f045f2e] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;II)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocation_3b69cb1d1085b47e] = env->getMethodID(cls, "inverseLocation", "(Ljava/lang/String;DDII)Lorg/orekit/rugged/linesensor/SensorPixel;");
            mids$[mid_inverseLocationDerivatives_9169f46e89806c98] = env->getMethodID(cls, "inverseLocationDerivatives", "(Ljava/lang/String;Lorg/orekit/bodies/GeodeticPoint;IILorg/orekit/rugged/utils/DerivativeGenerator;)[Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_isAberrationOfLightCorrected_e470b6d9e0d979db] = env->getMethodID(cls, "isAberrationOfLightCorrected", "()Z");
            mids$[mid_isInRange_ee2067c5768b6768] = env->getMethodID(cls, "isInRange", "(Lorg/orekit/time/AbsoluteDate;)Z");
            mids$[mid_isLightTimeCorrected_e470b6d9e0d979db] = env->getMethodID(cls, "isLightTimeCorrected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_2c41494519aab02c], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::time::AbsoluteDate Rugged::dateLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateLocation_9d3e14a06d0b2344], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::orekit::bodies::GeodeticPoint > Rugged::directLocation(const ::java::lang::String & a0, jdouble a1) const
        {
          return JArray< ::org::orekit::bodies::GeodeticPoint >(env->callObjectMethod(this$, mids$[mid_directLocation_6b3e9bc65f70f68b], a0.this$, a1));
        }

        ::org::orekit::bodies::GeodeticPoint Rugged::directLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_directLocation_70b9e0efe6611035], a0.this$, a1.this$, a2.this$));
        }

        JArray< jdouble > Rugged::distanceBetweenLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOS_b88fa7195e9e7517], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::distanceBetweenLOSderivatives(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a3, const ::org::orekit::rugged::linesensor::LineSensor & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6, const ::org::orekit::rugged::utils::DerivativeGenerator & a7) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_distanceBetweenLOSderivatives_982b0f0601e6abd4], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6, a7.this$));
        }

        ::org::orekit::rugged::intersection::IntersectionAlgorithm Rugged::getAlgorithm() const
        {
          return ::org::orekit::rugged::intersection::IntersectionAlgorithm(env->callObjectMethod(this$, mids$[mid_getAlgorithm_0d3941fface9e0dd]));
        }

        ::org::orekit::rugged::api::AlgorithmId Rugged::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_41b1271dfac9173f]));
        }

        ::org::orekit::frames::Transform Rugged::getBodyToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getBodyToInertial_d55545a64ea4a9a7], a0.this$));
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid Rugged::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_98afe253151ec70a]));
        }

        ::org::orekit::frames::Transform Rugged::getInertialToBody(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getInertialToBody_d55545a64ea4a9a7], a0.this$));
        }

        ::org::orekit::rugged::linesensor::LineSensor Rugged::getLineSensor(const ::java::lang::String & a0) const
        {
          return ::org::orekit::rugged::linesensor::LineSensor(env->callObjectMethod(this$, mids$[mid_getLineSensor_09ab37db90b051e6], a0.this$));
        }

        ::java::util::Collection Rugged::getLineSensors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getLineSensors_cfcfd130f9013e3e]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate Rugged::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
        }

        ::java::lang::String Rugged::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction Rugged::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_c5c91b8d86c254a9]));
        }

        ::org::orekit::rugged::utils::SpacecraftToObservedBody Rugged::getScToBody() const
        {
          return ::org::orekit::rugged::utils::SpacecraftToObservedBody(env->callObjectMethod(this$, mids$[mid_getScToBody_38f80fac5aafac2a]));
        }

        ::org::orekit::frames::Transform Rugged::getScToInertial(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getScToInertial_d55545a64ea4a9a7], a0.this$));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_f77004ec6f045f2e], a0.this$, a1.this$, a2, a3));
        }

        ::org::orekit::rugged::linesensor::SensorPixel Rugged::inverseLocation(const ::java::lang::String & a0, jdouble a1, jdouble a2, jint a3, jint a4) const
        {
          return ::org::orekit::rugged::linesensor::SensorPixel(env->callObjectMethod(this$, mids$[mid_inverseLocation_3b69cb1d1085b47e], a0.this$, a1, a2, a3, a4));
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > Rugged::inverseLocationDerivatives(const ::java::lang::String & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jint a2, jint a3, const ::org::orekit::rugged::utils::DerivativeGenerator & a4) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_inverseLocationDerivatives_9169f46e89806c98], a0.this$, a1.this$, a2, a3, a4.this$));
        }

        jboolean Rugged::isAberrationOfLightCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAberrationOfLightCorrected_e470b6d9e0d979db]);
        }

        jboolean Rugged::isInRange(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isInRange_ee2067c5768b6768], a0.this$);
        }

        jboolean Rugged::isLightTimeCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLightTimeCorrected_e470b6d9e0d979db]);
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
        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self);
        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self);
        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self);
        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_getLineSensors(t_Rugged *self);
        static PyObject *t_Rugged_getMaxDate(t_Rugged *self);
        static PyObject *t_Rugged_getMinDate(t_Rugged *self);
        static PyObject *t_Rugged_getName(t_Rugged *self);
        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self);
        static PyObject *t_Rugged_getScToBody(t_Rugged *self);
        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args);
        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self);
        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg);
        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self);
        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data);
        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data);
        static PyGetSetDef t_Rugged__fields_[] = {
          DECLARE_GET_FIELD(t_Rugged, aberrationOfLightCorrected),
          DECLARE_GET_FIELD(t_Rugged, algorithm),
          DECLARE_GET_FIELD(t_Rugged, algorithmId),
          DECLARE_GET_FIELD(t_Rugged, ellipsoid),
          DECLARE_GET_FIELD(t_Rugged, lightTimeCorrected),
          DECLARE_GET_FIELD(t_Rugged, lineSensors),
          DECLARE_GET_FIELD(t_Rugged, maxDate),
          DECLARE_GET_FIELD(t_Rugged, minDate),
          DECLARE_GET_FIELD(t_Rugged, name),
          DECLARE_GET_FIELD(t_Rugged, refractionCorrection),
          DECLARE_GET_FIELD(t_Rugged, scToBody),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Rugged__methods_[] = {
          DECLARE_METHOD(t_Rugged, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rugged, dateLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, directLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOS, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, distanceBetweenLOSderivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getBodyToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getInertialToBody, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensor, METH_O),
          DECLARE_METHOD(t_Rugged, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getName, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToBody, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, getScToInertial, METH_O),
          DECLARE_METHOD(t_Rugged, inverseLocation, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, inverseLocationDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_Rugged, isAberrationOfLightCorrected, METH_NOARGS),
          DECLARE_METHOD(t_Rugged, isInRange, METH_O),
          DECLARE_METHOD(t_Rugged, isLightTimeCorrected, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rugged)[] = {
          { Py_tp_methods, t_Rugged__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Rugged__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rugged)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rugged, t_Rugged, Rugged);

        void t_Rugged::install(PyObject *module)
        {
          installType(&PY_TYPE(Rugged), &PY_TYPE_DEF(Rugged), module, "Rugged", 0);
        }

        void t_Rugged::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "class_", make_descriptor(Rugged::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "wrapfn_", make_descriptor(t_Rugged::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rugged), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rugged_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rugged::initializeClass, 1)))
            return NULL;
          return t_Rugged::wrap_Object(Rugged(((t_Rugged *) arg)->object.this$));
        }
        static PyObject *t_Rugged_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rugged::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Rugged_dateLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.dateLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dateLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_directLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              JArray< ::org::orekit::bodies::GeodeticPoint > result((jobject) NULL);

              if (!parseArgs(args, "sD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::orekit::bodies::t_GeodeticPoint::wrap_jobject);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.directLocation(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "directLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOS(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOS(a0, a1, a2, a3, a4, a5, a6));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOS", args);
          return NULL;
        }

        static PyObject *t_Rugged_distanceBetweenLOSderivatives(t_Rugged *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a3((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor a4((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
          jdouble a6;
          ::org::orekit::rugged::utils::DerivativeGenerator a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "kkDkkkDK", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.distanceBetweenLOSderivatives(a0, a1, a2, a3, a4, a5, a6, a7));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "distanceBetweenLOSderivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_getAlgorithm(t_Rugged *self)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(result);
        }

        static PyObject *t_Rugged_getAlgorithmId(t_Rugged *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_Rugged_getBodyToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getBodyToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getBodyToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getEllipsoid(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Rugged_getInertialToBody(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getInertialToBody(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInertialToBody", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensor(t_Rugged *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineSensor result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getLineSensor(a0));
            return ::org::orekit::rugged::linesensor::t_LineSensor::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLineSensor", arg);
          return NULL;
        }

        static PyObject *t_Rugged_getLineSensors(t_Rugged *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_Rugged_getMaxDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getMinDate(t_Rugged *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Rugged_getName(t_Rugged *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_Rugged_getRefractionCorrection(t_Rugged *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToBody(t_Rugged *self)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody result((jobject) NULL);
          OBJ_CALL(result = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(result);
        }

        static PyObject *t_Rugged_getScToInertial(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Transform result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getScToInertial(a0));
            return ::org::orekit::frames::t_Transform::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getScToInertial", arg);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocation(t_Rugged *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
              jint a2;
              jint a3;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "skII", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::java::lang::String a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::rugged::linesensor::SensorPixel result((jobject) NULL);

              if (!parseArgs(args, "sDDII", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.inverseLocation(a0, a1, a2, a3, a4));
                return ::org::orekit::rugged::linesensor::t_SensorPixel::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocation", args);
          return NULL;
        }

        static PyObject *t_Rugged_inverseLocationDerivatives(t_Rugged *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::DerivativeGenerator a4((jobject) NULL);
          PyTypeObject **p4;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "skIIK", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
          {
            OBJ_CALL(result = self->object.inverseLocationDerivatives(a0, a1, a2, a3, a4));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseLocationDerivatives", args);
          return NULL;
        }

        static PyObject *t_Rugged_isAberrationOfLightCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_isInRange(t_Rugged *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isInRange(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isInRange", arg);
          return NULL;
        }

        static PyObject *t_Rugged_isLightTimeCorrected(t_Rugged *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Rugged_get__aberrationOfLightCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isAberrationOfLightCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__algorithm(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::intersection::IntersectionAlgorithm value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::intersection::t_IntersectionAlgorithm::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__algorithmId(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__ellipsoid(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__lightTimeCorrected(t_Rugged *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isLightTimeCorrected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Rugged_get__lineSensors(t_Rugged *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__maxDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__minDate(t_Rugged *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__name(t_Rugged *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_Rugged_get__refractionCorrection(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }

        static PyObject *t_Rugged_get__scToBody(t_Rugged *self, void *data)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody value((jobject) NULL);
          OBJ_CALL(value = self->object.getScToBody());
          return ::org::orekit::rugged::utils::t_SpacecraftToObservedBody::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/DummyLocalizable.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *DummyLocalizable::class$ = NULL;
      jmethodID *DummyLocalizable::mids$ = NULL;
      bool DummyLocalizable::live$ = false;

      jclass DummyLocalizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/DummyLocalizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DummyLocalizable::DummyLocalizable(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      ::java::lang::String DummyLocalizable::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String DummyLocalizable::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      ::java::lang::String DummyLocalizable::toString() const
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
    namespace exception {
      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg);
      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self);
      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args);
      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data);
      static PyGetSetDef t_DummyLocalizable__fields_[] = {
        DECLARE_GET_FIELD(t_DummyLocalizable, sourceString),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DummyLocalizable__methods_[] = {
        DECLARE_METHOD(t_DummyLocalizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DummyLocalizable, getLocalizedString, METH_O),
        DECLARE_METHOD(t_DummyLocalizable, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_DummyLocalizable, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DummyLocalizable)[] = {
        { Py_tp_methods, t_DummyLocalizable__methods_ },
        { Py_tp_init, (void *) t_DummyLocalizable_init_ },
        { Py_tp_getset, t_DummyLocalizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DummyLocalizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DummyLocalizable, t_DummyLocalizable, DummyLocalizable);

      void t_DummyLocalizable::install(PyObject *module)
      {
        installType(&PY_TYPE(DummyLocalizable), &PY_TYPE_DEF(DummyLocalizable), module, "DummyLocalizable", 0);
      }

      void t_DummyLocalizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "class_", make_descriptor(DummyLocalizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "wrapfn_", make_descriptor(t_DummyLocalizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DummyLocalizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DummyLocalizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DummyLocalizable::initializeClass, 1)))
          return NULL;
        return t_DummyLocalizable::wrap_Object(DummyLocalizable(((t_DummyLocalizable *) arg)->object.this$));
      }
      static PyObject *t_DummyLocalizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DummyLocalizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DummyLocalizable_init_(t_DummyLocalizable *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        DummyLocalizable object((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          INT_CALL(object = DummyLocalizable(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DummyLocalizable_getLocalizedString(t_DummyLocalizable *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_DummyLocalizable_getSourceString(t_DummyLocalizable *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_DummyLocalizable_toString(t_DummyLocalizable *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(DummyLocalizable), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DummyLocalizable_get__sourceString(t_DummyLocalizable *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *LeastSquaresTleGenerationAlgorithm::class$ = NULL;
            jmethodID *LeastSquaresTleGenerationAlgorithm::mids$ = NULL;
            bool LeastSquaresTleGenerationAlgorithm::live$ = false;
            jint LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS = (jint) 0;

            jclass LeastSquaresTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/LeastSquaresTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_960e3bcfe00e45ee] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_70bd59273b78d702] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_129bb6d4ed7ed841] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_getRms_456d9a2f64d6b28d] = env->getMethodID(cls, "getRms", "()D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

            LeastSquaresTleGenerationAlgorithm::LeastSquaresTleGenerationAlgorithm(jint a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_960e3bcfe00e45ee, a0, a1.this$, a2.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_70bd59273b78d702], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE LeastSquaresTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_129bb6d4ed7ed841], a0.this$, a1.this$));
            }

            jdouble LeastSquaresTleGenerationAlgorithm::getRms() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRms_456d9a2f64d6b28d]);
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
        namespace tle {
          namespace generation {
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self);
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_LeastSquaresTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresTleGenerationAlgorithm, rms),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, generate, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresTleGenerationAlgorithm, getRms, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_LeastSquaresTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_LeastSquaresTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresTleGenerationAlgorithm, t_LeastSquaresTleGenerationAlgorithm, LeastSquaresTleGenerationAlgorithm);

            void t_LeastSquaresTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresTleGenerationAlgorithm), &PY_TYPE_DEF(LeastSquaresTleGenerationAlgorithm), module, "LeastSquaresTleGenerationAlgorithm", 0);
            }

            void t_LeastSquaresTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "class_", make_descriptor(LeastSquaresTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_LeastSquaresTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(LeastSquaresTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresTleGenerationAlgorithm), "DEFAULT_MAX_ITERATIONS", make_descriptor(LeastSquaresTleGenerationAlgorithm::DEFAULT_MAX_ITERATIONS));
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresTleGenerationAlgorithm::wrap_Object(LeastSquaresTleGenerationAlgorithm(((t_LeastSquaresTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresTleGenerationAlgorithm_init_(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = LeastSquaresTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jint a0;
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jint a0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  LeastSquaresTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "Ikk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = LeastSquaresTleGenerationAlgorithm(a0, a1, a2));
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

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_generate(t_LeastSquaresTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_getRms(t_LeastSquaresTleGenerationAlgorithm *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRms());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresTleGenerationAlgorithm_get__rms(t_LeastSquaresTleGenerationAlgorithm *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRms());
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
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *Interval::class$ = NULL;
          jmethodID *Interval::mids$ = NULL;
          bool Interval::live$ = false;

          jclass Interval::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/Interval");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_checkPoint_d3285dfe2b4bd4a9] = env->getMethodID(cls, "checkPoint", "(DD)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_456d9a2f64d6b28d] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_456d9a2f64d6b28d] = env->getMethodID(cls, "getSup", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Interval::Interval(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Interval::checkPoint(jdouble a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_d3285dfe2b4bd4a9], a0, a1));
          }

          jdouble Interval::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_456d9a2f64d6b28d]);
          }

          jdouble Interval::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_456d9a2f64d6b28d]);
          }

          jdouble Interval::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
          }

          jdouble Interval::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_456d9a2f64d6b28d]);
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
          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args);
          static PyObject *t_Interval_getBarycenter(t_Interval *self);
          static PyObject *t_Interval_getInf(t_Interval *self);
          static PyObject *t_Interval_getSize(t_Interval *self);
          static PyObject *t_Interval_getSup(t_Interval *self);
          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data);
          static PyObject *t_Interval_get__inf(t_Interval *self, void *data);
          static PyObject *t_Interval_get__size(t_Interval *self, void *data);
          static PyObject *t_Interval_get__sup(t_Interval *self, void *data);
          static PyGetSetDef t_Interval__fields_[] = {
            DECLARE_GET_FIELD(t_Interval, barycenter),
            DECLARE_GET_FIELD(t_Interval, inf),
            DECLARE_GET_FIELD(t_Interval, size),
            DECLARE_GET_FIELD(t_Interval, sup),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Interval__methods_[] = {
            DECLARE_METHOD(t_Interval, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Interval, checkPoint, METH_VARARGS),
            DECLARE_METHOD(t_Interval, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Interval, getSup, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Interval)[] = {
            { Py_tp_methods, t_Interval__methods_ },
            { Py_tp_init, (void *) t_Interval_init_ },
            { Py_tp_getset, t_Interval__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Interval)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Interval, t_Interval, Interval);

          void t_Interval::install(PyObject *module)
          {
            installType(&PY_TYPE(Interval), &PY_TYPE_DEF(Interval), module, "Interval", 0);
          }

          void t_Interval::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "class_", make_descriptor(Interval::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "wrapfn_", make_descriptor(t_Interval::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Interval), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Interval_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Interval::initializeClass, 1)))
              return NULL;
            return t_Interval::wrap_Object(Interval(((t_Interval *) arg)->object.this$));
          }
          static PyObject *t_Interval_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Interval::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Interval_init_(t_Interval *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Interval object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Interval(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Interval_checkPoint(t_Interval *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.checkPoint(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
            return NULL;
          }

          static PyObject *t_Interval_getBarycenter(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getInf(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSize(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_getSup(t_Interval *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Interval_get__barycenter(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__inf(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__size(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Interval_get__sup(t_Interval *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/IntegratedEphemeris.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *IntegratedEphemeris::class$ = NULL;
        jmethodID *IntegratedEphemeris::mids$ = NULL;
        bool IntegratedEphemeris::live$ = false;

        jclass IntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/IntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_73744236e0a228c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/integration/StateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/DenseOutputModel;Lorg/orekit/utils/DoubleArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_889031abe87f3b14] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_updateAdditionalStates_81fc6fb6078d2aa7] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IntegratedEphemeris::IntegratedEphemeris(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::propagation::integration::StateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::DenseOutputModel & a5, const ::org::orekit::utils::DoubleArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_73744236e0a228c0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame IntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::propagation::SpacecraftState IntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_dd3e4a8d51055f1f]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates IntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
        }

        void IntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
        }

        void IntegratedEphemeris::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
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
        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args);
        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data);
        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data);
        static PyGetSetDef t_IntegratedEphemeris__fields_[] = {
          DECLARE_SET_FIELD(t_IntegratedEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, minDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_IntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, setAttitudeProvider, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntegratedEphemeris)[] = {
          { Py_tp_methods, t_IntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_IntegratedEphemeris_init_ },
          { Py_tp_getset, t_IntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(IntegratedEphemeris, t_IntegratedEphemeris, IntegratedEphemeris);

        void t_IntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(IntegratedEphemeris), &PY_TYPE_DEF(IntegratedEphemeris), module, "IntegratedEphemeris", 0);
        }

        void t_IntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "class_", make_descriptor(IntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "wrapfn_", make_descriptor(t_IntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_IntegratedEphemeris::wrap_Object(IntegratedEphemeris(((t_IntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::propagation::integration::StateMapper a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::DenseOutputModel a5((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a6((jobject) NULL);
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          IntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "kkkkKkkK[s[I", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::integration::StateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::DenseOutputModel::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &a6, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = IntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data)
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

        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
