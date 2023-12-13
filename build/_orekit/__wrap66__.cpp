#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalPropertiesKey::class$ = NULL;
              jmethodID *AttitudePhysicalPropertiesKey::mids$ = NULL;
              bool AttitudePhysicalPropertiesKey::live$ = false;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::COMMENT = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::CP_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRAG_COEFF = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::DRY_MASS = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXX = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IXZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYY = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IYZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::IZZ = NULL;
              AttitudePhysicalPropertiesKey *AttitudePhysicalPropertiesKey::WET_MASS = NULL;

              jclass AttitudePhysicalPropertiesKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_4e16a4054ae03944] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties;)Z");
                  mids$[mid_valueOf_f38b14ffdef5cb46] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");
                  mids$[mid_values_1cca4be7de8a1754] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  CP_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "CP_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRAG_COEFF = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  DRY_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "DRY_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  INERTIA_REF_FRAME = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXX = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IXZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYY = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IYZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  IZZ = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  WET_MASS = new AttitudePhysicalPropertiesKey(env->getStaticObjectField(cls, "WET_MASS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalPropertiesKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudePhysicalPropertiesKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_4e16a4054ae03944], a0.this$, a1.this$, a2.this$);
              }

              AttitudePhysicalPropertiesKey AttitudePhysicalPropertiesKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudePhysicalPropertiesKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f38b14ffdef5cb46], a0.this$));
              }

              JArray< AttitudePhysicalPropertiesKey > AttitudePhysicalPropertiesKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudePhysicalPropertiesKey >(env->callStaticObjectMethod(cls, mids$[mid_values_1cca4be7de8a1754]));
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
              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type);
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data);
              static PyGetSetDef t_AttitudePhysicalPropertiesKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudePhysicalPropertiesKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalPropertiesKey__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalPropertiesKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalPropertiesKey)[] = {
                { Py_tp_methods, t_AttitudePhysicalPropertiesKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudePhysicalPropertiesKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalPropertiesKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalPropertiesKey, t_AttitudePhysicalPropertiesKey, AttitudePhysicalPropertiesKey);
              PyObject *t_AttitudePhysicalPropertiesKey::wrap_Object(const AttitudePhysicalPropertiesKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudePhysicalPropertiesKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudePhysicalPropertiesKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudePhysicalPropertiesKey *self = (t_AttitudePhysicalPropertiesKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudePhysicalPropertiesKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalPropertiesKey), &PY_TYPE_DEF(AttitudePhysicalPropertiesKey), module, "AttitudePhysicalPropertiesKey", 0);
              }

              void t_AttitudePhysicalPropertiesKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "class_", make_descriptor(AttitudePhysicalPropertiesKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "wrapfn_", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudePhysicalPropertiesKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "COMMENT", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "CP_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::CP_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRAG_COEFF", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRAG_COEFF)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "DRY_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::DRY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "INERTIA_REF_FRAME", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXX", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IXZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYY", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IYZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "IZZ", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::IZZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalPropertiesKey), "WET_MASS", make_descriptor(t_AttitudePhysicalPropertiesKey::wrap_Object(*AttitudePhysicalPropertiesKey::WET_MASS)));
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalPropertiesKey::wrap_Object(AttitudePhysicalPropertiesKey(((t_AttitudePhysicalPropertiesKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalPropertiesKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_of_(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_process(t_AttitudePhysicalPropertiesKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudePhysicalPropertiesKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::valueOf(a0));
                  return t_AttitudePhysicalPropertiesKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudePhysicalPropertiesKey_values(PyTypeObject *type)
              {
                JArray< AttitudePhysicalPropertiesKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalPropertiesKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudePhysicalPropertiesKey::wrap_jobject);
              }
              static PyObject *t_AttitudePhysicalPropertiesKey_get__parameters_(t_AttitudePhysicalPropertiesKey *self, void *data)
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
#include "org/orekit/data/ClasspathCrawler.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
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
          mids$[mid_init$_4f1e9165cc3f09e7] = env->getMethodID(cls, "<init>", "([Ljava/lang/String;)V");
          mids$[mid_init$_f83536b325065468] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ClasspathCrawler::ClasspathCrawler(const JArray< ::java::lang::String > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f1e9165cc3f09e7, a0.this$)) {}

      ClasspathCrawler::ClasspathCrawler(const ::java::lang::ClassLoader & a0, const JArray< ::java::lang::String > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f83536b325065468, a0.this$, a1.this$)) {}
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
#include "org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
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

          ::java::lang::Class *TDOATroposphericDelayModifier::class$ = NULL;
          jmethodID *TDOATroposphericDelayModifier::mids$ = NULL;
          bool TDOATroposphericDelayModifier::live$ = false;

          jclass TDOATroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOATroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_516bd20115aa9d9d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_f784f7724d44a90a] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOATroposphericDelayModifier::TDOATroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_516bd20115aa9d9d, a0.this$)) {}

          ::java::util::List TDOATroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void TDOATroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_f784f7724d44a90a], a0.this$);
          }

          void TDOATroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self);
          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOATroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOATroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOATroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOATroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOATroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOATroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOATroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOATroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOATroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOATroposphericDelayModifier, t_TDOATroposphericDelayModifier, TDOATroposphericDelayModifier);

          void t_TDOATroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOATroposphericDelayModifier), &PY_TYPE_DEF(TDOATroposphericDelayModifier), module, "TDOATroposphericDelayModifier", 0);
          }

          void t_TDOATroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "class_", make_descriptor(TDOATroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "wrapfn_", make_descriptor(t_TDOATroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOATroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOATroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOATroposphericDelayModifier::wrap_Object(TDOATroposphericDelayModifier(((t_TDOATroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOATroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOATroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOATroposphericDelayModifier_init_(t_TDOATroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TDOATroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TDOATroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOATroposphericDelayModifier_getParametersDrivers(t_TDOATroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOATroposphericDelayModifier_modify(t_TDOATroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOATroposphericDelayModifier_modifyWithoutDerivatives(t_TDOATroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOATroposphericDelayModifier_get__parametersDrivers(t_TDOATroposphericDelayModifier *self, void *data)
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
#include "org/orekit/utils/PythonStateFunction.h"
#include "org/orekit/utils/StateFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateFunction::class$ = NULL;
      jmethodID *PythonStateFunction::mids$ = NULL;
      bool PythonStateFunction::live$ = false;

      jclass PythonStateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_f227e5f48720b798] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateFunction::PythonStateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonStateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonStateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonStateFunction::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self);
      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args);
      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data);
      static PyGetSetDef t_PythonStateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonStateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateFunction)[] = {
        { Py_tp_methods, t_PythonStateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonStateFunction_init_ },
        { Py_tp_getset, t_PythonStateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateFunction, t_PythonStateFunction, PythonStateFunction);

      void t_PythonStateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateFunction), &PY_TYPE_DEF(PythonStateFunction), module, "PythonStateFunction", 1);
      }

      void t_PythonStateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "class_", make_descriptor(PythonStateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "wrapfn_", make_descriptor(t_PythonStateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonStateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonStateFunction::wrap_Object(PythonStateFunction(((t_PythonStateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonStateFunction object((jobject) NULL);

        INT_CALL(object = PythonStateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *PythonAbstractSolarActivityData::class$ = NULL;
            jmethodID *PythonAbstractSolarActivityData::mids$ = NULL;
            bool PythonAbstractSolarActivityData::live$ = false;

            jclass PythonAbstractSolarActivityData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/PythonAbstractSolarActivityData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bfb38e1a8275d5c9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_get24HoursKp_fd347811007a6ba3] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_27b701db396ade01] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_fd347811007a6ba3] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_fd347811007a6ba3] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_fd347811007a6ba3] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_fd347811007a6ba3] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_fd347811007a6ba3] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractSolarActivityData::PythonAbstractSolarActivityData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_bfb38e1a8275d5c9, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            void PythonAbstractSolarActivityData::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAbstractSolarActivityData::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAbstractSolarActivityData::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self);
            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0);
            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data);
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data);
            static PyGetSetDef t_PythonAbstractSolarActivityData__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, self),
              DECLARE_GET_FIELD(t_PythonAbstractSolarActivityData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractSolarActivityData__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractSolarActivityData, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractSolarActivityData)[] = {
              { Py_tp_methods, t_PythonAbstractSolarActivityData__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractSolarActivityData_init_ },
              { Py_tp_getset, t_PythonAbstractSolarActivityData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractSolarActivityData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(PythonAbstractSolarActivityData, t_PythonAbstractSolarActivityData, PythonAbstractSolarActivityData);
            PyObject *t_PythonAbstractSolarActivityData::wrap_Object(const PythonAbstractSolarActivityData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonAbstractSolarActivityData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonAbstractSolarActivityData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractSolarActivityData *self = (t_PythonAbstractSolarActivityData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonAbstractSolarActivityData::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractSolarActivityData), &PY_TYPE_DEF(PythonAbstractSolarActivityData), module, "PythonAbstractSolarActivityData", 1);
            }

            void t_PythonAbstractSolarActivityData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "class_", make_descriptor(PythonAbstractSolarActivityData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "wrapfn_", make_descriptor(t_PythonAbstractSolarActivityData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractSolarActivityData), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractSolarActivityData::initializeClass);
              JNINativeMethod methods[] = {
                { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_get24HoursKp0 },
                { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonAbstractSolarActivityData_getAp1 },
                { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getAverageFlux2 },
                { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getDailyFlux3 },
                { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getInstantFlux4 },
                { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getMeanFlux5 },
                { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractSolarActivityData_getThreeHourlyKP6 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractSolarActivityData_pythonDecRef7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonAbstractSolarActivityData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractSolarActivityData::wrap_Object(PythonAbstractSolarActivityData(((t_PythonAbstractSolarActivityData *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractSolarActivityData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractSolarActivityData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_of_(t_PythonAbstractSolarActivityData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractSolarActivityData_init_(t_PythonAbstractSolarActivityData *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              jint a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              PythonAbstractSolarActivityData object((jobject) NULL);

              if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = PythonAbstractSolarActivityData(a0, a1, a2, a3, a4, a5, a6, a7));
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

            static PyObject *t_PythonAbstractSolarActivityData_finalize(t_PythonAbstractSolarActivityData *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractSolarActivityData_pythonExtension(t_PythonAbstractSolarActivityData *self, PyObject *args)
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("get24HoursKp", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonAbstractSolarActivityData_getAp1(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getAp", result);
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

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getAverageFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAverageFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getDailyFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getDailyFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getInstantFlux4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getInstantFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getMeanFlux5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getMeanFlux", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonAbstractSolarActivityData_getThreeHourlyKP6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getThreeHourlyKP", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonAbstractSolarActivityData_pythonDecRef7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractSolarActivityData::mids$[PythonAbstractSolarActivityData::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonAbstractSolarActivityData_get__self(t_PythonAbstractSolarActivityData *self, void *data)
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
            static PyObject *t_PythonAbstractSolarActivityData_get__parameters_(t_PythonAbstractSolarActivityData *self, void *data)
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
#include "org/orekit/time/TimeStampedField.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedField::class$ = NULL;
      jmethodID *TimeStampedField::mids$ = NULL;
      bool TimeStampedField::live$ = false;

      jclass TimeStampedField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7f1905037abc4455] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_bd45115a05f012cf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getValue_81520b552cb3fa26] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f1905037abc4455, a0.this$, a1.this$)) {}

      TimeStampedField::TimeStampedField(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd45115a05f012cf, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate TimeStampedField::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::hipparchus::CalculusFieldElement TimeStampedField::getValue() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_81520b552cb3fa26]));
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
      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args);
      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self);
      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data);
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data);
      static PyGetSetDef t_TimeStampedField__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedField, date),
        DECLARE_GET_FIELD(t_TimeStampedField, value),
        DECLARE_GET_FIELD(t_TimeStampedField, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedField__methods_[] = {
        DECLARE_METHOD(t_TimeStampedField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedField, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedField, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedField, getValue, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedField)[] = {
        { Py_tp_methods, t_TimeStampedField__methods_ },
        { Py_tp_init, (void *) t_TimeStampedField_init_ },
        { Py_tp_getset, t_TimeStampedField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedField, t_TimeStampedField, TimeStampedField);
      PyObject *t_TimeStampedField::wrap_Object(const TimeStampedField& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedField::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedField::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedField *self = (t_TimeStampedField *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedField::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedField), &PY_TYPE_DEF(TimeStampedField), module, "TimeStampedField", 0);
      }

      void t_TimeStampedField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "class_", make_descriptor(TimeStampedField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "wrapfn_", make_descriptor(t_TimeStampedField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedField::initializeClass, 1)))
          return NULL;
        return t_TimeStampedField::wrap_Object(TimeStampedField(((t_TimeStampedField *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedField_of_(t_TimeStampedField *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedField_init_(t_TimeStampedField *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedField object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              INT_CALL(object = TimeStampedField(a0, a1));
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

      static PyObject *t_TimeStampedField_getDate(t_TimeStampedField *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedField_getValue(t_TimeStampedField *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_TimeStampedField_get__parameters_(t_TimeStampedField *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedField_get__date(t_TimeStampedField *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedField_get__value(t_TimeStampedField *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStepHandler::class$ = NULL;
        jmethodID *ODEStepHandler::mids$ = NULL;
        bool ODEStepHandler::live$ = false;

        jclass ODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_d2d966b8a9c77b61] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_197c5aaefd855810] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_a7556bd72cab73f1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepHandler::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_d2d966b8a9c77b61], a0.this$);
        }

        void ODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_197c5aaefd855810], a0.this$);
        }

        void ODEStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_a7556bd72cab73f1], a0.this$, a1);
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
      namespace sampling {
        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepHandler)[] = {
          { Py_tp_methods, t_ODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepHandler, t_ODEStepHandler, ODEStepHandler);

        void t_ODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepHandler), &PY_TYPE_DEF(ODEStepHandler), module, "ODEStepHandler", 0);
        }

        void t_ODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "class_", make_descriptor(ODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "wrapfn_", make_descriptor(t_ODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepHandler::wrap_Object(ODEStepHandler(((t_ODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg)
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

        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg)
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

        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/LOF.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/linear/FieldMatrix.h"
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
          mids$[mid_init$_2441c6f01a3ea850] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_b4a10c6f7c6d914d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_3dbaa923bdea8ccc] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceFrame_ec8ad61492c0cb3f] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceType_7b9dbe8595640301] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_f6a236b1948152b5] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_81d49643ce3a3c0b] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_shiftedBy_79f4fe4d73401b44] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_toStateCovariance_6c7ec62384a674b1] = env->getMethodID(cls, "toStateCovariance", "()Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2441c6f01a3ea850, a0.this$, a1.this$, a2.this$)) {}

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b4a10c6f7c6d914d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_3dbaa923bdea8ccc], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_ec8ad61492c0cb3f], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceType(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_7b9dbe8595640301], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldStateCovariance::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      ::org::orekit::frames::Frame FieldStateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::frames::LOF FieldStateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_f6a236b1948152b5]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldStateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_81d49643ce3a3c0b]));
      }

      ::org::orekit::orbits::OrbitType FieldStateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_c7d4737d7afca612]));
      }

      ::org::orekit::orbits::PositionAngleType FieldStateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_c25055891f180348]));
      }

      FieldStateCovariance FieldStateCovariance::shiftedBy(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_79f4fe4d73401b44], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::propagation::StateCovariance FieldStateCovariance::toStateCovariance() const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_toStateCovariance_6c7ec62384a674b1]));
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
#include "org/hipparchus/analysis/function/Sqrt.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sqrt::class$ = NULL;
        jmethodID *Sqrt::mids$ = NULL;
        bool Sqrt::live$ = false;

        jclass Sqrt::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sqrt");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sqrt::Sqrt() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Sqrt::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sqrt::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args);

        static PyMethodDef t_Sqrt__methods_[] = {
          DECLARE_METHOD(t_Sqrt, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sqrt, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sqrt)[] = {
          { Py_tp_methods, t_Sqrt__methods_ },
          { Py_tp_init, (void *) t_Sqrt_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sqrt)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sqrt, t_Sqrt, Sqrt);

        void t_Sqrt::install(PyObject *module)
        {
          installType(&PY_TYPE(Sqrt), &PY_TYPE_DEF(Sqrt), module, "Sqrt", 0);
        }

        void t_Sqrt::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "class_", make_descriptor(Sqrt::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "wrapfn_", make_descriptor(t_Sqrt::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sqrt), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sqrt_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sqrt::initializeClass, 1)))
            return NULL;
          return t_Sqrt::wrap_Object(Sqrt(((t_Sqrt *) arg)->object.this$));
        }
        static PyObject *t_Sqrt_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sqrt::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sqrt_init_(t_Sqrt *self, PyObject *args, PyObject *kwds)
        {
          Sqrt object((jobject) NULL);

          INT_CALL(object = Sqrt());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sqrt_value(t_Sqrt *self, PyObject *args)
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
#include "org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/util/List.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *InterSensorsOptimizationProblemBuilder::class$ = NULL;
        jmethodID *InterSensorsOptimizationProblemBuilder::mids$ = NULL;
        bool InterSensorsOptimizationProblemBuilder::live$ = false;

        jclass InterSensorsOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/InterSensorsOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_23873f288a542707] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Ljava/util/Collection;)V");
            mids$[mid_build_6f03ef14ae36f9b3] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createTargetAndWeight_a1fa5dae97ea5ed2] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_a1fa5dae97ea5ed2] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_6a20d4ddc607b9bb] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSensorsOptimizationProblemBuilder::InterSensorsOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::java::util::Collection & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_23873f288a542707, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem InterSensorsOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_6f03ef14ae36f9b3], a0, a1));
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
        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_InterSensorsOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSensorsOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSensorsOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_InterSensorsOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_InterSensorsOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSensorsOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(InterSensorsOptimizationProblemBuilder, t_InterSensorsOptimizationProblemBuilder, InterSensorsOptimizationProblemBuilder);

        void t_InterSensorsOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSensorsOptimizationProblemBuilder), &PY_TYPE_DEF(InterSensorsOptimizationProblemBuilder), module, "InterSensorsOptimizationProblemBuilder", 0);
        }

        void t_InterSensorsOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "class_", make_descriptor(InterSensorsOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_InterSensorsOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSensorsOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_InterSensorsOptimizationProblemBuilder::wrap_Object(InterSensorsOptimizationProblemBuilder(((t_InterSensorsOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_InterSensorsOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSensorsOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_InterSensorsOptimizationProblemBuilder_init_(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::java::util::Collection a2((jobject) NULL);
          PyTypeObject **p2;
          InterSensorsOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "KkK", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = InterSensorsOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSensorsOptimizationProblemBuilder_build(t_InterSensorsOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(InterSensorsOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Galileo.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Galileo::class$ = NULL;
        jmethodID *Galileo::mids$ = NULL;
        bool Galileo::live$ = false;
        jdouble Galileo::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Galileo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Galileo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1e895b27f5ad5fa3] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Galileo::Galileo(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1e895b27f5ad5fa3, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Galileo__methods_[] = {
          DECLARE_METHOD(t_Galileo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Galileo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Galileo)[] = {
          { Py_tp_methods, t_Galileo__methods_ },
          { Py_tp_init, (void *) t_Galileo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Galileo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Galileo, t_Galileo, Galileo);

        void t_Galileo::install(PyObject *module)
        {
          installType(&PY_TYPE(Galileo), &PY_TYPE_DEF(Galileo), module, "Galileo", 0);
        }

        void t_Galileo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "class_", make_descriptor(Galileo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "wrapfn_", make_descriptor(t_Galileo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "boxfn_", make_descriptor(boxObject));
          env->getClass(Galileo::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Galileo), "DEFAULT_YAW_RATE", make_descriptor(Galileo::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Galileo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Galileo::initializeClass, 1)))
            return NULL;
          return t_Galileo::wrap_Object(Galileo(((t_Galileo *) arg)->object.this$));
        }
        static PyObject *t_Galileo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Galileo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Galileo_init_(t_Galileo *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Galileo object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Galileo(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/analysis/function/StepFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *StepFunction::class$ = NULL;
        jmethodID *StepFunction::mids$ = NULL;
        bool StepFunction::live$ = false;

        jclass StepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/StepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepFunction::StepFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

        jdouble StepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
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
        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg);

        static PyMethodDef t_StepFunction__methods_[] = {
          DECLARE_METHOD(t_StepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepFunction)[] = {
          { Py_tp_methods, t_StepFunction__methods_ },
          { Py_tp_init, (void *) t_StepFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepFunction, t_StepFunction, StepFunction);

        void t_StepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(StepFunction), &PY_TYPE_DEF(StepFunction), module, "StepFunction", 0);
        }

        void t_StepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "class_", make_descriptor(StepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "wrapfn_", make_descriptor(t_StepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepFunction::initializeClass, 1)))
            return NULL;
          return t_StepFunction::wrap_Object(StepFunction(((t_StepFunction *) arg)->object.this$));
        }
        static PyObject *t_StepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepFunction_init_(t_StepFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          StepFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = StepFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_StepFunction_value(t_StepFunction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesFieldIntegratorBuilder::live$ = false;

        jclass ThreeEighthesFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ThreeEighthesFieldIntegratorBuilder::ThreeEighthesFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ThreeEighthesFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegratorBuilder, t_ThreeEighthesFieldIntegratorBuilder, ThreeEighthesFieldIntegratorBuilder);
        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(const ThreeEighthesFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegratorBuilder *self = (t_ThreeEighthesFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesFieldIntegratorBuilder), module, "ThreeEighthesFieldIntegratorBuilder", 0);
        }

        void t_ThreeEighthesFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "class_", make_descriptor(ThreeEighthesFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegratorBuilder::wrap_Object(ThreeEighthesFieldIntegratorBuilder(((t_ThreeEighthesFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_of_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegratorBuilder_init_(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ThreeEighthesFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ThreeEighthesFieldIntegratorBuilder(a0));
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

        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_buildIntegrator(t_ThreeEighthesFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegratorBuilder_get__parameters_(t_ThreeEighthesFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonStartStopEventsTrigger::class$ = NULL;
          jmethodID *PythonStartStopEventsTrigger::mids$ = NULL;
          bool PythonStartStopEventsTrigger::live$ = false;

          jclass PythonStartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonStartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_32649cab150bd98e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertStartDetector_323adeb6f2939c8a] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_323adeb6f2939c8a] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStartStopEventsTrigger::PythonStartStopEventsTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0, const ::org::orekit::propagation::events::AbstractDetector & a1) : ::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger(env->newObject(initializeClass, &mids$, mid_init$_32649cab150bd98e, a0.this$, a1.this$)) {}

          void PythonStartStopEventsTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonStartStopEventsTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonStartStopEventsTrigger::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        namespace trigger {
          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self);
          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data);
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_PythonStartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, self),
            DECLARE_GET_FIELD(t_PythonStartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStartStopEventsTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStartStopEventsTrigger)[] = {
            { Py_tp_methods, t_PythonStartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonStartStopEventsTrigger_init_ },
            { Py_tp_getset, t_PythonStartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::StartStopEventsTrigger),
            NULL
          };

          DEFINE_TYPE(PythonStartStopEventsTrigger, t_PythonStartStopEventsTrigger, PythonStartStopEventsTrigger);
          PyObject *t_PythonStartStopEventsTrigger::wrap_Object(const PythonStartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonStartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonStartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonStartStopEventsTrigger *self = (t_PythonStartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonStartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStartStopEventsTrigger), &PY_TYPE_DEF(PythonStartStopEventsTrigger), module, "PythonStartStopEventsTrigger", 1);
          }

          void t_PythonStartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "class_", make_descriptor(PythonStartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "wrapfn_", make_descriptor(t_PythonStartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStartStopEventsTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStartDetector0 },
              { "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonStartStopEventsTrigger_convertStopDetector1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonStartStopEventsTrigger_getParametersDrivers2 },
              { "pythonDecRef", "()V", (void *) t_PythonStartStopEventsTrigger_pythonDecRef3 },
            };
            env->registerNatives(cls, methods, 4);
          }

          static PyObject *t_PythonStartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonStartStopEventsTrigger::wrap_Object(PythonStartStopEventsTrigger(((t_PythonStartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonStartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_of_(t_PythonStartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonStartStopEventsTrigger_init_(t_PythonStartStopEventsTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::AbstractDetector a1((jobject) NULL);
            PyTypeObject **p1;
            PythonStartStopEventsTrigger object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::AbstractDetector::initializeClass, ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonStartStopEventsTrigger(a0, a1));
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

          static PyObject *t_PythonStartStopEventsTrigger_finalize(t_PythonStartStopEventsTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStartStopEventsTrigger_pythonExtension(t_PythonStartStopEventsTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStartDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStartDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStartDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_convertStopDetector1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertStopDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertStopDetector", result);
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

          static jobject JNICALL t_PythonStartStopEventsTrigger_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static void JNICALL t_PythonStartStopEventsTrigger_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStartStopEventsTrigger::mids$[PythonStartStopEventsTrigger::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStartStopEventsTrigger_get__self(t_PythonStartStopEventsTrigger *self, void *data)
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
          static PyObject *t_PythonStartStopEventsTrigger_get__parameters_(t_PythonStartStopEventsTrigger *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataLine::class$ = NULL;
          jmethodID *RinexClock$ClockDataLine::mids$ = NULL;
          bool RinexClock$ClockDataLine::live$ = false;

          jclass RinexClock$ClockDataLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bfbb1c84dbf9de42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/clock/RinexClock;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;Ljava/lang/String;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;IDDDDDD)V");
              mids$[mid_getClockAcceleration_b74f83833fdad017] = env->getMethodID(cls, "getClockAcceleration", "()D");
              mids$[mid_getClockAccelerationSigma_b74f83833fdad017] = env->getMethodID(cls, "getClockAccelerationSigma", "()D");
              mids$[mid_getClockBias_b74f83833fdad017] = env->getMethodID(cls, "getClockBias", "()D");
              mids$[mid_getClockBiasSigma_b74f83833fdad017] = env->getMethodID(cls, "getClockBiasSigma", "()D");
              mids$[mid_getClockRate_b74f83833fdad017] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getClockRateSigma_b74f83833fdad017] = env->getMethodID(cls, "getClockRateSigma", "()D");
              mids$[mid_getDataType_2a860d9c1b5ba9ff] = env->getMethodID(cls, "getDataType", "()Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_getEpoch_c325492395d89b24] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEpoch_bffa934891f29b33] = env->getMethodID(cls, "getEpoch", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getNumberOfValues_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfValues", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ClockDataLine::RinexClock$ClockDataLine(const ::org::orekit::files::rinex::clock::RinexClock & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a1, const ::java::lang::String & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeComponents & a4, jint a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bfbb1c84dbf9de42, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11)) {}

          jdouble RinexClock$ClockDataLine::getClockAcceleration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAcceleration_b74f83833fdad017]);
          }

          jdouble RinexClock$ClockDataLine::getClockAccelerationSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAccelerationSigma_b74f83833fdad017]);
          }

          jdouble RinexClock$ClockDataLine::getClockBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBias_b74f83833fdad017]);
          }

          jdouble RinexClock$ClockDataLine::getClockBiasSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBiasSigma_b74f83833fdad017]);
          }

          jdouble RinexClock$ClockDataLine::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_b74f83833fdad017]);
          }

          jdouble RinexClock$ClockDataLine::getClockRateSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRateSigma_b74f83833fdad017]);
          }

          ::org::orekit::files::rinex::clock::RinexClock$ClockDataType RinexClock$ClockDataLine::getDataType() const
          {
            return ::org::orekit::files::rinex::clock::RinexClock$ClockDataType(env->callObjectMethod(this$, mids$[mid_getDataType_2a860d9c1b5ba9ff]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_c325492395d89b24]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch(const ::org::orekit::time::TimeScale & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_bffa934891f29b33], a0.this$));
          }

          ::java::lang::String RinexClock$ClockDataLine::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          jint RinexClock$ClockDataLine::getNumberOfValues() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfValues_55546ef6a647f39b]);
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
        namespace clock {
          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataLine__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAcceleration),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAccelerationSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBias),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBiasSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRate),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRateSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, dataType),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, epoch),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, name),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, numberOfValues),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataLine__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAcceleration, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAccelerationSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBiasSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRateSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getDataType, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getEpoch, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getNumberOfValues, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataLine)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataLine__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ClockDataLine_init_ },
            { Py_tp_getset, t_RinexClock$ClockDataLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataLine, t_RinexClock$ClockDataLine, RinexClock$ClockDataLine);

          void t_RinexClock$ClockDataLine::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataLine), &PY_TYPE_DEF(RinexClock$ClockDataLine), module, "RinexClock$ClockDataLine", 0);
          }

          void t_RinexClock$ClockDataLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "class_", make_descriptor(RinexClock$ClockDataLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "wrapfn_", make_descriptor(t_RinexClock$ClockDataLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataLine::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataLine::wrap_Object(RinexClock$ClockDataLine(((t_RinexClock$ClockDataLine *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::clock::RinexClock a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeComponents a4((jobject) NULL);
            jint a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            RinexClock$ClockDataLine object((jobject) NULL);

            if (!parseArgs(args, "kKskkIDDDDDD", ::org::orekit::files::rinex::clock::RinexClock::initializeClass, ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1, &p1, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
            {
              INT_CALL(object = RinexClock$ClockDataLine(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getEpoch(a0));
                  return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getEpoch", args);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfValues());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBias());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfValues());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationData::class$ = NULL;
          jmethodID *CombinedObservationData::mids$ = NULL;
          bool CombinedObservationData::live$ = false;

          jclass CombinedObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_50cb3dba42c774b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/MeasurementType;DDLjava/util/List;)V");
              mids$[mid_getCombinationType_17afe4fde34d17a8] = env->getMethodID(cls, "getCombinationType", "()Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_getCombinedMHzFrequency_b74f83833fdad017] = env->getMethodID(cls, "getCombinedMHzFrequency", "()D");
              mids$[mid_getMeasurementType_8c0a6decf9468215] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
              mids$[mid_getUsedObservationData_e62d3bb06d56d7e3] = env->getMethodID(cls, "getUsedObservationData", "()Ljava/util/List;");
              mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationData::CombinedObservationData(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::MeasurementType & a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50cb3dba42c774b2, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::gnss::CombinationType CombinedObservationData::getCombinationType() const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinationType(env->callObjectMethod(this$, mids$[mid_getCombinationType_17afe4fde34d17a8]));
          }

          jdouble CombinedObservationData::getCombinedMHzFrequency() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCombinedMHzFrequency_b74f83833fdad017]);
          }

          ::org::orekit::gnss::MeasurementType CombinedObservationData::getMeasurementType() const
          {
            return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_8c0a6decf9468215]));
          }

          ::java::util::List CombinedObservationData::getUsedObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUsedObservationData_e62d3bb06d56d7e3]));
          }

          jdouble CombinedObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
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
          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data);
          static PyGetSetDef t_CombinedObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationData, combinationType),
            DECLARE_GET_FIELD(t_CombinedObservationData, combinedMHzFrequency),
            DECLARE_GET_FIELD(t_CombinedObservationData, measurementType),
            DECLARE_GET_FIELD(t_CombinedObservationData, usedObservationData),
            DECLARE_GET_FIELD(t_CombinedObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationData__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinationType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinedMHzFrequency, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getMeasurementType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getUsedObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationData)[] = {
            { Py_tp_methods, t_CombinedObservationData__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationData_init_ },
            { Py_tp_getset, t_CombinedObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationData, t_CombinedObservationData, CombinedObservationData);

          void t_CombinedObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationData), &PY_TYPE_DEF(CombinedObservationData), module, "CombinedObservationData", 0);
          }

          void t_CombinedObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "class_", make_descriptor(CombinedObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "wrapfn_", make_descriptor(t_CombinedObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationData::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationData::wrap_Object(CombinedObservationData(((t_CombinedObservationData *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::MeasurementType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationData object((jobject) NULL);

            if (!parseArgs(args, "KKDDK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_MeasurementType::parameters_, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationData(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self)
          {
            ::org::orekit::gnss::MeasurementType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::gnss::MeasurementType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinatesHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinatesHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_b6d0b49c4659d5f2] = env->getMethodID(cls, "<init>", "(ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_84faa23834a0f7e9] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_getFilter_33d67d456ec94a0c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
          mids$[mid_interpolate_87169f0715901448] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::utils::AngularDerivativesFilter & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b6d0b49c4659d5f2, a0, a1.this$)) {}

      TimeStampedFieldAngularCoordinatesHermiteInterpolator::TimeStampedFieldAngularCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::utils::AngularDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_84faa23834a0f7e9, a0, a1, a2.this$)) {}

      ::org::orekit::utils::AngularDerivativesFilter TimeStampedFieldAngularCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_33d67d456ec94a0c]));
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
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator, t_TimeStampedFieldAngularCoordinatesHermiteInterpolator, TimeStampedFieldAngularCoordinatesHermiteInterpolator);
      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(const TimeStampedFieldAngularCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self = (t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinatesHermiteInterpolator), module, "TimeStampedFieldAngularCoordinatesHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinatesHermiteInterpolator::wrap_Object(TimeStampedFieldAngularCoordinatesHermiteInterpolator(((t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_of_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_init_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::utils::AngularDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            TimeStampedFieldAngularCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDK", ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinatesHermiteInterpolator(a0, a1, a2));
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

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_getFilter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__parameters_(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinatesHermiteInterpolator_get__filter(t_TimeStampedFieldAngularCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGammaMnsFunction::class$ = NULL;
            jmethodID *FieldGammaMnsFunction::mids$ = NULL;
            bool FieldGammaMnsFunction::live$ = false;

            jclass FieldGammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2aedb65e87d76fe9] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getDerivative_fe798a87bc58eca4] = env->getMethodID(cls, "getDerivative", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getValue_fe798a87bc58eca4] = env->getMethodID(cls, "getValue", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGammaMnsFunction::FieldGammaMnsFunction(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::hipparchus::Field & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2aedb65e87d76fe9, a0, a1.this$, a2, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_fe798a87bc58eca4], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_fe798a87bc58eca4], a0, a1, a2));
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
            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args);
            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data);
            static PyGetSetDef t_FieldGammaMnsFunction__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGammaMnsFunction, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_FieldGammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGammaMnsFunction)[] = {
              { Py_tp_methods, t_FieldGammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_FieldGammaMnsFunction_init_ },
              { Py_tp_getset, t_FieldGammaMnsFunction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGammaMnsFunction, t_FieldGammaMnsFunction, FieldGammaMnsFunction);
            PyObject *t_FieldGammaMnsFunction::wrap_Object(const FieldGammaMnsFunction& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGammaMnsFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGammaMnsFunction), &PY_TYPE_DEF(FieldGammaMnsFunction), module, "FieldGammaMnsFunction", 0);
            }

            void t_FieldGammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "class_", make_descriptor(FieldGammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "wrapfn_", make_descriptor(t_FieldGammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_FieldGammaMnsFunction::wrap_Object(FieldGammaMnsFunction(((t_FieldGammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::Field a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGammaMnsFunction(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
              return NULL;
            }
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data)
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
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertia::class$ = NULL;
      jmethodID *FieldInertia::mids$ = NULL;
      bool FieldInertia::live$ = false;

      jclass FieldInertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_4039efd27b3cc788] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis2_4039efd27b3cc788] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis3_4039efd27b3cc788] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_momentum_49157187b00e5904] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_swap12_e7790dd911f08269] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap13_e7790dd911f08269] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap23_e7790dd911f08269] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/FieldInertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_4039efd27b3cc788]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_4039efd27b3cc788]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_4039efd27b3cc788]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_momentum_49157187b00e5904], a0.this$));
      }

      FieldInertia FieldInertia::swap12() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap12_e7790dd911f08269]));
      }

      FieldInertia FieldInertia::swap13() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap13_e7790dd911f08269]));
      }

      FieldInertia FieldInertia::swap23() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap23_e7790dd911f08269]));
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
      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args);
      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self);
      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg);
      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self);
      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data);
      static PyGetSetDef t_FieldInertia__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis3),
        DECLARE_GET_FIELD(t_FieldInertia, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertia__methods_[] = {
        DECLARE_METHOD(t_FieldInertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, momentum, METH_O),
        DECLARE_METHOD(t_FieldInertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertia)[] = {
        { Py_tp_methods, t_FieldInertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldInertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertia, t_FieldInertia, FieldInertia);
      PyObject *t_FieldInertia::wrap_Object(const FieldInertia& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertia::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertia::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertia), &PY_TYPE_DEF(FieldInertia), module, "FieldInertia", 0);
      }

      void t_FieldInertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "class_", make_descriptor(FieldInertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "wrapfn_", make_descriptor(t_FieldInertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertia::initializeClass, 1)))
          return NULL;
        return t_FieldInertia::wrap_Object(FieldInertia(((t_FieldInertia *) arg)->object.this$));
      }
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldBrouwerLyddanePropagator::class$ = NULL;
        jmethodID *FieldBrouwerLyddanePropagator::mids$ = NULL;
        bool FieldBrouwerLyddanePropagator::live$ = false;

        jclass FieldBrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldBrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9f61505efa86e1e9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_05ddec1783a500e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_cf47dcb3864be453] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_96e0ce7a6f62b45c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_2cae48a329c0e904] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_d9ff80da56518fc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_64d3b5d7fe063a39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_2d676fe6d9799ac3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_ce0444971780ae4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_306fc9258fe51121] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_d07f79dd2beb177d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_ede64f98202da1d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_33746ce00a64faac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_aab384eb0170bee5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_aa385478cab5b181] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_46dbb9293dd124b8] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_computeMeanOrbit_5fa7110471e15e75] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_getM2_b74f83833fdad017] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getM2_fd347811007a6ba3] = env->getMethodID(cls, "getM2", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_1873ea6ef4a88743] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
            mids$[mid_resetInitialState_54d9efbf99822980] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_8d1259686cbbe3a1] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_657957653e5b26ba] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_140b8964300ddedf] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_871885b409df9d57] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_3c05d7291d010c9e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9f61505efa86e1e9, a0.this$, a1.this$, a2)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_05ddec1783a500e6, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cf47dcb3864be453, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_96e0ce7a6f62b45c, a0.this$, a1.this$, a2.this$, a3)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2cae48a329c0e904, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d9ff80da56518fc7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_64d3b5d7fe063a39, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2d676fe6d9799ac3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ce0444971780ae4d, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_306fc9258fe51121, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d07f79dd2beb177d, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ede64f98202da1d4, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_33746ce00a64faac, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10)) {}

        FieldBrouwerLyddanePropagator::FieldBrouwerLyddanePropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_aab384eb0170bee5, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_aa385478cab5b181], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_46dbb9293dd124b8], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_5fa7110471e15e75], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        jdouble FieldBrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_b74f83833fdad017]);
        }

        jdouble FieldBrouwerLyddanePropagator::getM2(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_fd347811007a6ba3], a0.this$);
        }

        ::java::util::List FieldBrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        ::org::orekit::orbits::FieldKeplerianOrbit FieldBrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_1873ea6ef4a88743], a0.this$, a1.this$));
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_54d9efbf99822980], a0.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8d1259686cbbe3a1], a0.this$, a1.this$);
        }

        void FieldBrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_657957653e5b26ba], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_FieldBrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldBrouwerLyddanePropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getM2, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldBrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_FieldBrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_FieldBrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_FieldBrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldBrouwerLyddanePropagator, t_FieldBrouwerLyddanePropagator, FieldBrouwerLyddanePropagator);
        PyObject *t_FieldBrouwerLyddanePropagator::wrap_Object(const FieldBrouwerLyddanePropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBrouwerLyddanePropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBrouwerLyddanePropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBrouwerLyddanePropagator *self = (t_FieldBrouwerLyddanePropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBrouwerLyddanePropagator), &PY_TYPE_DEF(FieldBrouwerLyddanePropagator), module, "FieldBrouwerLyddanePropagator", 0);
        }

        void t_FieldBrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "class_", make_descriptor(FieldBrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_FieldBrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_FieldBrouwerLyddanePropagator::wrap_Object(FieldBrouwerLyddanePropagator(((t_FieldBrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_of_(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBrouwerLyddanePropagator_init_(t_FieldBrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              jdouble a4;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              jdouble a5;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              FieldBrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDKDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = FieldBrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldBrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldBrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getM2(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getM2(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getM2", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_getParametersDrivers(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_propagateOrbit(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldKeplerianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_resetInitialState(t_FieldBrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldBrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldBrouwerLyddanePropagator_get__parameters_(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__m2(t_FieldBrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldBrouwerLyddanePropagator_get__parametersDrivers(t_FieldBrouwerLyddanePropagator *self, void *data)
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
#include "org/hipparchus/ode/AbstractParameterizable.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractParameterizable::class$ = NULL;
      jmethodID *AbstractParameterizable::mids$ = NULL;
      bool AbstractParameterizable::live$ = false;

      jclass AbstractParameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractParameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_complainIfNotSupported_734b91ac30d5f9b4] = env->getMethodID(cls, "complainIfNotSupported", "(Ljava/lang/String;)V");
          mids$[mid_getParametersNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_cde6b28e15c96b75] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractParameterizable::complainIfNotSupported(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_complainIfNotSupported_734b91ac30d5f9b4], a0.this$);
      }

      ::java::util::List AbstractParameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_e62d3bb06d56d7e3]));
      }

      jboolean AbstractParameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_cde6b28e15c96b75], a0.this$);
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
      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self);
      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data);
      static PyGetSetDef t_AbstractParameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractParameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractParameterizable__methods_[] = {
        DECLARE_METHOD(t_AbstractParameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, complainIfNotSupported, METH_O),
        DECLARE_METHOD(t_AbstractParameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractParameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractParameterizable)[] = {
        { Py_tp_methods, t_AbstractParameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractParameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractParameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractParameterizable, t_AbstractParameterizable, AbstractParameterizable);

      void t_AbstractParameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractParameterizable), &PY_TYPE_DEF(AbstractParameterizable), module, "AbstractParameterizable", 0);
      }

      void t_AbstractParameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "class_", make_descriptor(AbstractParameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "wrapfn_", make_descriptor(t_AbstractParameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractParameterizable::initializeClass, 1)))
          return NULL;
        return t_AbstractParameterizable::wrap_Object(AbstractParameterizable(((t_AbstractParameterizable *) arg)->object.this$));
      }
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractParameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.complainIfNotSupported(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "complainIfNotSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Iterator::class$ = NULL;
    jmethodID *Iterator::mids$ = NULL;
    bool Iterator::live$ = false;

    jclass Iterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Iterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_hasNext_9ab94ac1dc23b105] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_next_541690f9ee81d3ad] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_remove_a1fa5dae97ea5ed2] = env->getMethodID(cls, "remove", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Iterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_9ab94ac1dc23b105]);
    }

    ::java::lang::Object Iterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_541690f9ee81d3ad]));
    }

    void Iterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args);
    static PyObject *t_Iterator_hasNext(t_Iterator *self);
    static PyObject *t_Iterator_next(t_Iterator *self);
    static PyObject *t_Iterator_remove(t_Iterator *self);
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data);
    static PyGetSetDef t_Iterator__fields_[] = {
      DECLARE_GET_FIELD(t_Iterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterator__methods_[] = {
      DECLARE_METHOD(t_Iterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterator, hasNext, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, next, METH_NOARGS),
      DECLARE_METHOD(t_Iterator, remove, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterator)[] = {
      { Py_tp_methods, t_Iterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterator, t_Iterator, Iterator);
    PyObject *t_Iterator::wrap_Object(const Iterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterator *self = (t_Iterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterator::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterator), &PY_TYPE_DEF(Iterator), module, "Iterator", 0);
    }

    void t_Iterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "class_", make_descriptor(Iterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "wrapfn_", make_descriptor(t_Iterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterator::initializeClass, 1)))
        return NULL;
      return t_Iterator::wrap_Object(Iterator(((t_Iterator *) arg)->object.this$));
    }
    static PyObject *t_Iterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterator_of_(t_Iterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterator_hasNext(t_Iterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasNext());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Iterator_next(t_Iterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.next());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Iterator_remove(t_Iterator *self)
    {
      OBJ_CALL(self->object.remove());
      Py_RETURN_NONE;
    }
    static PyObject *t_Iterator_get__parameters_(t_Iterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder$InterpolationFactory::class$ = NULL;
      jmethodID *WaypointPVBuilder$InterpolationFactory::mids$ = NULL;
      bool WaypointPVBuilder$InterpolationFactory::live$ = false;

      jclass WaypointPVBuilder$InterpolationFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder$InterpolationFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_f9ae23f2f622a163] = env->getMethodID(cls, "create", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder$InterpolationFactory::create(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::bodies::GeodeticPoint & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_create_f9ae23f2f622a163], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args);

      static PyMethodDef t_WaypointPVBuilder$InterpolationFactory__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder$InterpolationFactory, create, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder$InterpolationFactory)[] = {
        { Py_tp_methods, t_WaypointPVBuilder$InterpolationFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder$InterpolationFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder$InterpolationFactory, t_WaypointPVBuilder$InterpolationFactory, WaypointPVBuilder$InterpolationFactory);

      void t_WaypointPVBuilder$InterpolationFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder$InterpolationFactory), &PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory), module, "WaypointPVBuilder$InterpolationFactory", 0);
      }

      void t_WaypointPVBuilder$InterpolationFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "class_", make_descriptor(WaypointPVBuilder$InterpolationFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "wrapfn_", make_descriptor(t_WaypointPVBuilder$InterpolationFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder$InterpolationFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder$InterpolationFactory::wrap_Object(WaypointPVBuilder$InterpolationFactory(((t_WaypointPVBuilder$InterpolationFactory *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder$InterpolationFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder$InterpolationFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_WaypointPVBuilder$InterpolationFactory_create(t_WaypointPVBuilder$InterpolationFactory *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a3((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.create(a0, a1, a2, a3, a4));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "create", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTTesseralContext::class$ = NULL;
            jmethodID *FieldDSSTTesseralContext::mids$ = NULL;
            bool FieldDSSTTesseralContext::live$ = false;

            jclass FieldDSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_81520b552cb3fa26] = env->getMethodID(cls, "getAx2oA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_81520b552cb3fa26] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_81520b552cb3fa26] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi_81520b552cb3fa26] = env->getMethodID(cls, "getChi", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi2_81520b552cb3fa26] = env->getMethodID(cls, "getChi2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_81520b552cb3fa26] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getE2_81520b552cb3fa26] = env->getMethodID(cls, "getE2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMoa_81520b552cb3fa26] = env->getMethodID(cls, "getMoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_81520b552cb3fa26] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbitPeriod_81520b552cb3fa26] = env->getMethodID(cls, "getOrbitPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRatio_81520b552cb3fa26] = env->getMethodID(cls, "getRatio", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_81520b552cb3fa26] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTheta_81520b552cb3fa26] = env->getMethodID(cls, "getTheta", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getAx2oA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAx2oA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getE2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMoa_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOrbitPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOrbitPeriod_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRatio() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRatio_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getTheta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTheta_81520b552cb3fa26]));
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
            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args);
            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data);
            static PyGetSetDef t_FieldDSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, theta),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTTesseralContext)[] = {
              { Py_tp_methods, t_FieldDSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTTesseralContext, t_FieldDSSTTesseralContext, FieldDSSTTesseralContext);
            PyObject *t_FieldDSSTTesseralContext::wrap_Object(const FieldDSSTTesseralContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTTesseralContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTTesseralContext), &PY_TYPE_DEF(FieldDSSTTesseralContext), module, "FieldDSSTTesseralContext", 0);
            }

            void t_FieldDSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "class_", make_descriptor(FieldDSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "wrapfn_", make_descriptor(t_FieldDSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTTesseralContext::wrap_Object(FieldDSSTTesseralContext(((t_FieldDSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAx2oA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getE2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRatio());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTheta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAx2oA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getE2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRatio());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTheta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *ComplexUnivariateIntegrator::mids$ = NULL;
      bool ComplexUnivariateIntegrator::live$ = false;

      jclass ComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9ca2632f9ce274a9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/UnivariateIntegrator;)V");
          mids$[mid_integrate_d17dd63a7bac258e] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_integrate_e9e2d176e3b36b59] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexUnivariateIntegrator::ComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ca2632f9ce274a9, a0.this$)) {}

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_d17dd63a7bac258e], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::Complex ComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_integrate_e9e2d176e3b36b59], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args);

      static PyMethodDef t_ComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_ComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_ComplexUnivariateIntegrator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexUnivariateIntegrator, t_ComplexUnivariateIntegrator, ComplexUnivariateIntegrator);

      void t_ComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexUnivariateIntegrator), &PY_TYPE_DEF(ComplexUnivariateIntegrator), module, "ComplexUnivariateIntegrator", 0);
      }

      void t_ComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "class_", make_descriptor(ComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_ComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_ComplexUnivariateIntegrator::wrap_Object(ComplexUnivariateIntegrator(((t_ComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexUnivariateIntegrator_init_(t_ComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::UnivariateIntegrator a0((jobject) NULL);
        ComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0))
        {
          INT_CALL(object = ComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ComplexUnivariateIntegrator_integrate(t_ComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKk[k", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::Complex a2((jobject) NULL);
            ::org::hipparchus::complex::Complex a3((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "IKkk", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmOrbitCorrectionHeader::class$ = NULL;
              jmethodID *RtcmOrbitCorrectionHeader::mids$ = NULL;
              bool RtcmOrbitCorrectionHeader::live$ = false;

              jclass RtcmOrbitCorrectionHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteReferenceDatum_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteReferenceDatum", "()I");
                  mids$[mid_setSatelliteReferenceDatum_44ed599e93e8a30c] = env->getMethodID(cls, "setSatelliteReferenceDatum", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmOrbitCorrectionHeader::RtcmOrbitCorrectionHeader() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint RtcmOrbitCorrectionHeader::getSatelliteReferenceDatum() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteReferenceDatum_55546ef6a647f39b]);
              }

              void RtcmOrbitCorrectionHeader::setSatelliteReferenceDatum(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteReferenceDatum_44ed599e93e8a30c], a0);
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
            namespace correction {
              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self);
              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg);
              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data);
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmOrbitCorrectionHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmOrbitCorrectionHeader, satelliteReferenceDatum),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmOrbitCorrectionHeader__methods_[] = {
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, getSatelliteReferenceDatum, METH_NOARGS),
                DECLARE_METHOD(t_RtcmOrbitCorrectionHeader, setSatelliteReferenceDatum, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmOrbitCorrectionHeader)[] = {
                { Py_tp_methods, t_RtcmOrbitCorrectionHeader__methods_ },
                { Py_tp_init, (void *) t_RtcmOrbitCorrectionHeader_init_ },
                { Py_tp_getset, t_RtcmOrbitCorrectionHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmOrbitCorrectionHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader),
                NULL
              };

              DEFINE_TYPE(RtcmOrbitCorrectionHeader, t_RtcmOrbitCorrectionHeader, RtcmOrbitCorrectionHeader);

              void t_RtcmOrbitCorrectionHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmOrbitCorrectionHeader), &PY_TYPE_DEF(RtcmOrbitCorrectionHeader), module, "RtcmOrbitCorrectionHeader", 0);
              }

              void t_RtcmOrbitCorrectionHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "class_", make_descriptor(RtcmOrbitCorrectionHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "wrapfn_", make_descriptor(t_RtcmOrbitCorrectionHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmOrbitCorrectionHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 1)))
                  return NULL;
                return t_RtcmOrbitCorrectionHeader::wrap_Object(RtcmOrbitCorrectionHeader(((t_RtcmOrbitCorrectionHeader *) arg)->object.this$));
              }
              static PyObject *t_RtcmOrbitCorrectionHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmOrbitCorrectionHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmOrbitCorrectionHeader_init_(t_RtcmOrbitCorrectionHeader *self, PyObject *args, PyObject *kwds)
              {
                RtcmOrbitCorrectionHeader object((jobject) NULL);

                INT_CALL(object = RtcmOrbitCorrectionHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_getSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_setSatelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteReferenceDatum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteReferenceDatum", arg);
                return NULL;
              }

              static PyObject *t_RtcmOrbitCorrectionHeader_get__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteReferenceDatum());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmOrbitCorrectionHeader_set__satelliteReferenceDatum(t_RtcmOrbitCorrectionHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteReferenceDatum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteReferenceDatum", arg);
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
#include "org/orekit/files/ccsds/section/PythonAbstractWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonAbstractWriter::class$ = NULL;
          jmethodID *PythonAbstractWriter::mids$ = NULL;
          bool PythonAbstractWriter::live$ = false;

          jclass PythonAbstractWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonAbstractWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_intArrayToString_e06025bc23ba70af] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractWriter::PythonAbstractWriter(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

          void PythonAbstractWriter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          ::java::lang::String PythonAbstractWriter::intArrayToString(const JArray< jint > & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_intArrayToString_e06025bc23ba70af], a0.this$));
          }

          jlong PythonAbstractWriter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonAbstractWriter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self);
          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg);
          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args);
          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data);
          static PyGetSetDef t_PythonAbstractWriter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractWriter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractWriter__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractWriter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractWriter, intArrayToString, METH_O),
            DECLARE_METHOD(t_PythonAbstractWriter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractWriter)[] = {
            { Py_tp_methods, t_PythonAbstractWriter__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractWriter_init_ },
            { Py_tp_getset, t_PythonAbstractWriter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractWriter)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
            NULL
          };

          DEFINE_TYPE(PythonAbstractWriter, t_PythonAbstractWriter, PythonAbstractWriter);

          void t_PythonAbstractWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractWriter), &PY_TYPE_DEF(PythonAbstractWriter), module, "PythonAbstractWriter", 1);
          }

          void t_PythonAbstractWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "class_", make_descriptor(PythonAbstractWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "wrapfn_", make_descriptor(t_PythonAbstractWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractWriter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractWriter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonAbstractWriter_pythonDecRef0 },
              { "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonAbstractWriter_writeContent1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractWriter::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractWriter::wrap_Object(PythonAbstractWriter(((t_PythonAbstractWriter *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractWriter_init_(t_PythonAbstractWriter *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            PythonAbstractWriter object((jobject) NULL);

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              INT_CALL(object = PythonAbstractWriter(a0, a1));
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

          static PyObject *t_PythonAbstractWriter_finalize(t_PythonAbstractWriter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractWriter_intArrayToString(t_PythonAbstractWriter *self, PyObject *arg)
          {
            JArray< jint > a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "[I", &a0))
            {
              OBJ_CALL(result = self->object.intArrayToString(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intArrayToString", arg);
            return NULL;
          }

          static PyObject *t_PythonAbstractWriter_pythonExtension(t_PythonAbstractWriter *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractWriter_writeContent1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractWriter::mids$[PythonAbstractWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
            PyObject *result = PyObject_CallMethod(obj, "writeContent", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractWriter_get__self(t_PythonAbstractWriter *self, void *data)
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
#include "org/orekit/propagation/analytical/EcksteinHechlerPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *EcksteinHechlerPropagator::class$ = NULL;
        jmethodID *EcksteinHechlerPropagator::mids$ = NULL;
        bool EcksteinHechlerPropagator::live$ = false;

        jclass EcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/EcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d3fb9e6c8f7bc2ad] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_39b04a826c6cca6b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_ad6825e713d771e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_15b032b53d9d04df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_14f3f383ac8eb751] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_b149cbd1639c6edc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_205af0b682407804] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_6290118b0dd463b3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_aa6e6da4b4001fdc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_c2b0e265375635a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_f485802d763f13ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_a5f830cc0aa5c9db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_b5d1a67acc742c54] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_d193b26bab79e1e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_8585b06d941de09d] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_18a84376ed44f182] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_computeMeanOrbit_7375dddaf35b0ea8] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/CircularOrbit;");
            mids$[mid_getCk0_25e1757a36c4dde2] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getReferenceRadius_b74f83833fdad017] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_9fa63a6e974cee23] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/CartesianOrbit;");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_5cc6a7fd8ae54bf5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_37269bbd67e095aa] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_resetIntermediateState_3e9d696c5e44e513] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d3fb9e6c8f7bc2ad, a0.this$, a1.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_39b04a826c6cca6b, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_ad6825e713d771e2, a0.this$, a1, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_15b032b53d9d04df, a0.this$, a1.this$, a2.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_14f3f383ac8eb751, a0.this$, a1.this$, a2, a3.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b149cbd1639c6edc, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_205af0b682407804, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6290118b0dd463b3, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_aa6e6da4b4001fdc, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c2b0e265375635a9, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f485802d763f13ed, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a5f830cc0aa5c9db, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_b5d1a67acc742c54, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$)) {}

        EcksteinHechlerPropagator::EcksteinHechlerPropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d193b26bab79e1e6, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_8585b06d941de09d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_18a84376ed44f182], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::CircularOrbit EcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::CircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_7375dddaf35b0ea8], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > EcksteinHechlerPropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_25e1757a36c4dde2]));
        }

        jdouble EcksteinHechlerPropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        jdouble EcksteinHechlerPropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_b74f83833fdad017]);
        }

        ::org::orekit::orbits::CartesianOrbit EcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_9fa63a6e974cee23], a0.this$));
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_5cc6a7fd8ae54bf5], a0.this$, a1.this$);
        }

        void EcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_37269bbd67e095aa], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self);
        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg);
        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data);
        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_EcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, ck0),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, mu),
          DECLARE_GET_FIELD(t_EcksteinHechlerPropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_EcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_EcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_EcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_EcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_EcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(EcksteinHechlerPropagator, t_EcksteinHechlerPropagator, EcksteinHechlerPropagator);

        void t_EcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(EcksteinHechlerPropagator), &PY_TYPE_DEF(EcksteinHechlerPropagator), module, "EcksteinHechlerPropagator", 0);
        }

        void t_EcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "class_", make_descriptor(EcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_EcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_EcksteinHechlerPropagator::wrap_Object(EcksteinHechlerPropagator(((t_EcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_EcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EcksteinHechlerPropagator_init_(t_EcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              EcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDDKDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = EcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_EcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::EcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_getCk0(t_EcksteinHechlerPropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_getMu(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_getReferenceRadius(t_EcksteinHechlerPropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EcksteinHechlerPropagator_propagateOrbit(t_EcksteinHechlerPropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_EcksteinHechlerPropagator_resetInitialState(t_EcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(EcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__ck0(t_EcksteinHechlerPropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_EcksteinHechlerPropagator_get__mu(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EcksteinHechlerPropagator_get__referenceRadius(t_EcksteinHechlerPropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *RecordType::class$ = NULL;
          jmethodID *RecordType::mids$ = NULL;
          bool RecordType::live$ = false;
          RecordType *RecordType::CAS = NULL;
          RecordType *RecordType::NET = NULL;
          RecordType *RecordType::STR = NULL;

          jclass RecordType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/RecordType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_6885da50d01b66fa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_values_e4d1abc6b7244492] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/RecordType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CAS = new RecordType(env->getStaticObjectField(cls, "CAS", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              NET = new RecordType(env->getStaticObjectField(cls, "NET", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              STR = new RecordType(env->getStaticObjectField(cls, "STR", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordType RecordType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RecordType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6885da50d01b66fa], a0.this$));
          }

          JArray< RecordType > RecordType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RecordType >(env->callStaticObjectMethod(cls, mids$[mid_values_e4d1abc6b7244492]));
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
          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args);
          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RecordType_values(PyTypeObject *type);
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data);
          static PyGetSetDef t_RecordType__fields_[] = {
            DECLARE_GET_FIELD(t_RecordType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordType__methods_[] = {
            DECLARE_METHOD(t_RecordType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RecordType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RecordType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordType)[] = {
            { Py_tp_methods, t_RecordType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RecordType, t_RecordType, RecordType);
          PyObject *t_RecordType::wrap_Object(const RecordType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RecordType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RecordType::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordType), &PY_TYPE_DEF(RecordType), module, "RecordType", 0);
          }

          void t_RecordType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "class_", make_descriptor(RecordType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "wrapfn_", make_descriptor(t_RecordType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RecordType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "CAS", make_descriptor(t_RecordType::wrap_Object(*RecordType::CAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "NET", make_descriptor(t_RecordType::wrap_Object(*RecordType::NET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "STR", make_descriptor(t_RecordType::wrap_Object(*RecordType::STR)));
          }

          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordType::initializeClass, 1)))
              return NULL;
            return t_RecordType::wrap_Object(RecordType(((t_RecordType *) arg)->object.this$));
          }
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RecordType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::valueOf(a0));
              return t_RecordType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RecordType_values(PyTypeObject *type)
          {
            JArray< RecordType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::values());
            return JArray<jobject>(result.this$).wrap(t_RecordType::wrap_jobject);
          }
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Tdm::class$ = NULL;
            jmethodID *Tdm::mids$ = NULL;
            bool Tdm::live$ = false;
            ::java::lang::String *Tdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Tdm::ROOT = NULL;

            jclass Tdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Tdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ac37bee91ea1886e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Tdm::Tdm(const ::org::orekit::files::ccsds::ndm::tdm::TdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_ac37bee91ea1886e, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args);
            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data);
            static PyGetSetDef t_Tdm__fields_[] = {
              DECLARE_GET_FIELD(t_Tdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Tdm__methods_[] = {
              DECLARE_METHOD(t_Tdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Tdm, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Tdm)[] = {
              { Py_tp_methods, t_Tdm__methods_ },
              { Py_tp_init, (void *) t_Tdm_init_ },
              { Py_tp_getset, t_Tdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Tdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Tdm, t_Tdm, Tdm);
            PyObject *t_Tdm::wrap_Object(const Tdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Tdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Tdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Tdm *self = (t_Tdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Tdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Tdm), &PY_TYPE_DEF(Tdm), module, "Tdm", 0);
            }

            void t_Tdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "class_", make_descriptor(Tdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "wrapfn_", make_descriptor(t_Tdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Tdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Tdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Tdm), "ROOT", make_descriptor(j2p(*Tdm::ROOT)));
            }

            static PyObject *t_Tdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Tdm::initializeClass, 1)))
                return NULL;
              return t_Tdm::wrap_Object(Tdm(((t_Tdm *) arg)->object.this$));
            }
            static PyObject *t_Tdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Tdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Tdm_of_(t_Tdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Tdm_init_(t_Tdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Tdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::tdm::TdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Tdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(TdmHeader);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_Tdm_get__parameters_(t_Tdm *self, void *data)
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
#include "org/orekit/data/GzipFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *GzipFilter::class$ = NULL;
      jmethodID *GzipFilter::mids$ = NULL;
      bool GzipFilter::live$ = false;

      jclass GzipFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/GzipFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_bbc30294b1b0b691] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GzipFilter::GzipFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::orekit::data::DataSource GzipFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_bbc30294b1b0b691], a0.this$));
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
      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg);

      static PyMethodDef t_GzipFilter__methods_[] = {
        DECLARE_METHOD(t_GzipFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GzipFilter)[] = {
        { Py_tp_methods, t_GzipFilter__methods_ },
        { Py_tp_init, (void *) t_GzipFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GzipFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GzipFilter, t_GzipFilter, GzipFilter);

      void t_GzipFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(GzipFilter), &PY_TYPE_DEF(GzipFilter), module, "GzipFilter", 0);
      }

      void t_GzipFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "class_", make_descriptor(GzipFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "wrapfn_", make_descriptor(t_GzipFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GzipFilter::initializeClass, 1)))
          return NULL;
        return t_GzipFilter::wrap_Object(GzipFilter(((t_GzipFilter *) arg)->object.this$));
      }
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GzipFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds)
      {
        GzipFilter object((jobject) NULL);

        INT_CALL(object = GzipFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleBased::class$ = NULL;
      jmethodID *PositionAngleBased::mids$ = NULL;
      bool PositionAngleBased::live$ = false;

      jclass PositionAngleBased::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleBased");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_26ab66f50d4bfc93] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/PositionAngleBased;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::PositionAngleType PositionAngleBased::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      jboolean PositionAngleBased::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      PositionAngleBased PositionAngleBased::removeRates() const
      {
        return PositionAngleBased(env->callObjectMethod(this$, mids$[mid_removeRates_26ab66f50d4bfc93]));
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
      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data);
      static PyGetSetDef t_PositionAngleBased__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleBased, cachedPositionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleBased__methods_[] = {
        DECLARE_METHOD(t_PositionAngleBased, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, removeRates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleBased)[] = {
        { Py_tp_methods, t_PositionAngleBased__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleBased__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleBased)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PositionAngleBased, t_PositionAngleBased, PositionAngleBased);

      void t_PositionAngleBased::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleBased), &PY_TYPE_DEF(PositionAngleBased), module, "PositionAngleBased", 0);
      }

      void t_PositionAngleBased::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "class_", make_descriptor(PositionAngleBased::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "wrapfn_", make_descriptor(t_PositionAngleBased::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleBased::initializeClass, 1)))
          return NULL;
        return t_PositionAngleBased::wrap_Object(PositionAngleBased(((t_PositionAngleBased *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleBased::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self)
      {
        PositionAngleBased result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_PositionAngleBased::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
