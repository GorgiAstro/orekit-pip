#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "org/orekit/gnss/metric/parser/IgsSsrDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *IgsSsrDataField::class$ = NULL;
          jmethodID *IgsSsrDataField::mids$ = NULL;
          bool IgsSsrDataField::live$ = false;
          IgsSsrDataField *IgsSsrDataField::IDF001 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF002 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF003 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF004 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF005 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF006 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF007 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF008 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF009 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF010 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF011 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF012 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF013 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF014 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF015 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF016 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF017 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF018 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF019 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF020 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF021 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF022 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF023 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF024 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF025 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF026 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF027 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF028 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF029 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF030 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF031 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF032 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF033 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF034 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF035 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF036 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF037 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF038 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF039 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF040 = NULL;
          IgsSsrDataField *IgsSsrDataField::IDF041 = NULL;

          jclass IgsSsrDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/IgsSsrDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_ae9fa00729b31d7a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");
              mids$[mid_values_b54889a9109650f6] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/IgsSsrDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDF001 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF001", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF002 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF002", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF003 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF003", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF004 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF004", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF005 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF005", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF006 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF006", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF007 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF007", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF008 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF008", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF009 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF009", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF010 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF010", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF011 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF011", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF012 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF012", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF013 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF013", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF014 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF014", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF015 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF015", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF016 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF016", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF017 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF017", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF018 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF018", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF019 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF019", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF020 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF020", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF021 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF021", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF022 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF022", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF023 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF023", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF024 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF024", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF025 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF025", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF026 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF026", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF027 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF027", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF028 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF028", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF029 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF029", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF030 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF030", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF031 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF031", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF032 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF032", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF033 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF033", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF034 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF034", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF035 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF035", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF036 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF036", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF037 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF037", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF038 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF038", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF039 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF039", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF040 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF040", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              IDF041 = new IgsSsrDataField(env->getStaticObjectField(cls, "IDF041", "Lorg/orekit/gnss/metric/parser/IgsSsrDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IgsSsrDataField IgsSsrDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IgsSsrDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ae9fa00729b31d7a], a0.this$));
          }

          JArray< IgsSsrDataField > IgsSsrDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IgsSsrDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_b54889a9109650f6]));
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
          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args);
          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type);
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data);
          static PyGetSetDef t_IgsSsrDataField__fields_[] = {
            DECLARE_GET_FIELD(t_IgsSsrDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IgsSsrDataField__methods_[] = {
            DECLARE_METHOD(t_IgsSsrDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_IgsSsrDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IgsSsrDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IgsSsrDataField)[] = {
            { Py_tp_methods, t_IgsSsrDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IgsSsrDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IgsSsrDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IgsSsrDataField, t_IgsSsrDataField, IgsSsrDataField);
          PyObject *t_IgsSsrDataField::wrap_Object(const IgsSsrDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IgsSsrDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IgsSsrDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IgsSsrDataField *self = (t_IgsSsrDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IgsSsrDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(IgsSsrDataField), &PY_TYPE_DEF(IgsSsrDataField), module, "IgsSsrDataField", 0);
          }

          void t_IgsSsrDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "class_", make_descriptor(IgsSsrDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "wrapfn_", make_descriptor(t_IgsSsrDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(IgsSsrDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF001", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF002", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF003", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF004", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF004)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF005", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF006", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF007", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF008", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF009", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF010", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF010)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF011", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF011)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF012", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF012)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF013", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF013)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF014", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF015", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF015)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF016", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF016)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF017", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF017)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF018", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF018)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF019", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF020", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF021", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF021)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF022", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF022)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF023", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF023)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF024", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF024)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF025", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF025)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF026", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF026)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF027", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF027)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF028", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF028)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF029", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF029)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF030", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF030)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF031", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF031)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF032", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF032)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF033", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF033)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF034", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF034)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF035", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF035)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF036", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF036)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF037", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF037)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF038", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF039", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF039)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF040", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IgsSsrDataField), "IDF041", make_descriptor(t_IgsSsrDataField::wrap_Object(*IgsSsrDataField::IDF041)));
          }

          static PyObject *t_IgsSsrDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IgsSsrDataField::initializeClass, 1)))
              return NULL;
            return t_IgsSsrDataField::wrap_Object(IgsSsrDataField(((t_IgsSsrDataField *) arg)->object.this$));
          }
          static PyObject *t_IgsSsrDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IgsSsrDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IgsSsrDataField_of_(t_IgsSsrDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IgsSsrDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IgsSsrDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::valueOf(a0));
              return t_IgsSsrDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IgsSsrDataField_values(PyTypeObject *type)
          {
            JArray< IgsSsrDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::IgsSsrDataField::values());
            return JArray<jobject>(result.this$).wrap(t_IgsSsrDataField::wrap_jobject);
          }
          static PyObject *t_IgsSsrDataField_get__parameters_(t_IgsSsrDataField *self, void *data)
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
#include "org/orekit/geometry/fov/CircularFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *CircularFieldOfView::class$ = NULL;
        jmethodID *CircularFieldOfView::mids$ = NULL;
        bool CircularFieldOfView::live$ = false;

        jclass CircularFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/CircularFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5eae4e7c6666a2f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");
            mids$[mid_getHalfAperture_456d9a2f64d6b28d] = env->getMethodID(cls, "getHalfAperture", "()D");
            mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_afd63a09f6d01e4c] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_5f993a721a1d8c59] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CircularFieldOfView::CircularFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_b5eae4e7c6666a2f, a0.this$, a1, a2)) {}

        jdouble CircularFieldOfView::getHalfAperture() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfAperture_456d9a2f64d6b28d]);
        }

        jdouble CircularFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_9e70aa9759fb6e3e], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D CircularFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_afd63a09f6d01e4c], a0.this$));
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
        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self);
        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data);
        static PyGetSetDef t_CircularFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_CircularFieldOfView, halfAperture),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CircularFieldOfView__methods_[] = {
          DECLARE_METHOD(t_CircularFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, getHalfAperture, METH_NOARGS),
          DECLARE_METHOD(t_CircularFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_CircularFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CircularFieldOfView)[] = {
          { Py_tp_methods, t_CircularFieldOfView__methods_ },
          { Py_tp_init, (void *) t_CircularFieldOfView_init_ },
          { Py_tp_getset, t_CircularFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CircularFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(CircularFieldOfView, t_CircularFieldOfView, CircularFieldOfView);

        void t_CircularFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(CircularFieldOfView), &PY_TYPE_DEF(CircularFieldOfView), module, "CircularFieldOfView", 0);
        }

        void t_CircularFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "class_", make_descriptor(CircularFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "wrapfn_", make_descriptor(t_CircularFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CircularFieldOfView::initializeClass, 1)))
            return NULL;
          return t_CircularFieldOfView::wrap_Object(CircularFieldOfView(((t_CircularFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CircularFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          CircularFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = CircularFieldOfView(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args)
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

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGHmsjPolynomials.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_ce3c1e80a7aa5988] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getGmsj_02688424bbdad522] = env->getMethodID(cls, "getGmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHmsj_02688424bbdad522] = env->getMethodID(cls, "getHmsj", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdAlpha_02688424bbdad522] = env->getMethodID(cls, "getdGmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdBeta_02688424bbdad522] = env->getMethodID(cls, "getdGmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdh_02688424bbdad522] = env->getMethodID(cls, "getdGmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdGmsdk_02688424bbdad522] = env->getMethodID(cls, "getdGmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdAlpha_02688424bbdad522] = env->getMethodID(cls, "getdHmsdAlpha", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdBeta_02688424bbdad522] = env->getMethodID(cls, "getdHmsdBeta", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdh_02688424bbdad522] = env->getMethodID(cls, "getdHmsdh", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdHmsdk_02688424bbdad522] = env->getMethodID(cls, "getdHmsdk", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGHmsjPolynomials::FieldGHmsjPolynomials(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce3c1e80a7aa5988, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGmsj_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHmsj_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdAlpha_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdBeta_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdh_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdGmsdk_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdAlpha_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdBeta_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdh_02688424bbdad522], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdHmsdk_02688424bbdad522], a0, a1, a2));
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
#include "org/hipparchus/analysis/integration/FieldTrapezoidIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldTrapezoidIntegrator::class$ = NULL;
        jmethodID *FieldTrapezoidIntegrator::mids$ = NULL;
        bool FieldTrapezoidIntegrator::live$ = false;
        jint FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldTrapezoidIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldTrapezoidIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_84b3e2e5209296cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_e6d4d3215c30992a] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRAPEZOID_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "TRAPEZOID_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

        FieldTrapezoidIntegrator::FieldTrapezoidIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_84b3e2e5209296cd, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args);
        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data);
        static PyGetSetDef t_FieldTrapezoidIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTrapezoidIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTrapezoidIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTrapezoidIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTrapezoidIntegrator)[] = {
          { Py_tp_methods, t_FieldTrapezoidIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldTrapezoidIntegrator_init_ },
          { Py_tp_getset, t_FieldTrapezoidIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTrapezoidIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldTrapezoidIntegrator, t_FieldTrapezoidIntegrator, FieldTrapezoidIntegrator);
        PyObject *t_FieldTrapezoidIntegrator::wrap_Object(const FieldTrapezoidIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTrapezoidIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTrapezoidIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTrapezoidIntegrator *self = (t_FieldTrapezoidIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTrapezoidIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTrapezoidIntegrator), &PY_TYPE_DEF(FieldTrapezoidIntegrator), module, "FieldTrapezoidIntegrator", 0);
        }

        void t_FieldTrapezoidIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "class_", make_descriptor(FieldTrapezoidIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "wrapfn_", make_descriptor(t_FieldTrapezoidIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldTrapezoidIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrapezoidIntegrator), "TRAPEZOID_MAX_ITERATIONS_COUNT", make_descriptor(FieldTrapezoidIntegrator::TRAPEZOID_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldTrapezoidIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldTrapezoidIntegrator::wrap_Object(FieldTrapezoidIntegrator(((t_FieldTrapezoidIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldTrapezoidIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTrapezoidIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTrapezoidIntegrator_of_(t_FieldTrapezoidIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldTrapezoidIntegrator_init_(t_FieldTrapezoidIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldTrapezoidIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldTrapezoidIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldTrapezoidIntegrator_get__parameters_(t_FieldTrapezoidIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/J2DifferentialEffect.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *J2DifferentialEffect::class$ = NULL;
        jmethodID *J2DifferentialEffect::mids$ = NULL;
        bool J2DifferentialEffect::live$ = false;

        jclass J2DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/J2DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_968c8a684a653e35] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_9afa102c5fb63730] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_e68860fefcd1a7f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZDDD)V");
            mids$[mid_init$_de64d3d9f52e8f34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZDDD)V");
            mids$[mid_apply_4500563ec80cd676] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_81fc6fb6078d2aa7] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_968c8a684a653e35, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9afa102c5fb63730, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e68860fefcd1a7f2, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de64d3d9f52e8f34, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        ::org::orekit::orbits::Orbit J2DifferentialEffect::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_4500563ec80cd676], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState J2DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_81fc6fb6078d2aa7], a0.this$));
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
        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds);
        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args);

        static PyMethodDef t_J2DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_J2DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(J2DifferentialEffect)[] = {
          { Py_tp_methods, t_J2DifferentialEffect__methods_ },
          { Py_tp_init, (void *) t_J2DifferentialEffect_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(J2DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(J2DifferentialEffect, t_J2DifferentialEffect, J2DifferentialEffect);

        void t_J2DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(J2DifferentialEffect), &PY_TYPE_DEF(J2DifferentialEffect), module, "J2DifferentialEffect", 0);
        }

        void t_J2DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "class_", make_descriptor(J2DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "wrapfn_", make_descriptor(t_J2DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, J2DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_J2DifferentialEffect::wrap_Object(J2DifferentialEffect(((t_J2DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, J2DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarN::class$ = NULL;
          jmethodID *FieldCopolarN::mids$ = NULL;
          bool FieldCopolarN::live$ = false;

          jclass FieldCopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_e6d4d3215c30992a] = env->getMethodID(cls, "cn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dn_e6d4d3215c30992a] = env->getMethodID(cls, "dn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sn_e6d4d3215c30992a] = env->getMethodID(cls, "sn", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::cn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cn_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::dn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dn_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::sn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sn_e6d4d3215c30992a]));
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
          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args);
          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data);
          static PyGetSetDef t_FieldCopolarN__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarN, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarN__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarN)[] = {
            { Py_tp_methods, t_FieldCopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarN__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarN, t_FieldCopolarN, FieldCopolarN);
          PyObject *t_FieldCopolarN::wrap_Object(const FieldCopolarN& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarN::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarN), &PY_TYPE_DEF(FieldCopolarN), module, "FieldCopolarN", 0);
          }

          void t_FieldCopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "class_", make_descriptor(FieldCopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "wrapfn_", make_descriptor(t_FieldCopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarN::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarN::wrap_Object(FieldCopolarN(((t_FieldCopolarN *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data)
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
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerBounds::class$ = NULL;
        jmethodID *StepNormalizerBounds::mids$ = NULL;
        bool StepNormalizerBounds::live$ = false;
        StepNormalizerBounds *StepNormalizerBounds::BOTH = NULL;
        StepNormalizerBounds *StepNormalizerBounds::FIRST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::LAST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::NEITHER = NULL;

        jclass StepNormalizerBounds::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerBounds");

            mids$ = new jmethodID[max_mid];
            mids$[mid_firstIncluded_e470b6d9e0d979db] = env->getMethodID(cls, "firstIncluded", "()Z");
            mids$[mid_lastIncluded_e470b6d9e0d979db] = env->getMethodID(cls, "lastIncluded", "()Z");
            mids$[mid_valueOf_b90076d4eedf1063] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");
            mids$[mid_values_22867757489bd4db] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new StepNormalizerBounds(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            FIRST = new StepNormalizerBounds(env->getStaticObjectField(cls, "FIRST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            LAST = new StepNormalizerBounds(env->getStaticObjectField(cls, "LAST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            NEITHER = new StepNormalizerBounds(env->getStaticObjectField(cls, "NEITHER", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean StepNormalizerBounds::firstIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_firstIncluded_e470b6d9e0d979db]);
        }

        jboolean StepNormalizerBounds::lastIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_lastIncluded_e470b6d9e0d979db]);
        }

        StepNormalizerBounds StepNormalizerBounds::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerBounds(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b90076d4eedf1063], a0.this$));
        }

        JArray< StepNormalizerBounds > StepNormalizerBounds::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerBounds >(env->callStaticObjectMethod(cls, mids$[mid_values_22867757489bd4db]));
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
        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args);
        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data);
        static PyGetSetDef t_StepNormalizerBounds__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerBounds, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerBounds__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerBounds, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, firstIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, lastIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerBounds)[] = {
          { Py_tp_methods, t_StepNormalizerBounds__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerBounds__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerBounds)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerBounds, t_StepNormalizerBounds, StepNormalizerBounds);
        PyObject *t_StepNormalizerBounds::wrap_Object(const StepNormalizerBounds& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerBounds::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerBounds::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerBounds), &PY_TYPE_DEF(StepNormalizerBounds), module, "StepNormalizerBounds", 0);
        }

        void t_StepNormalizerBounds::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "class_", make_descriptor(StepNormalizerBounds::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "wrapfn_", make_descriptor(t_StepNormalizerBounds::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerBounds::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "BOTH", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "FIRST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::FIRST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "LAST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::LAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "NEITHER", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::NEITHER)));
        }

        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerBounds::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerBounds::wrap_Object(StepNormalizerBounds(((t_StepNormalizerBounds *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerBounds::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.firstIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.lastIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerBounds result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::valueOf(a0));
            return t_StepNormalizerBounds::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type)
        {
          JArray< StepNormalizerBounds > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerBounds::wrap_jobject);
        }
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/EventObject.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventObject::class$ = NULL;
    jmethodID *EventObject::mids$ = NULL;
    bool EventObject::live$ = false;

    jclass EventObject::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventObject");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ca0d9438822cb0b] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
        mids$[mid_getSource_dfd7647d9110ac9f] = env->getMethodID(cls, "getSource", "()Ljava/lang/Object;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    EventObject::EventObject(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ca0d9438822cb0b, a0.this$)) {}

    ::java::lang::Object EventObject::getSource() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSource_dfd7647d9110ac9f]));
    }

    ::java::lang::String EventObject::toString() const
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
    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg);
    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds);
    static PyObject *t_EventObject_getSource(t_EventObject *self);
    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args);
    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data);
    static PyGetSetDef t_EventObject__fields_[] = {
      DECLARE_GET_FIELD(t_EventObject, source),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_EventObject__methods_[] = {
      DECLARE_METHOD(t_EventObject, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, getSource, METH_NOARGS),
      DECLARE_METHOD(t_EventObject, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventObject)[] = {
      { Py_tp_methods, t_EventObject__methods_ },
      { Py_tp_init, (void *) t_EventObject_init_ },
      { Py_tp_getset, t_EventObject__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventObject)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventObject, t_EventObject, EventObject);

    void t_EventObject::install(PyObject *module)
    {
      installType(&PY_TYPE(EventObject), &PY_TYPE_DEF(EventObject), module, "EventObject", 0);
    }

    void t_EventObject::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "class_", make_descriptor(EventObject::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "wrapfn_", make_descriptor(t_EventObject::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventObject::initializeClass, 1)))
        return NULL;
      return t_EventObject::wrap_Object(EventObject(((t_EventObject *) arg)->object.this$));
    }
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventObject::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::Object a0((jobject) NULL);
      EventObject object((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        INT_CALL(object = EventObject(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_EventObject_getSource(t_EventObject *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(EventObject), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *AbstractAnalyticalPropagator::mids$ = NULL;
        bool AbstractAnalyticalPropagator::live$ = false;

        jclass AbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_8ef30a2ad40caceb] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
            mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_7044cb1966c8a481] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_propagate_afc18c81ed763a96] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_acceptStep_7a6cf16336efee55] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_propagateOrbit_6f58641238e8a9c4] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_basicPropagate_889031abe87f3b14] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_8ef30a2ad40caceb], a0.this$);
        }

        void AbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_7ae3461a92a43152]);
        }

        ::org::orekit::propagation::EphemerisGenerator AbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::EphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_dd0e78d2be8aaf34]));
        }

        ::java::util::Collection AbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cfcfd130f9013e3e]));
        }

        ::org::orekit::utils::PVCoordinatesProvider AbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_7044cb1966c8a481]));
        }

        ::org::orekit::propagation::SpacecraftState AbstractAnalyticalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_afc18c81ed763a96], a0.this$, a1.this$));
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
        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self);
        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_AbstractAnalyticalPropagator, pvProvider),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_AbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalPropagator, t_AbstractAnalyticalPropagator, AbstractAnalyticalPropagator);

        void t_AbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalPropagator), &PY_TYPE_DEF(AbstractAnalyticalPropagator), module, "AbstractAnalyticalPropagator", 0);
        }

        void t_AbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "class_", make_descriptor(AbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_AbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalPropagator::wrap_Object(AbstractAnalyticalPropagator(((t_AbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalPropagator_addEventDetector(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_clearEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEphemerisGenerator(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::EphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getEventsDetectors(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_getPvProvider(t_AbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalPropagator_propagate(t_AbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__ephemerisGenerator(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_EphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__eventsDetectors(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalPropagator_get__pvProvider(t_AbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame1::class$ = NULL;
          jmethodID *SubFrame1::mids$ = NULL;
          bool SubFrame1::live$ = false;

          jclass SubFrame1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame1");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getAF2_456d9a2f64d6b28d] = env->getMethodID(cls, "getAF2", "()D");
              mids$[mid_getCaOrPFlag_f2f64475e4580546] = env->getMethodID(cls, "getCaOrPFlag", "()I");
              mids$[mid_getIODC_f2f64475e4580546] = env->getMethodID(cls, "getIODC", "()I");
              mids$[mid_getL2PDataFlag_f2f64475e4580546] = env->getMethodID(cls, "getL2PDataFlag", "()I");
              mids$[mid_getReserved04_f2f64475e4580546] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_f2f64475e4580546] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_f2f64475e4580546] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_f2f64475e4580546] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getSvHealth_f2f64475e4580546] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getTGD_f2f64475e4580546] = env->getMethodID(cls, "getTGD", "()I");
              mids$[mid_getTOC_f2f64475e4580546] = env->getMethodID(cls, "getTOC", "()I");
              mids$[mid_getUraIndex_f2f64475e4580546] = env->getMethodID(cls, "getUraIndex", "()I");
              mids$[mid_getWeekNumber_f2f64475e4580546] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame1::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_456d9a2f64d6b28d]);
          }

          jdouble SubFrame1::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_456d9a2f64d6b28d]);
          }

          jdouble SubFrame1::getAF2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF2_456d9a2f64d6b28d]);
          }

          jint SubFrame1::getCaOrPFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getCaOrPFlag_f2f64475e4580546]);
          }

          jint SubFrame1::getIODC() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODC_f2f64475e4580546]);
          }

          jint SubFrame1::getL2PDataFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getL2PDataFlag_f2f64475e4580546]);
          }

          jint SubFrame1::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_f2f64475e4580546]);
          }

          jint SubFrame1::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_f2f64475e4580546]);
          }

          jint SubFrame1::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_f2f64475e4580546]);
          }

          jint SubFrame1::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_f2f64475e4580546]);
          }

          jint SubFrame1::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_f2f64475e4580546]);
          }

          jint SubFrame1::getTGD() const
          {
            return env->callIntMethod(this$, mids$[mid_getTGD_f2f64475e4580546]);
          }

          jint SubFrame1::getTOC() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOC_f2f64475e4580546]);
          }

          jint SubFrame1::getUraIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getUraIndex_f2f64475e4580546]);
          }

          jint SubFrame1::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_f2f64475e4580546]);
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
          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data);
          static PyGetSetDef t_SubFrame1__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame1, aF0),
            DECLARE_GET_FIELD(t_SubFrame1, aF1),
            DECLARE_GET_FIELD(t_SubFrame1, aF2),
            DECLARE_GET_FIELD(t_SubFrame1, caOrPFlag),
            DECLARE_GET_FIELD(t_SubFrame1, iODC),
            DECLARE_GET_FIELD(t_SubFrame1, l2PDataFlag),
            DECLARE_GET_FIELD(t_SubFrame1, reserved04),
            DECLARE_GET_FIELD(t_SubFrame1, reserved05),
            DECLARE_GET_FIELD(t_SubFrame1, reserved06),
            DECLARE_GET_FIELD(t_SubFrame1, reserved07),
            DECLARE_GET_FIELD(t_SubFrame1, svHealth),
            DECLARE_GET_FIELD(t_SubFrame1, tGD),
            DECLARE_GET_FIELD(t_SubFrame1, tOC),
            DECLARE_GET_FIELD(t_SubFrame1, uraIndex),
            DECLARE_GET_FIELD(t_SubFrame1, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame1__methods_[] = {
            DECLARE_METHOD(t_SubFrame1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getCaOrPFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getIODC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getL2PDataFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTGD, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTOC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getUraIndex, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame1)[] = {
            { Py_tp_methods, t_SubFrame1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame1__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame1, t_SubFrame1, SubFrame1);

          void t_SubFrame1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame1), &PY_TYPE_DEF(SubFrame1), module, "SubFrame1", 0);
          }

          void t_SubFrame1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "class_", make_descriptor(SubFrame1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "wrapfn_", make_descriptor(t_SubFrame1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame1::initializeClass, 1)))
              return NULL;
            return t_SubFrame1::wrap_Object(SubFrame1(((t_SubFrame1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTGD());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getUraIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTGD());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getUraIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnIncreasing.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnIncreasing::class$ = NULL;
          jmethodID *StopOnIncreasing::mids$ = NULL;
          bool StopOnIncreasing::live$ = false;

          jclass StopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_66531e3c1769dca9] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnIncreasing::StopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::ode::events::Action StopOnIncreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66531e3c1769dca9], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnIncreasing_init_(t_StopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnIncreasing_eventOccurred(t_StopOnIncreasing *self, PyObject *args);

          static PyMethodDef t_StopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnIncreasing)[] = {
            { Py_tp_methods, t_StopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnIncreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnIncreasing, t_StopOnIncreasing, StopOnIncreasing);

          void t_StopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnIncreasing), &PY_TYPE_DEF(StopOnIncreasing), module, "StopOnIncreasing", 0);
          }

          void t_StopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "class_", make_descriptor(StopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "wrapfn_", make_descriptor(t_StopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnIncreasing::wrap_Object(StopOnIncreasing(((t_StopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnIncreasing_init_(t_StopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnIncreasing object((jobject) NULL);

            INT_CALL(object = StopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnIncreasing_eventOccurred(t_StopOnIncreasing *self, PyObject *args)
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
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepInterpolator::class$ = NULL;
        jmethodID *FieldOrekitStepInterpolator::mids$ = NULL;
        bool FieldOrekitStepInterpolator::live$ = false;

        jclass FieldOrekitStepInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_a553824829fc2514] = env->getMethodID(cls, "getCurrentState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getInterpolatedState_85b5a3e9101d7c1f] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPreviousState_a553824829fc2514] = env->getMethodID(cls, "getPreviousState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_restrictStep_c7ca73d5105d6a36] = env->getMethodID(cls, "restrictStep", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getCurrentState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getCurrentState_a553824829fc2514]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getInterpolatedState(const ::org::orekit::time::FieldAbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_85b5a3e9101d7c1f], a0.this$));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldOrekitStepInterpolator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldOrekitStepInterpolator::getPreviousState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getPreviousState_a553824829fc2514]));
        }

        jboolean FieldOrekitStepInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        FieldOrekitStepInterpolator FieldOrekitStepInterpolator::restrictStep(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
        {
          return FieldOrekitStepInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_c7ca73d5105d6a36], a0.this$, a1.this$));
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
      namespace sampling {
        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self);
        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args);
        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data);
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data);
        static PyGetSetDef t_FieldOrekitStepInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, currentState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, forward),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, previousState),
          DECLARE_GET_FIELD(t_FieldOrekitStepInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepInterpolator)[] = {
          { Py_tp_methods, t_FieldOrekitStepInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitStepInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::FieldPVCoordinatesProvider),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepInterpolator, t_FieldOrekitStepInterpolator, FieldOrekitStepInterpolator);
        PyObject *t_FieldOrekitStepInterpolator::wrap_Object(const FieldOrekitStepInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepInterpolator *self = (t_FieldOrekitStepInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepInterpolator), &PY_TYPE_DEF(FieldOrekitStepInterpolator), module, "FieldOrekitStepInterpolator", 0);
        }

        void t_FieldOrekitStepInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "class_", make_descriptor(FieldOrekitStepInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "wrapfn_", make_descriptor(t_FieldOrekitStepInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepInterpolator::wrap_Object(FieldOrekitStepInterpolator(((t_FieldOrekitStepInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepInterpolator_of_(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getCurrentState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getInterpolatedState(t_FieldOrekitStepInterpolator *self, PyObject *arg)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPVCoordinates(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldOrekitStepInterpolator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldOrekitStepInterpolator_getPreviousState(t_FieldOrekitStepInterpolator *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepInterpolator_isForward(t_FieldOrekitStepInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldOrekitStepInterpolator_restrictStep(t_FieldOrekitStepInterpolator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepInterpolator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_FieldOrekitStepInterpolator::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitStepInterpolator_get__parameters_(t_FieldOrekitStepInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__currentState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__forward(t_FieldOrekitStepInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldOrekitStepInterpolator_get__previousState(t_FieldOrekitStepInterpolator *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/EventSlopeFilter.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3f2418e8ce06f6ea] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;Lorg/hipparchus/ode/events/FilterType;)V");
            mids$[mid_g_3b8f73a4d2dddc4a] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getDetector_8a6f4259e80e096f] = env->getMethodID(cls, "getDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_create_10928ca73ece9a6e] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::hipparchus::ode::events::ODEEventDetector & a0, const ::org::hipparchus::ode::events::FilterType & a1) : ::org::hipparchus::ode::events::AbstractODEDetector(env->newObject(initializeClass, &mids$, mid_init$_3f2418e8ce06f6ea, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_3b8f73a4d2dddc4a], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_8a6f4259e80e096f]));
        }

        void EventSlopeFilter::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::events::AbstractODEDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          ::org::hipparchus::ode::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, ::org::hipparchus::ode::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::ode::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ClassicalRungeKuttaIntegrator::class$ = NULL;
        jmethodID *ClassicalRungeKuttaIntegrator::mids$ = NULL;
        bool ClassicalRungeKuttaIntegrator::live$ = false;

        jclass ClassicalRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_createInterpolator_c085fc2da19c4bc0] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaIntegrator::ClassicalRungeKuttaIntegrator(jdouble a0) : ::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        JArray< JArray< jdouble > > ClassicalRungeKuttaIntegrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > ClassicalRungeKuttaIntegrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
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
        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, a),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, b),
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaIntegrator, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaIntegrator_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaIntegrator, t_ClassicalRungeKuttaIntegrator, ClassicalRungeKuttaIntegrator);

        void t_ClassicalRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaIntegrator), &PY_TYPE_DEF(ClassicalRungeKuttaIntegrator), module, "ClassicalRungeKuttaIntegrator", 0);
        }

        void t_ClassicalRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "class_", make_descriptor(ClassicalRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaIntegrator::wrap_Object(ClassicalRungeKuttaIntegrator(((t_ClassicalRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ClassicalRungeKuttaIntegrator_init_(t_ClassicalRungeKuttaIntegrator *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ClassicalRungeKuttaIntegrator object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ClassicalRungeKuttaIntegrator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getA(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getB(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_getC(t_ClassicalRungeKuttaIntegrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__a(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__b(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ClassicalRungeKuttaIntegrator_get__c(t_ClassicalRungeKuttaIntegrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventDetector::class$ = NULL;
        jmethodID *FieldEventDetector::mids$ = NULL;
        bool FieldEventDetector::live$ = false;

        jclass FieldEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_fa8b0a49dc8c921f] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_e6d4d3215c30992a] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldEventDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_fa8b0a49dc8c921f]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldEventDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_a33ee6d38a1d69f9]));
        }

        jint FieldEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldEventDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_e6d4d3215c30992a]));
        }

        void FieldEventDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg);
        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self);
        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args);
        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data);
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data);
        static PyGetSetDef t_FieldEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldEventDetector, threshold),
          DECLARE_GET_FIELD(t_FieldEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventDetector)[] = {
          { Py_tp_methods, t_FieldEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventDetector, t_FieldEventDetector, FieldEventDetector);
        PyObject *t_FieldEventDetector::wrap_Object(const FieldEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventDetector *self = (t_FieldEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventDetector), &PY_TYPE_DEF(FieldEventDetector), module, "FieldEventDetector", 0);
        }

        void t_FieldEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "class_", make_descriptor(FieldEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "wrapfn_", make_descriptor(t_FieldEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEventDetector::wrap_Object(FieldEventDetector(((t_FieldEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventDetector_of_(t_FieldEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventDetector_g(t_FieldEventDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldEventDetector_getHandler(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxCheckInterval(t_FieldEventDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventDetector_getMaxIterationCount(t_FieldEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldEventDetector_getThreshold(t_FieldEventDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEventDetector_init(t_FieldEventDetector *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldEventDetector_get__parameters_(t_FieldEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventDetector_get__handler(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxCheckInterval(t_FieldEventDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldEventDetector_get__maxIterationCount(t_FieldEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldEventDetector_get__threshold(t_FieldEventDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *JacobiPreconditioner::class$ = NULL;
      jmethodID *JacobiPreconditioner::mids$ = NULL;
      bool JacobiPreconditioner::live$ = false;

      jclass JacobiPreconditioner::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/JacobiPreconditioner");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d26930f65a8ba6c9] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_create_c12606a87a7dd2c4] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/linear/RealLinearOperator;)Lorg/hipparchus/linear/JacobiPreconditioner;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_operate_a3e626dfa1abd779] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_sqrt_e5101c26cd2c310f] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/linear/RealLinearOperator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JacobiPreconditioner::JacobiPreconditioner(const JArray< jdouble > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d26930f65a8ba6c9, a0.this$, a1)) {}

      JacobiPreconditioner JacobiPreconditioner::create(const ::org::hipparchus::linear::RealLinearOperator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JacobiPreconditioner(env->callStaticObjectMethod(cls, mids$[mid_create_c12606a87a7dd2c4], a0.this$));
      }

      jint JacobiPreconditioner::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      jint JacobiPreconditioner::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealVector JacobiPreconditioner::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_a3e626dfa1abd779], a0.this$));
      }

      ::org::hipparchus::linear::RealLinearOperator JacobiPreconditioner::sqrt() const
      {
        return ::org::hipparchus::linear::RealLinearOperator(env->callObjectMethod(this$, mids$[mid_sqrt_e5101c26cd2c310f]));
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
      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data);
      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data);
      static PyGetSetDef t_JacobiPreconditioner__fields_[] = {
        DECLARE_GET_FIELD(t_JacobiPreconditioner, columnDimension),
        DECLARE_GET_FIELD(t_JacobiPreconditioner, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JacobiPreconditioner__methods_[] = {
        DECLARE_METHOD(t_JacobiPreconditioner, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, operate, METH_O),
        DECLARE_METHOD(t_JacobiPreconditioner, sqrt, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JacobiPreconditioner)[] = {
        { Py_tp_methods, t_JacobiPreconditioner__methods_ },
        { Py_tp_init, (void *) t_JacobiPreconditioner_init_ },
        { Py_tp_getset, t_JacobiPreconditioner__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JacobiPreconditioner)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JacobiPreconditioner, t_JacobiPreconditioner, JacobiPreconditioner);

      void t_JacobiPreconditioner::install(PyObject *module)
      {
        installType(&PY_TYPE(JacobiPreconditioner), &PY_TYPE_DEF(JacobiPreconditioner), module, "JacobiPreconditioner", 0);
      }

      void t_JacobiPreconditioner::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "class_", make_descriptor(JacobiPreconditioner::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "wrapfn_", make_descriptor(t_JacobiPreconditioner::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JacobiPreconditioner::initializeClass, 1)))
          return NULL;
        return t_JacobiPreconditioner::wrap_Object(JacobiPreconditioner(((t_JacobiPreconditioner *) arg)->object.this$));
      }
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JacobiPreconditioner::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jboolean a1;
        JacobiPreconditioner object((jobject) NULL);

        if (!parseArgs(args, "[DZ", &a0, &a1))
        {
          INT_CALL(object = JacobiPreconditioner(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        JacobiPreconditioner result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealLinearOperator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::JacobiPreconditioner::create(a0));
          return t_JacobiPreconditioner::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self)
      {
        ::org::hipparchus::linear::RealLinearOperator result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return ::org::hipparchus::linear::t_RealLinearOperator::wrap_Object(result);
      }

      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MeasurementBuilder::class$ = NULL;
          jmethodID *MeasurementBuilder::mids$ = NULL;
          bool MeasurementBuilder::live$ = false;

          jclass MeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_d02e2fca157afe5d] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_ff20f279f9ba9f9e] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_fc816f44bfa3d437], a0.this$);
          }

          ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_build_d02e2fca157afe5d], a0.this$, a1.this$));
          }

          ::java::util::List MeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_a6156df500549a58]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_ff20f279f9ba9f9e]));
          }

          void MeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
        namespace generation {
          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data);
          static PyGetSetDef t_MeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_MeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementBuilder)[] = {
            { Py_tp_methods, t_MeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementBuilder, t_MeasurementBuilder, MeasurementBuilder);
          PyObject *t_MeasurementBuilder::wrap_Object(const MeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementBuilder), &PY_TYPE_DEF(MeasurementBuilder), module, "MeasurementBuilder", 0);
          }

          void t_MeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "class_", make_descriptor(MeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "wrapfn_", make_descriptor(t_MeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MeasurementBuilder::wrap_Object(MeasurementBuilder(((t_MeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeElementsType::class$ = NULL;
              jmethodID *AttitudeElementsType::mids$ = NULL;
              bool AttitudeElementsType::live$ = false;
              AttitudeElementsType *AttitudeElementsType::DCM = NULL;
              AttitudeElementsType *AttitudeElementsType::EULER_ANGLES = NULL;
              AttitudeElementsType *AttitudeElementsType::QUATERNION = NULL;

              jclass AttitudeElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_a6156df500549a58] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toRotation_cee82f5510cc01cd] = env->getMethodID(cls, "toRotation", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;[D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_d16beb45b836381a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_values_7115856627d2fe3c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DCM = new AttitudeElementsType(env->getStaticObjectField(cls, "DCM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  EULER_ANGLES = new AttitudeElementsType(env->getStaticObjectField(cls, "EULER_ANGLES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  QUATERNION = new AttitudeElementsType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_a6156df500549a58]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeElementsType::toRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const JArray< jdouble > & a1) const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_cee82f5510cc01cd], a0.this$, a1.this$));
              }

              ::java::lang::String AttitudeElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
              }

              AttitudeElementsType AttitudeElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d16beb45b836381a], a0.this$));
              }

              JArray< AttitudeElementsType > AttitudeElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_7115856627d2fe3c]));
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
              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self);
              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type);
              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data);
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data);
              static PyGetSetDef t_AttitudeElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeElementsType, units),
                DECLARE_GET_FIELD(t_AttitudeElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeElementsType__methods_[] = {
                DECLARE_METHOD(t_AttitudeElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toRotation, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeElementsType)[] = {
                { Py_tp_methods, t_AttitudeElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeElementsType, t_AttitudeElementsType, AttitudeElementsType);
              PyObject *t_AttitudeElementsType::wrap_Object(const AttitudeElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeElementsType), &PY_TYPE_DEF(AttitudeElementsType), module, "AttitudeElementsType", 0);
              }

              void t_AttitudeElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "class_", make_descriptor(AttitudeElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "wrapfn_", make_descriptor(t_AttitudeElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "DCM", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::DCM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "EULER_ANGLES", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::EULER_ANGLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "QUATERNION", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::QUATERNION)));
              }

              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeElementsType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeElementsType::wrap_Object(AttitudeElementsType(((t_AttitudeElementsType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

                if (!parseArgs(args, "K[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.toRotation(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toRotation", args);
                return NULL;
              }

              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(AttitudeElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::valueOf(a0));
                  return t_AttitudeElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type)
              {
                JArray< AttitudeElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeElementsType::wrap_jobject);
              }
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadata::class$ = NULL;
            jmethodID *CdmRelativeMetadata::mids$ = NULL;
            bool CdmRelativeMetadata::live$ = false;

            jclass CdmRelativeMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addComment_e939c6558ae8d313] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
                mids$[mid_checkNotNull_d572e0718b6c83e0] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/Enum;)V");
                mids$[mid_checkScreenVolumeConditions_7ae3461a92a43152] = env->getMethodID(cls, "checkScreenVolumeConditions", "()V");
                mids$[mid_getApproachAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getApproachAngle", "()D");
                mids$[mid_getCollisionPercentile_d8ead0d90ce828b0] = env->getMethodID(cls, "getCollisionPercentile", "()[I");
                mids$[mid_getCollisionProbaMethod_49eb66b4a85e55fc] = env->getMethodID(cls, "getCollisionProbaMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getCollisionProbability_456d9a2f64d6b28d] = env->getMethodID(cls, "getCollisionProbability", "()D");
                mids$[mid_getComment_a6156df500549a58] = env->getMethodID(cls, "getComment", "()Ljava/util/List;");
                mids$[mid_getConjunctionId_0090f7797e403f43] = env->getMethodID(cls, "getConjunctionId", "()Ljava/lang/String;");
                mids$[mid_getMahalanobisDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getMahalanobisDistance", "()D");
                mids$[mid_getMaxCollisionProbability_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxCollisionProbability", "()D");
                mids$[mid_getMaxCollisionProbabilityMethod_49eb66b4a85e55fc] = env->getMethodID(cls, "getMaxCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getMissDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getMissDistance", "()D");
                mids$[mid_getNextMessageEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageId_0090f7797e403f43] = env->getMethodID(cls, "getPreviousMessageId", "()Ljava/lang/String;");
                mids$[mid_getRelativePosition_17a952530a808943] = env->getMethodID(cls, "getRelativePosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getRelativeSpeed_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeSpeed", "()D");
                mids$[mid_getRelativeVelocity_17a952530a808943] = env->getMethodID(cls, "getRelativeVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getScreenEntryTime_aaa854c403487cf3] = env->getMethodID(cls, "getScreenEntryTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenExitTime_aaa854c403487cf3] = env->getMethodID(cls, "getScreenExitTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenPcThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getScreenPcThreshold", "()D");
                mids$[mid_getScreenType_8a4a31dcfdd075f2] = env->getMethodID(cls, "getScreenType", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_getScreenVolumeFrame_3eeeaad7d3fc56dd] = env->getMethodID(cls, "getScreenVolumeFrame", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_getScreenVolumeRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getScreenVolumeRadius", "()D");
                mids$[mid_getScreenVolumeShape_930c1ae3eb90def5] = env->getMethodID(cls, "getScreenVolumeShape", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_getScreenVolumeX_456d9a2f64d6b28d] = env->getMethodID(cls, "getScreenVolumeX", "()D");
                mids$[mid_getScreenVolumeY_456d9a2f64d6b28d] = env->getMethodID(cls, "getScreenVolumeY", "()D");
                mids$[mid_getScreenVolumeZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getScreenVolumeZ", "()D");
                mids$[mid_getSefiCollisionProbability_456d9a2f64d6b28d] = env->getMethodID(cls, "getSefiCollisionProbability", "()D");
                mids$[mid_getSefiCollisionProbabilityMethod_49eb66b4a85e55fc] = env->getMethodID(cls, "getSefiCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getSefiFragmentationModel_0090f7797e403f43] = env->getMethodID(cls, "getSefiFragmentationModel", "()Ljava/lang/String;");
                mids$[mid_getStartScreenPeriod_aaa854c403487cf3] = env->getMethodID(cls, "getStartScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopScreenPeriod_aaa854c403487cf3] = env->getMethodID(cls, "getStopScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTca_aaa854c403487cf3] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeSystem_8ece93c6c1ece30e] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
                mids$[mid_setApproachAngle_77e0f9a1f260e2e5] = env->getMethodID(cls, "setApproachAngle", "(D)V");
                mids$[mid_setCollisionPercentile_3b603738d1eb3233] = env->getMethodID(cls, "setCollisionPercentile", "([I)V");
                mids$[mid_setCollisionProbaMethod_5d8617d8c21ef120] = env->getMethodID(cls, "setCollisionProbaMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setCollisionProbability_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCollisionProbability", "(D)V");
                mids$[mid_setConjunctionId_e939c6558ae8d313] = env->getMethodID(cls, "setConjunctionId", "(Ljava/lang/String;)V");
                mids$[mid_setMahalanobisDistance_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMahalanobisDistance", "(D)V");
                mids$[mid_setMaxCollisionProbability_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxCollisionProbability", "(D)V");
                mids$[mid_setMaxCollisionProbabilityMethod_5d8617d8c21ef120] = env->getMethodID(cls, "setMaxCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setMissDistance_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMissDistance", "(D)V");
                mids$[mid_setNextMessageEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageId_e939c6558ae8d313] = env->getMethodID(cls, "setPreviousMessageId", "(Ljava/lang/String;)V");
                mids$[mid_setRelativePositionN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativePositionN", "(D)V");
                mids$[mid_setRelativePositionR_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativePositionR", "(D)V");
                mids$[mid_setRelativePositionT_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativePositionT", "(D)V");
                mids$[mid_setRelativeSpeed_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativeSpeed", "(D)V");
                mids$[mid_setRelativeVelocityN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativeVelocityN", "(D)V");
                mids$[mid_setRelativeVelocityR_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativeVelocityR", "(D)V");
                mids$[mid_setRelativeVelocityT_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRelativeVelocityT", "(D)V");
                mids$[mid_setScreenEntryTime_e82d68cd9f886886] = env->getMethodID(cls, "setScreenEntryTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenExitTime_e82d68cd9f886886] = env->getMethodID(cls, "setScreenExitTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenPcThreshold_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScreenPcThreshold", "(D)V");
                mids$[mid_setScreenType_4ee5109bd2ddc3a9] = env->getMethodID(cls, "setScreenType", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;)V");
                mids$[mid_setScreenVolumeFrame_5a9c14e1949fc730] = env->getMethodID(cls, "setScreenVolumeFrame", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;)V");
                mids$[mid_setScreenVolumeRadius_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScreenVolumeRadius", "(D)V");
                mids$[mid_setScreenVolumeShape_982ebac41152966d] = env->getMethodID(cls, "setScreenVolumeShape", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;)V");
                mids$[mid_setScreenVolumeX_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScreenVolumeX", "(D)V");
                mids$[mid_setScreenVolumeY_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScreenVolumeY", "(D)V");
                mids$[mid_setScreenVolumeZ_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScreenVolumeZ", "(D)V");
                mids$[mid_setSefiCollisionProbability_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSefiCollisionProbability", "(D)V");
                mids$[mid_setSefiCollisionProbabilityMethod_5d8617d8c21ef120] = env->getMethodID(cls, "setSefiCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setSefiFragmentationModel_e939c6558ae8d313] = env->getMethodID(cls, "setSefiFragmentationModel", "(Ljava/lang/String;)V");
                mids$[mid_setStartScreenPeriod_e82d68cd9f886886] = env->getMethodID(cls, "setStartScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopScreenPeriod_e82d68cd9f886886] = env->getMethodID(cls, "setStopScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTca_e82d68cd9f886886] = env->getMethodID(cls, "setTca", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeSystem_3dd15fb182523a58] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
                mids$[mid_validate_7ae3461a92a43152] = env->getMethodID(cls, "validate", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmRelativeMetadata::CdmRelativeMetadata() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void CdmRelativeMetadata::addComment(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addComment_e939c6558ae8d313], a0.this$);
            }

            void CdmRelativeMetadata::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkNotNull_d572e0718b6c83e0], a0.this$, a1.this$);
            }

            void CdmRelativeMetadata::checkScreenVolumeConditions() const
            {
              env->callVoidMethod(this$, mids$[mid_checkScreenVolumeConditions_7ae3461a92a43152]);
            }

            jdouble CdmRelativeMetadata::getApproachAngle() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApproachAngle_456d9a2f64d6b28d]);
            }

            JArray< jint > CdmRelativeMetadata::getCollisionPercentile() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCollisionPercentile_d8ead0d90ce828b0]));
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getCollisionProbaMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getCollisionProbaMethod_49eb66b4a85e55fc]));
            }

            jdouble CdmRelativeMetadata::getCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCollisionProbability_456d9a2f64d6b28d]);
            }

            ::java::util::List CdmRelativeMetadata::getComment() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComment_a6156df500549a58]));
            }

            ::java::lang::String CdmRelativeMetadata::getConjunctionId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConjunctionId_0090f7797e403f43]));
            }

            jdouble CdmRelativeMetadata::getMahalanobisDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMahalanobisDistance_456d9a2f64d6b28d]);
            }

            jdouble CdmRelativeMetadata::getMaxCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMaxCollisionProbability_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getMaxCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getMaxCollisionProbabilityMethod_49eb66b4a85e55fc]));
            }

            jdouble CdmRelativeMetadata::getMissDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMissDistance_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getNextMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getPreviousMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_aaa854c403487cf3]));
            }

            ::java::lang::String CdmRelativeMetadata::getPreviousMessageId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageId_0090f7797e403f43]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativePosition() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativePosition_17a952530a808943]));
            }

            jdouble CdmRelativeMetadata::getRelativeSpeed() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRelativeSpeed_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativeVelocity() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativeVelocity_17a952530a808943]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenEntryTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenEntryTime_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenExitTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenExitTime_aaa854c403487cf3]));
            }

            jdouble CdmRelativeMetadata::getScreenPcThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenPcThreshold_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenType CdmRelativeMetadata::getScreenType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenType(env->callObjectMethod(this$, mids$[mid_getScreenType_8a4a31dcfdd075f2]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame CdmRelativeMetadata::getScreenVolumeFrame() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame(env->callObjectMethod(this$, mids$[mid_getScreenVolumeFrame_3eeeaad7d3fc56dd]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeRadius_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape CdmRelativeMetadata::getScreenVolumeShape() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape(env->callObjectMethod(this$, mids$[mid_getScreenVolumeShape_930c1ae3eb90def5]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeX_456d9a2f64d6b28d]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeY_456d9a2f64d6b28d]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeZ_456d9a2f64d6b28d]);
            }

            jdouble CdmRelativeMetadata::getSefiCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSefiCollisionProbability_456d9a2f64d6b28d]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getSefiCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getSefiCollisionProbabilityMethod_49eb66b4a85e55fc]));
            }

            ::java::lang::String CdmRelativeMetadata::getSefiFragmentationModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSefiFragmentationModel_0090f7797e403f43]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStartScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartScreenPeriod_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStopScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopScreenPeriod_aaa854c403487cf3]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getTca() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_aaa854c403487cf3]));
            }

            ::org::orekit::files::ccsds::definitions::TimeSystem CdmRelativeMetadata::getTimeSystem() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_8ece93c6c1ece30e]));
            }

            void CdmRelativeMetadata::setApproachAngle(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApproachAngle_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setCollisionPercentile(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionPercentile_3b603738d1eb3233], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbaMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbaMethod_5d8617d8c21ef120], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbability_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setConjunctionId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setConjunctionId_e939c6558ae8d313], a0.this$);
            }

            void CdmRelativeMetadata::setMahalanobisDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMahalanobisDistance_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbability_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbabilityMethod_5d8617d8c21ef120], a0.this$);
            }

            void CdmRelativeMetadata::setMissDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMissDistance_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageId_e939c6558ae8d313], a0.this$);
            }

            void CdmRelativeMetadata::setRelativePositionN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionN_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setRelativePositionR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionR_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setRelativePositionT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionT_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setRelativeSpeed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeSpeed_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityN_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityR_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityT_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setScreenEntryTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenEntryTime_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setScreenExitTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenExitTime_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setScreenPcThreshold(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenPcThreshold_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setScreenType(const ::org::orekit::files::ccsds::ndm::cdm::ScreenType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenType_4ee5109bd2ddc3a9], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeFrame(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeFrame_5a9c14e1949fc730], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeRadius(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeRadius_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeShape(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeShape_982ebac41152966d], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeX_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeY_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeZ_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbability_77e0f9a1f260e2e5], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbabilityMethod_5d8617d8c21ef120], a0.this$);
            }

            void CdmRelativeMetadata::setSefiFragmentationModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiFragmentationModel_e939c6558ae8d313], a0.this$);
            }

            void CdmRelativeMetadata::setStartScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartScreenPeriod_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setStopScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopScreenPeriod_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setTca(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTca_e82d68cd9f886886], a0.this$);
            }

            void CdmRelativeMetadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeSystem_3dd15fb182523a58], a0.this$);
            }

            void CdmRelativeMetadata::validate() const
            {
              env->callVoidMethod(this$, mids$[mid_validate_7ae3461a92a43152]);
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
          namespace cdm {
            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data);
            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmRelativeMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, approachAngle),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionPercentile),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbaMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbability),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, comment),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, conjunctionId),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, mahalanobisDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, missDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, nextMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageId),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativePosition),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, relativeSpeed),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativeVelocity),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenEntryTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenExitTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenPcThreshold),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenType),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeFrame),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeRadius),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeShape),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeX),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeY),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeZ),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiFragmentationModel),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, startScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, stopScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, tca),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, timeSystem),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, addComment, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkNotNull, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkScreenVolumeConditions, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getApproachAngle, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionPercentile, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbaMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getComment, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getConjunctionId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMahalanobisDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMissDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getNextMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativePosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeSpeed, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenEntryTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenExitTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenPcThreshold, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenType, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeRadius, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeShape, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeX, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeY, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeZ, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiFragmentationModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStartScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStopScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTca, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTimeSystem, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, setApproachAngle, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionPercentile, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbaMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setConjunctionId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMahalanobisDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMissDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setNextMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeSpeed, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenEntryTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenExitTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenPcThreshold, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenType, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeFrame, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeRadius, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeShape, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeX, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeY, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeZ, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiFragmentationModel, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStartScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStopScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTca, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTimeSystem, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, validate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadata)[] = {
              { Py_tp_methods, t_CdmRelativeMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmRelativeMetadata_init_ },
              { Py_tp_getset, t_CdmRelativeMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadata)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadata, t_CdmRelativeMetadata, CdmRelativeMetadata);

            void t_CdmRelativeMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadata), &PY_TYPE_DEF(CdmRelativeMetadata), module, "CdmRelativeMetadata", 0);
            }

            void t_CdmRelativeMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "class_", make_descriptor(CdmRelativeMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "wrapfn_", make_descriptor(t_CdmRelativeMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadata::wrap_Object(CdmRelativeMetadata(((t_CdmRelativeMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds)
            {
              CdmRelativeMetadata object((jobject) NULL);

              INT_CALL(object = CdmRelativeMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.addComment(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addComment", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "oK", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkNotNull(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.checkScreenVolumeConditions());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionPercentile());
              return result.wrap();
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComment());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getConjunctionId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMissDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiFragmentationModel());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApproachAngle(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApproachAngle", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setCollisionPercentile(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionPercentile", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCollisionProbaMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbaMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setConjunctionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setConjunctionId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMahalanobisDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMahalanobisDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMissDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMissDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setNextMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeSpeed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeSpeed", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenEntryTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenEntryTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenExitTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenExitTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenPcThreshold(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenPcThreshold", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::parameters_))
              {
                OBJ_CALL(self->object.setScreenType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenType", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeRadius(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeRadius", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeShape(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeShape", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeX", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeY", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeZ", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSefiFragmentationModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiFragmentationModel", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTca(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTca", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
              {
                OBJ_CALL(self->object.setTimeSystem(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApproachAngle(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "approachAngle", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionPercentile());
              return value.wrap();
            }
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setCollisionPercentile(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionPercentile", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCollisionProbaMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbaMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComment());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getConjunctionId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setConjunctionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "conjunctionId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMahalanobisDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mahalanobisDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMissDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMissDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "missDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setNextMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setPreviousMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setPreviousMessageId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeSpeed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeSpeed", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenEntryTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenEntryTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenExitTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenExitTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenPcThreshold(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenPcThreshold", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenType", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeFrame", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeRadius(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeRadius", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeShape(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeShape", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeX", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeY", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeZ", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiFragmentationModel());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSefiFragmentationModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiFragmentationModel", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTca(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tca", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeSystem(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
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
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ca1c0bf5185bdc62] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_f2f64475e4580546] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_7cd8e64b85aa1635] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_a1424ed96e1e854b] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_0a2a1ac2721c0336] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_d62793cb3669987a] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Data::SsrIgm03Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm03Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ca1c0bf5185bdc62]));
              }

              jint SsrIgm03Data::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_f2f64475e4580546]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection SsrIgm03Data::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_7cd8e64b85aa1635]));
              }

              void SsrIgm03Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_a1424ed96e1e854b], a0.this$);
              }

              void SsrIgm03Data::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_0a2a1ac2721c0336], a0);
              }

              void SsrIgm03Data::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_d62793cb3669987a], a0.this$);
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
#include "org/hipparchus/util/MathArrays.h"
#include "org/hipparchus/util/MathArrays$OrderDirection.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays::class$ = NULL;
      jmethodID *MathArrays::mids$ = NULL;
      bool MathArrays::live$ = false;

      jclass MathArrays::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays");

          mids$ = new jmethodID[max_mid];
          mids$[mid_buildArray_bc58eb8ebe972f82] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_ebc1d7b2d944a9b8] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;II)[[Lorg/hipparchus/FieldElement;");
          mids$[mid_buildArray_66434a6abf649826] = env->getStaticMethodID(cls, "buildArray", "(Lorg/hipparchus/Field;III)[[[Lorg/hipparchus/FieldElement;");
          mids$[mid_checkEqualLength_0d03c8a1d7f56f02] = env->getStaticMethodID(cls, "checkEqualLength", "([D[D)V");
          mids$[mid_checkEqualLength_fb1ccf2a5678b26e] = env->getStaticMethodID(cls, "checkEqualLength", "([I[I)V");
          mids$[mid_checkEqualLength_44f58eee1ec38a36] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkEqualLength_265c50ede9c0384f] = env->getStaticMethodID(cls, "checkEqualLength", "([D[DZ)Z");
          mids$[mid_checkEqualLength_8a4160673f78eba9] = env->getStaticMethodID(cls, "checkEqualLength", "([I[IZ)Z");
          mids$[mid_checkEqualLength_885a2e86bdd6cdd2] = env->getStaticMethodID(cls, "checkEqualLength", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Z)Z");
          mids$[mid_checkNonNegative_f9329a87f434e224] = env->getStaticMethodID(cls, "checkNonNegative", "([J)V");
          mids$[mid_checkNonNegative_426d992091f69be4] = env->getStaticMethodID(cls, "checkNonNegative", "([[J)V");
          mids$[mid_checkNotNaN_ebc26dcaf4761286] = env->getStaticMethodID(cls, "checkNotNaN", "([D)V");
          mids$[mid_checkOrder_ebc26dcaf4761286] = env->getStaticMethodID(cls, "checkOrder", "([D)V");
          mids$[mid_checkOrder_4c337e4c1ec6f647] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_checkOrder_9d84b64f1b8d2ed9] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_46a7f83d923ff8f6] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)V");
          mids$[mid_checkOrder_42cbf10fbe912dd3] = env->getStaticMethodID(cls, "checkOrder", "([DLorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkOrder_055501d0f053dd6a] = env->getStaticMethodID(cls, "checkOrder", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/util/MathArrays$OrderDirection;ZZ)Z");
          mids$[mid_checkPositive_ebc26dcaf4761286] = env->getStaticMethodID(cls, "checkPositive", "([D)V");
          mids$[mid_checkRectangular_426d992091f69be4] = env->getStaticMethodID(cls, "checkRectangular", "([[J)V");
          mids$[mid_concatenate_bef18f92bdb5a3c0] = env->getStaticMethodID(cls, "concatenate", "([[D)[D");
          mids$[mid_convolve_0f29b7d9f77b462e] = env->getStaticMethodID(cls, "convolve", "([D[D)[D");
          mids$[mid_cosAngle_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "cosAngle", "([D[D)D");
          mids$[mid_distance_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "distance", "([D[D)D");
          mids$[mid_distance_f5d09d3e281c0a57] = env->getStaticMethodID(cls, "distance", "([I[I)D");
          mids$[mid_distance1_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "distance1", "([D[D)D");
          mids$[mid_distance1_05ddcb51512740f6] = env->getStaticMethodID(cls, "distance1", "([I[I)I");
          mids$[mid_distanceInf_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "distanceInf", "([D[D)D");
          mids$[mid_distanceInf_05ddcb51512740f6] = env->getStaticMethodID(cls, "distanceInf", "([I[I)I");
          mids$[mid_ebeAdd_0f29b7d9f77b462e] = env->getStaticMethodID(cls, "ebeAdd", "([D[D)[D");
          mids$[mid_ebeDivide_0f29b7d9f77b462e] = env->getStaticMethodID(cls, "ebeDivide", "([D[D)[D");
          mids$[mid_ebeMultiply_0f29b7d9f77b462e] = env->getStaticMethodID(cls, "ebeMultiply", "([D[D)[D");
          mids$[mid_ebeSubtract_0f29b7d9f77b462e] = env->getStaticMethodID(cls, "ebeSubtract", "([D[D)[D");
          mids$[mid_equals_038dd22190ceb95d] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
          mids$[mid_equals_5418f6d9d0f17dae] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
          mids$[mid_equals_70b45f0447f4c6bc] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
          mids$[mid_equals_3f2e961d1ff5453d] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
          mids$[mid_equals_289f0db12278154e] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
          mids$[mid_equals_297ade561ff86626] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
          mids$[mid_equalsIncludingNaN_5418f6d9d0f17dae] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([D[D)Z");
          mids$[mid_equalsIncludingNaN_70b45f0447f4c6bc] = env->getStaticMethodID(cls, "equalsIncludingNaN", "([F[F)Z");
          mids$[mid_isMonotonic_3f97c747566e1d05] = env->getStaticMethodID(cls, "isMonotonic", "([DLorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_isMonotonic_cbbb492f3fa76ff1] = env->getStaticMethodID(cls, "isMonotonic", "([Ljava/lang/Comparable;Lorg/hipparchus/util/MathArrays$OrderDirection;Z)Z");
          mids$[mid_linearCombination_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "linearCombination", "([D[D)D");
          mids$[mid_linearCombination_04175aacb25dae17] = env->getStaticMethodID(cls, "linearCombination", "(DDDD)D");
          mids$[mid_linearCombination_88076de049bf2857] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDD)D");
          mids$[mid_linearCombination_72fae1bb330e5ce4] = env->getStaticMethodID(cls, "linearCombination", "(DDDDDDDD)D");
          mids$[mid_natural_d7f52bcc4a12ae58] = env->getStaticMethodID(cls, "natural", "(I)[I");
          mids$[mid_normalizeArray_1657efb2f051723b] = env->getStaticMethodID(cls, "normalizeArray", "([DD)[D");
          mids$[mid_safeNorm_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "safeNorm", "([D)D");
          mids$[mid_scale_7b8ea6f669f90156] = env->getStaticMethodID(cls, "scale", "(D[D)[D");
          mids$[mid_scaleInPlace_b67fd0977346c69b] = env->getStaticMethodID(cls, "scaleInPlace", "(D[D)V");
          mids$[mid_sequence_6846881cc754d53e] = env->getStaticMethodID(cls, "sequence", "(III)[I");
          mids$[mid_shuffle_3b603738d1eb3233] = env->getStaticMethodID(cls, "shuffle", "([I)V");
          mids$[mid_shuffle_dfe4a2ac5d415b58] = env->getStaticMethodID(cls, "shuffle", "([ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_shuffle_bb505516bcbf5b0a] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;)V");
          mids$[mid_shuffle_1983ea6f7aab64a4] = env->getStaticMethodID(cls, "shuffle", "([IILorg/hipparchus/util/MathArrays$Position;Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_sortInPlace_cdae0ed71cfef3d1] = env->getStaticMethodID(cls, "sortInPlace", "([D[[D)V");
          mids$[mid_sortInPlace_5c5c42e2ad4a66a0] = env->getStaticMethodID(cls, "sortInPlace", "([DLorg/hipparchus/util/MathArrays$OrderDirection;[[D)V");
          mids$[mid_unique_4b742fe429c22ba8] = env->getStaticMethodID(cls, "unique", "([D)[D");
          mids$[mid_verifyValues_e0b0cd3a71c9ef19] = env->getStaticMethodID(cls, "verifyValues", "([DII)Z");
          mids$[mid_verifyValues_2122a68f144f771e] = env->getStaticMethodID(cls, "verifyValues", "([D[DII)Z");
          mids$[mid_verifyValues_8c88073a43a33764] = env->getStaticMethodID(cls, "verifyValues", "([DIIZ)Z");
          mids$[mid_verifyValues_fef8df734a3fe4b4] = env->getStaticMethodID(cls, "verifyValues", "([D[DIIZ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::FieldElement > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::org::hipparchus::FieldElement >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_bc58eb8ebe972f82], a0.this$, a1));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_ebc1d7b2d944a9b8], a0.this$, a1, a2));
      }

      JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > MathArrays::buildArray(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JArray< JArray< ::org::hipparchus::FieldElement > > >(env->callStaticObjectMethod(cls, mids$[mid_buildArray_66434a6abf649826], a0.this$, a1, a2, a3));
      }

      void MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_0d03c8a1d7f56f02], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_fb1ccf2a5678b26e], a0.this$, a1.this$);
      }

      void MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkEqualLength_44f58eee1ec38a36], a0.this$, a1.this$);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_265c50ede9c0384f], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< jint > & a0, const JArray< jint > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_8a4160673f78eba9], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkEqualLength(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkEqualLength_885a2e86bdd6cdd2], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkNonNegative(const JArray< jlong > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_f9329a87f434e224], a0.this$);
      }

      void MathArrays::checkNonNegative(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNonNegative_426d992091f69be4], a0.this$);
      }

      void MathArrays::checkNotNaN(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNaN_ebc26dcaf4761286], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_ebc26dcaf4761286], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_4c337e4c1ec6f647], a0.this$);
      }

      void MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_9d84b64f1b8d2ed9], a0.this$, a1.this$, a2);
      }

      void MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkOrder_46a7f83d923ff8f6], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::checkOrder(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_42cbf10fbe912dd3], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::checkOrder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_checkOrder_055501d0f053dd6a], a0.this$, a1.this$, a2, a3);
      }

      void MathArrays::checkPositive(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkPositive_ebc26dcaf4761286], a0.this$);
      }

      void MathArrays::checkRectangular(const JArray< JArray< jlong > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRectangular_426d992091f69be4], a0.this$);
      }

      JArray< jdouble > MathArrays::concatenate(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_concatenate_bef18f92bdb5a3c0], a0.this$));
      }

      JArray< jdouble > MathArrays::convolve(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_convolve_0f29b7d9f77b462e], a0.this$, a1.this$));
      }

      jdouble MathArrays::cosAngle(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosAngle_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance_f5d09d3e281c0a57], a0.this$, a1.this$);
      }

      jdouble MathArrays::distance1(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distance1_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jint MathArrays::distance1(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distance1_05ddcb51512740f6], a0.this$, a1.this$);
      }

      jdouble MathArrays::distanceInf(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jint MathArrays::distanceInf(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_distanceInf_05ddcb51512740f6], a0.this$, a1.this$);
      }

      JArray< jdouble > MathArrays::ebeAdd(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeAdd_0f29b7d9f77b462e], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeDivide(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeDivide_0f29b7d9f77b462e], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeMultiply(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeMultiply_0f29b7d9f77b462e], a0.this$, a1.this$));
      }

      JArray< jdouble > MathArrays::ebeSubtract(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_ebeSubtract_0f29b7d9f77b462e], a0.this$, a1.this$));
      }

      jboolean MathArrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_038dd22190ceb95d], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_5418f6d9d0f17dae], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_70b45f0447f4c6bc], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3f2e961d1ff5453d], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_289f0db12278154e], a0.this$, a1.this$);
      }

      jboolean MathArrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_297ade561ff86626], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_5418f6d9d0f17dae], a0.this$, a1.this$);
      }

      jboolean MathArrays::equalsIncludingNaN(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_70b45f0447f4c6bc], a0.this$, a1.this$);
      }

      jboolean MathArrays::isMonotonic(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_3f97c747566e1d05], a0.this$, a1.this$, a2);
      }

      jboolean MathArrays::isMonotonic(const JArray< ::java::lang::Comparable > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMonotonic_cbbb492f3fa76ff1], a0.this$, a1.this$, a2);
      }

      jdouble MathArrays::linearCombination(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_04175aacb25dae17], a0, a1, a2, a3);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_88076de049bf2857], a0, a1, a2, a3, a4, a5);
      }

      jdouble MathArrays::linearCombination(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_linearCombination_72fae1bb330e5ce4], a0, a1, a2, a3, a4, a5, a6, a7);
      }

      JArray< jint > MathArrays::natural(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_natural_d7f52bcc4a12ae58], a0));
      }

      JArray< jdouble > MathArrays::normalizeArray(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalizeArray_1657efb2f051723b], a0.this$, a1));
      }

      jdouble MathArrays::safeNorm(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_safeNorm_f05cb8c6dfd5e0b9], a0.this$);
      }

      JArray< jdouble > MathArrays::scale(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_scale_7b8ea6f669f90156], a0, a1.this$));
      }

      void MathArrays::scaleInPlace(jdouble a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_scaleInPlace_b67fd0977346c69b], a0, a1.this$);
      }

      JArray< jint > MathArrays::sequence(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_sequence_6846881cc754d53e], a0, a1, a2));
      }

      void MathArrays::shuffle(const JArray< jint > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_3b603738d1eb3233], a0.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, const ::org::hipparchus::random::RandomGenerator & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_dfe4a2ac5d415b58], a0.this$, a1.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_bb505516bcbf5b0a], a0.this$, a1, a2.this$);
      }

      void MathArrays::shuffle(const JArray< jint > & a0, jint a1, const ::org::hipparchus::util::MathArrays$Position & a2, const ::org::hipparchus::random::RandomGenerator & a3)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_shuffle_1983ea6f7aab64a4], a0.this$, a1, a2.this$, a3.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_cdae0ed71cfef3d1], a0.this$, a1.this$);
      }

      void MathArrays::sortInPlace(const JArray< jdouble > & a0, const ::org::hipparchus::util::MathArrays$OrderDirection & a1, const JArray< JArray< jdouble > > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_sortInPlace_5c5c42e2ad4a66a0], a0.this$, a1.this$, a2.this$);
      }

      JArray< jdouble > MathArrays::unique(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_unique_4b742fe429c22ba8], a0.this$));
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_e0b0cd3a71c9ef19], a0.this$, a1, a2);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_2122a68f144f771e], a0.this$, a1.this$, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, jint a1, jint a2, jboolean a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_8c88073a43a33764], a0.this$, a1, a2, a3);
      }

      jboolean MathArrays::verifyValues(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3, jboolean a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_verifyValues_fef8df734a3fe4b4], a0.this$, a1.this$, a2, a3, a4);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/MathArrays$Function.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathArrays__methods_[] = {
        DECLARE_METHOD(t_MathArrays, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, buildArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkEqualLength, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNonNegative, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkNotNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkOrder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkPositive, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, checkRectangular, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, concatenate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, convolve, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, cosAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distance1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, distanceInf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeAdd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeDivide, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeMultiply, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, ebeSubtract, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, isMonotonic, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, linearCombination, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, natural, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, normalizeArray, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, safeNorm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scale, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, scaleInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sequence, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, shuffle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, sortInPlace, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, unique, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays, verifyValues, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays)[] = {
        { Py_tp_methods, t_MathArrays__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathArrays, t_MathArrays, MathArrays);

      void t_MathArrays::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays), &PY_TYPE_DEF(MathArrays), module, "MathArrays", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Position", make_descriptor(&PY_TYPE_DEF(MathArrays$Position)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "OrderDirection", make_descriptor(&PY_TYPE_DEF(MathArrays$OrderDirection)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "Function", make_descriptor(&PY_TYPE_DEF(MathArrays$Function)));
      }

      void t_MathArrays::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "class_", make_descriptor(MathArrays::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "wrapfn_", make_descriptor(t_MathArrays::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathArrays_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays::initializeClass, 1)))
          return NULL;
        return t_MathArrays::wrap_Object(MathArrays(((t_MathArrays *) arg)->object.this$));
      }
      static PyObject *t_MathArrays_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays_buildArray(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< JArray< ::org::hipparchus::FieldElement > > > result((jobject) NULL);

            if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::buildArray(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError(type, "buildArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkEqualLength(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[I[IZ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[K[KZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkEqualLength(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkEqualLength", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNonNegative(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jlong > a0((jobject) NULL);

            if (!parseArgs(args, "[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< JArray< jlong > > a0((jobject) NULL);

            if (!parseArgs(args, "[[J", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkNonNegative(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNonNegative", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkNotNaN(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkNotNaN(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkNotNaN", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkOrder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;

            if (!parseArgs(args, "[KKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DKZZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[KKZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::checkOrder(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "checkOrder", args);
        return NULL;
      }

      static PyObject *t_MathArrays_checkPositive(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkPositive(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkPositive", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_checkRectangular(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jlong > > a0((jobject) NULL);

        if (!parseArg(arg, "[[J", &a0))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::checkRectangular(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRectangular", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_concatenate(PyTypeObject *type, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::concatenate(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "concatenate", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_convolve(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::convolve(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "convolve", args);
        return NULL;
      }

      static PyObject *t_MathArrays_cosAngle(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::cosAngle(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "cosAngle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distance1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distance1(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distance1", args);
        return NULL;
      }

      static PyObject *t_MathArrays_distanceInf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::distanceInf(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "distanceInf", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeAdd(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeAdd(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeAdd", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeDivide(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeDivide(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeDivide", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeMultiply(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeMultiply(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeMultiply", args);
        return NULL;
      }

      static PyObject *t_MathArrays_ebeSubtract(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::ebeSubtract(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "ebeSubtract", args);
        return NULL;
      }

      static PyObject *t_MathArrays_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jbyte > a0((jobject) NULL);
            JArray< jbyte > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[B[B", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jlong > a0((jobject) NULL);
            JArray< jlong > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[J[J", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jshort > a0((jobject) NULL);
            JArray< jshort > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[S[S", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathArrays_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jfloat > a0((jobject) NULL);
            JArray< jfloat > a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "[F[F", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_MathArrays_isMonotonic(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[DKZ", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< ::java::lang::Comparable > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean result;

            if (!parseArgs(args, "[KKZ", ::java::lang::Comparable::initializeClass, ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::isMonotonic(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMonotonic", args);
        return NULL;
      }

      static PyObject *t_MathArrays_linearCombination(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 6:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble result;

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 8:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble result;

            if (!parseArgs(args, "DDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_MathArrays_natural(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        JArray< jint > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::natural(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "natural", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_normalizeArray(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble a1;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::normalizeArray(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalizeArray", args);
        return NULL;
      }

      static PyObject *t_MathArrays_safeNorm(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::safeNorm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "safeNorm", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_scale(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::scale(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "scale", args);
        return NULL;
      }

      static PyObject *t_MathArrays_scaleInPlace(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathArrays::scaleInPlace(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "scaleInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sequence(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        JArray< jint > result((jobject) NULL);

        if (!parseArgs(args, "III", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::sequence(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "sequence", args);
        return NULL;
      }

      static PyObject *t_MathArrays_shuffle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);

            if (!parseArgs(args, "[Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[IIK", ::org::hipparchus::util::MathArrays$Position::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 4:
          {
            JArray< jint > a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::util::MathArrays$Position a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::random::RandomGenerator a3((jobject) NULL);

            if (!parseArgs(args, "[IIKk", ::org::hipparchus::util::MathArrays$Position::initializeClass, ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::util::t_MathArrays$Position::parameters_, &a3))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::shuffle(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "shuffle", args);
        return NULL;
      }

      static PyObject *t_MathArrays_sortInPlace(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< JArray< jdouble > > a1((jobject) NULL);

            if (!parseArgs(args, "[D[[D", &a0, &a1))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::util::MathArrays$OrderDirection a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< JArray< jdouble > > a2((jobject) NULL);

            if (!parseArgs(args, "[DK[[D", ::org::hipparchus::util::MathArrays$OrderDirection::initializeClass, &a0, &a1, &p1, ::org::hipparchus::util::t_MathArrays$OrderDirection::parameters_, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathArrays::sortInPlace(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "sortInPlace", args);
        return NULL;
      }

      static PyObject *t_MathArrays_unique(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays::unique(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "unique", arg);
        return NULL;
      }

      static PyObject *t_MathArrays_verifyValues(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean result;

            if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jboolean a3;
            jboolean result;

            if (!parseArgs(args, "[DIIZ", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 5:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jint a2;
            jint a3;
            jboolean a4;
            jboolean result;

            if (!parseArgs(args, "[D[DIIZ", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathArrays::verifyValues(a0, a1, a2, a3, a4));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "verifyValues", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStepHandler::class$ = NULL;
        jmethodID *FieldODEStepHandler::mids$ = NULL;
        bool FieldODEStepHandler::live$ = false;

        jclass FieldODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_c314ae4458a4e52a] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_bcb27fe1570581e2] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepHandler::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_c314ae4458a4e52a], a0.this$);
        }

        void FieldODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_bcb27fe1570581e2], a0.this$);
        }

        void FieldODEStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepHandler)[] = {
          { Py_tp_methods, t_FieldODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepHandler, t_FieldODEStepHandler, FieldODEStepHandler);
        PyObject *t_FieldODEStepHandler::wrap_Object(const FieldODEStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepHandler), &PY_TYPE_DEF(FieldODEStepHandler), module, "FieldODEStepHandler", 0);
        }

        void t_FieldODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "class_", make_descriptor(FieldODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "wrapfn_", make_descriptor(t_FieldODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepHandler::wrap_Object(FieldODEStepHandler(((t_FieldODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEnablingPredicate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEnablingPredicate::class$ = NULL;
        jmethodID *PythonEnablingPredicate::mids$ = NULL;
        bool PythonEnablingPredicate::live$ = false;

        jclass PythonEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_8c5eb47902e17a6d] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEnablingPredicate::PythonEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEnablingPredicate::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self);
        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEnablingPredicate, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEnablingPredicate, t_PythonEnablingPredicate, PythonEnablingPredicate);

        void t_PythonEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEnablingPredicate), &PY_TYPE_DEF(PythonEnablingPredicate), module, "PythonEnablingPredicate", 1);
        }

        void t_PythonEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "class_", make_descriptor(PythonEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "wrapfn_", make_descriptor(t_PythonEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z", (void *) t_PythonEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonEnablingPredicate::wrap_Object(PythonEnablingPredicate(((t_PythonEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data)
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
#include "java/util/Date.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/Date.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Date::class$ = NULL;
    jmethodID *Date::mids$ = NULL;
    bool Date::live$ = false;

    jclass Date::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Date");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_init$_c80ec2f7d8b5fe87] = env->getMethodID(cls, "<init>", "(III)V");
        mids$[mid_init$_863ad0cd78e98df4] = env->getMethodID(cls, "<init>", "(IIIII)V");
        mids$[mid_init$_47d591670cfcc314] = env->getMethodID(cls, "<init>", "(IIIIII)V");
        mids$[mid_UTC_065681c4d7d832d5] = env->getStaticMethodID(cls, "UTC", "(IIIIII)J");
        mids$[mid_after_7b40bfcd353b1f24] = env->getMethodID(cls, "after", "(Ljava/util/Date;)Z");
        mids$[mid_before_7b40bfcd353b1f24] = env->getMethodID(cls, "before", "(Ljava/util/Date;)Z");
        mids$[mid_clone_dfd7647d9110ac9f] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_compareTo_f4beb817ef3c3ede] = env->getMethodID(cls, "compareTo", "(Ljava/util/Date;)I");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getDate_f2f64475e4580546] = env->getMethodID(cls, "getDate", "()I");
        mids$[mid_getDay_f2f64475e4580546] = env->getMethodID(cls, "getDay", "()I");
        mids$[mid_getHours_f2f64475e4580546] = env->getMethodID(cls, "getHours", "()I");
        mids$[mid_getMinutes_f2f64475e4580546] = env->getMethodID(cls, "getMinutes", "()I");
        mids$[mid_getMonth_f2f64475e4580546] = env->getMethodID(cls, "getMonth", "()I");
        mids$[mid_getSeconds_f2f64475e4580546] = env->getMethodID(cls, "getSeconds", "()I");
        mids$[mid_getTime_a27fc9afd27e559d] = env->getMethodID(cls, "getTime", "()J");
        mids$[mid_getTimezoneOffset_f2f64475e4580546] = env->getMethodID(cls, "getTimezoneOffset", "()I");
        mids$[mid_getYear_f2f64475e4580546] = env->getMethodID(cls, "getYear", "()I");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_parse_cd11fe529eef6ae9] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)J");
        mids$[mid_setDate_0a2a1ac2721c0336] = env->getMethodID(cls, "setDate", "(I)V");
        mids$[mid_setHours_0a2a1ac2721c0336] = env->getMethodID(cls, "setHours", "(I)V");
        mids$[mid_setMinutes_0a2a1ac2721c0336] = env->getMethodID(cls, "setMinutes", "(I)V");
        mids$[mid_setMonth_0a2a1ac2721c0336] = env->getMethodID(cls, "setMonth", "(I)V");
        mids$[mid_setSeconds_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeconds", "(I)V");
        mids$[mid_setTime_fefb08975c10f0a1] = env->getMethodID(cls, "setTime", "(J)V");
        mids$[mid_setYear_0a2a1ac2721c0336] = env->getMethodID(cls, "setYear", "(I)V");
        mids$[mid_toGMTString_0090f7797e403f43] = env->getMethodID(cls, "toGMTString", "()Ljava/lang/String;");
        mids$[mid_toLocaleString_0090f7797e403f43] = env->getMethodID(cls, "toLocaleString", "()Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Date::Date() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Date::Date(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Date::Date(jlong a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

    Date::Date(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c80ec2f7d8b5fe87, a0, a1, a2)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_863ad0cd78e98df4, a0, a1, a2, a3, a4)) {}

    Date::Date(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47d591670cfcc314, a0, a1, a2, a3, a4, a5)) {}

    jlong Date::UTC(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_UTC_065681c4d7d832d5], a0, a1, a2, a3, a4, a5);
    }

    jboolean Date::after(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_after_7b40bfcd353b1f24], a0.this$);
    }

    jboolean Date::before(const Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_before_7b40bfcd353b1f24], a0.this$);
    }

    ::java::lang::Object Date::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_dfd7647d9110ac9f]));
    }

    jint Date::compareTo(const Date & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_f4beb817ef3c3ede], a0.this$);
    }

    jboolean Date::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint Date::getDate() const
    {
      return env->callIntMethod(this$, mids$[mid_getDate_f2f64475e4580546]);
    }

    jint Date::getDay() const
    {
      return env->callIntMethod(this$, mids$[mid_getDay_f2f64475e4580546]);
    }

    jint Date::getHours() const
    {
      return env->callIntMethod(this$, mids$[mid_getHours_f2f64475e4580546]);
    }

    jint Date::getMinutes() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinutes_f2f64475e4580546]);
    }

    jint Date::getMonth() const
    {
      return env->callIntMethod(this$, mids$[mid_getMonth_f2f64475e4580546]);
    }

    jint Date::getSeconds() const
    {
      return env->callIntMethod(this$, mids$[mid_getSeconds_f2f64475e4580546]);
    }

    jlong Date::getTime() const
    {
      return env->callLongMethod(this$, mids$[mid_getTime_a27fc9afd27e559d]);
    }

    jint Date::getTimezoneOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getTimezoneOffset_f2f64475e4580546]);
    }

    jint Date::getYear() const
    {
      return env->callIntMethod(this$, mids$[mid_getYear_f2f64475e4580546]);
    }

    jint Date::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jlong Date::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parse_cd11fe529eef6ae9], a0.this$);
    }

    void Date::setDate(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDate_0a2a1ac2721c0336], a0);
    }

    void Date::setHours(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setHours_0a2a1ac2721c0336], a0);
    }

    void Date::setMinutes(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinutes_0a2a1ac2721c0336], a0);
    }

    void Date::setMonth(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonth_0a2a1ac2721c0336], a0);
    }

    void Date::setSeconds(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setSeconds_0a2a1ac2721c0336], a0);
    }

    void Date::setTime(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setTime_fefb08975c10f0a1], a0);
    }

    void Date::setYear(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setYear_0a2a1ac2721c0336], a0);
    }

    ::java::lang::String Date::toGMTString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGMTString_0090f7797e403f43]));
    }

    ::java::lang::String Date::toLocaleString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocaleString_0090f7797e403f43]));
    }

    ::java::lang::String Date::toString() const
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
    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args);
    static PyObject *t_Date_after(t_Date *self, PyObject *arg);
    static PyObject *t_Date_before(t_Date *self, PyObject *arg);
    static PyObject *t_Date_clone(t_Date *self);
    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg);
    static PyObject *t_Date_equals(t_Date *self, PyObject *args);
    static PyObject *t_Date_getDate(t_Date *self);
    static PyObject *t_Date_getDay(t_Date *self);
    static PyObject *t_Date_getHours(t_Date *self);
    static PyObject *t_Date_getMinutes(t_Date *self);
    static PyObject *t_Date_getMonth(t_Date *self);
    static PyObject *t_Date_getSeconds(t_Date *self);
    static PyObject *t_Date_getTime(t_Date *self);
    static PyObject *t_Date_getTimezoneOffset(t_Date *self);
    static PyObject *t_Date_getYear(t_Date *self);
    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args);
    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg);
    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg);
    static PyObject *t_Date_toGMTString(t_Date *self);
    static PyObject *t_Date_toLocaleString(t_Date *self);
    static PyObject *t_Date_toString(t_Date *self, PyObject *args);
    static PyObject *t_Date_get__date(t_Date *self, void *data);
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__day(t_Date *self, void *data);
    static PyObject *t_Date_get__hours(t_Date *self, void *data);
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__minutes(t_Date *self, void *data);
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__month(t_Date *self, void *data);
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__seconds(t_Date *self, void *data);
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__time(t_Date *self, void *data);
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data);
    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data);
    static PyObject *t_Date_get__year(t_Date *self, void *data);
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data);
    static PyGetSetDef t_Date__fields_[] = {
      DECLARE_GETSET_FIELD(t_Date, date),
      DECLARE_GET_FIELD(t_Date, day),
      DECLARE_GETSET_FIELD(t_Date, hours),
      DECLARE_GETSET_FIELD(t_Date, minutes),
      DECLARE_GETSET_FIELD(t_Date, month),
      DECLARE_GETSET_FIELD(t_Date, seconds),
      DECLARE_GETSET_FIELD(t_Date, time),
      DECLARE_GET_FIELD(t_Date, timezoneOffset),
      DECLARE_GETSET_FIELD(t_Date, year),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Date__methods_[] = {
      DECLARE_METHOD(t_Date, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, UTC, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Date, after, METH_O),
      DECLARE_METHOD(t_Date, before, METH_O),
      DECLARE_METHOD(t_Date, clone, METH_NOARGS),
      DECLARE_METHOD(t_Date, compareTo, METH_O),
      DECLARE_METHOD(t_Date, equals, METH_VARARGS),
      DECLARE_METHOD(t_Date, getDate, METH_NOARGS),
      DECLARE_METHOD(t_Date, getDay, METH_NOARGS),
      DECLARE_METHOD(t_Date, getHours, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMinutes, METH_NOARGS),
      DECLARE_METHOD(t_Date, getMonth, METH_NOARGS),
      DECLARE_METHOD(t_Date, getSeconds, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTime, METH_NOARGS),
      DECLARE_METHOD(t_Date, getTimezoneOffset, METH_NOARGS),
      DECLARE_METHOD(t_Date, getYear, METH_NOARGS),
      DECLARE_METHOD(t_Date, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Date, parse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Date, setDate, METH_O),
      DECLARE_METHOD(t_Date, setHours, METH_O),
      DECLARE_METHOD(t_Date, setMinutes, METH_O),
      DECLARE_METHOD(t_Date, setMonth, METH_O),
      DECLARE_METHOD(t_Date, setSeconds, METH_O),
      DECLARE_METHOD(t_Date, setTime, METH_O),
      DECLARE_METHOD(t_Date, setYear, METH_O),
      DECLARE_METHOD(t_Date, toGMTString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toLocaleString, METH_NOARGS),
      DECLARE_METHOD(t_Date, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Date)[] = {
      { Py_tp_methods, t_Date__methods_ },
      { Py_tp_init, (void *) t_Date_init_ },
      { Py_tp_getset, t_Date__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Date)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Date, t_Date, Date);

    void t_Date::install(PyObject *module)
    {
      installType(&PY_TYPE(Date), &PY_TYPE_DEF(Date), module, "Date", 0);
    }

    void t_Date::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "class_", make_descriptor(Date::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "wrapfn_", make_descriptor(t_Date::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Date), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Date_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Date::initializeClass, 1)))
        return NULL;
      return t_Date::wrap_Object(Date(((t_Date *) arg)->object.this$));
    }
    static PyObject *t_Date_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Date::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Date_init_(t_Date *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Date object((jobject) NULL);

          INT_CALL(object = Date());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Date object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Date object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Date(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          jint a0;
          jint a1;
          jint a2;
          Date object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = Date(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 5:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4));
            self->object = object;
            break;
          }
        }
        goto err;
       case 6:
        {
          jint a0;
          jint a1;
          jint a2;
          jint a3;
          jint a4;
          jint a5;
          Date object((jobject) NULL);

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Date(a0, a1, a2, a3, a4, a5));
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

    static PyObject *t_Date_UTC(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      jint a1;
      jint a2;
      jint a3;
      jint a4;
      jint a5;
      jlong result;

      if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = ::java::util::Date::UTC(a0, a1, a2, a3, a4, a5));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "UTC", args);
      return NULL;
    }

    static PyObject *t_Date_after(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.after(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "after", arg);
      return NULL;
    }

    static PyObject *t_Date_before(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.before(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "before", arg);
      return NULL;
    }

    static PyObject *t_Date_clone(t_Date *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Date_compareTo(t_Date *self, PyObject *arg)
    {
      Date a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Date_equals(t_Date *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Date_getDate(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDate());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getDay(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDay());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getHours(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getHours());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMinutes(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinutes());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getMonth(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMonth());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getSeconds(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getSeconds());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getTime(t_Date *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_Date_getTimezoneOffset(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_getYear(t_Date *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getYear());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Date_hashCode(t_Date *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Date_parse(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Date::parse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "parse", arg);
      return NULL;
    }

    static PyObject *t_Date_setDate(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setDate(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDate", arg);
      return NULL;
    }

    static PyObject *t_Date_setHours(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setHours(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setHours", arg);
      return NULL;
    }

    static PyObject *t_Date_setMinutes(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinutes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinutes", arg);
      return NULL;
    }

    static PyObject *t_Date_setMonth(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMonth(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonth", arg);
      return NULL;
    }

    static PyObject *t_Date_setSeconds(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setSeconds(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setSeconds", arg);
      return NULL;
    }

    static PyObject *t_Date_setTime(t_Date *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.setTime(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setTime", arg);
      return NULL;
    }

    static PyObject *t_Date_setYear(t_Date *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setYear(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setYear", arg);
      return NULL;
    }

    static PyObject *t_Date_toGMTString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGMTString());
      return j2p(result);
    }

    static PyObject *t_Date_toLocaleString(t_Date *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocaleString());
      return j2p(result);
    }

    static PyObject *t_Date_toString(t_Date *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Date), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Date_get__date(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDate());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__date(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setDate(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "date", arg);
      return -1;
    }

    static PyObject *t_Date_get__day(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDay());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__hours(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getHours());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__hours(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setHours(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "hours", arg);
      return -1;
    }

    static PyObject *t_Date_get__minutes(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinutes());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__minutes(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinutes(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minutes", arg);
      return -1;
    }

    static PyObject *t_Date_get__month(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMonth());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__month(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMonth(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "month", arg);
      return -1;
    }

    static PyObject *t_Date_get__seconds(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getSeconds());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__seconds(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setSeconds(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "seconds", arg);
      return -1;
    }

    static PyObject *t_Date_get__time(t_Date *self, void *data)
    {
      jlong value;
      OBJ_CALL(value = self->object.getTime());
      return PyLong_FromLongLong((PY_LONG_LONG) value);
    }
    static int t_Date_set__time(t_Date *self, PyObject *arg, void *data)
    {
      {
        jlong value;
        if (!parseArg(arg, "J", &value))
        {
          INT_CALL(self->object.setTime(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "time", arg);
      return -1;
    }

    static PyObject *t_Date_get__timezoneOffset(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getTimezoneOffset());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Date_get__year(t_Date *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getYear());
      return PyLong_FromLong((long) value);
    }
    static int t_Date_set__year(t_Date *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setYear(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "year", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane::mids$ = NULL;
        bool SubHyperplane::live$ = false;

        jclass SubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_a66e04f05d5608cc] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getHyperplane_e829aeefe0096202] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_e470b6d9e0d979db] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_55f41ec2172e02d3] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane SubHyperplane::copySelf() const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_a66e04f05d5608cc]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane SubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_e829aeefe0096202]));
        }

        jdouble SubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
        }

        jboolean SubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_e470b6d9e0d979db]);
        }

        SubHyperplane SubHyperplane::reunite(const SubHyperplane & a0) const
        {
          return SubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_55f41ec2172e02d3], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
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
        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args);
        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self);
        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg);
        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane, empty),
          DECLARE_GET_FIELD(t_SubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_SubHyperplane, size),
          DECLARE_GET_FIELD(t_SubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_SubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane, t_SubHyperplane, SubHyperplane);
        PyObject *t_SubHyperplane::wrap_Object(const SubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane *self = (t_SubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane), &PY_TYPE_DEF(SubHyperplane), module, "SubHyperplane", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "SplitSubHyperplane", make_descriptor(&PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane)));
        }

        void t_SubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "class_", make_descriptor(SubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane::wrap_Object(SubHyperplane(((t_SubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane_of_(t_SubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SubHyperplane_copySelf(t_SubHyperplane *self)
        {
          SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getHyperplane(t_SubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane_getSize(t_SubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SubHyperplane_isEmpty(t_SubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SubHyperplane_reunite(t_SubHyperplane *self, PyObject *arg)
        {
          SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", SubHyperplane::initializeClass, &a0, &p0, t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_SubHyperplane_split(t_SubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_SubHyperplane_get__parameters_(t_SubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane_get__empty(t_SubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_SubHyperplane_get__hyperplane(t_SubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane_get__size(t_SubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/Range.h"
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
            mids$[mid_init$_0922b0dcca6e1f60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Range::Range(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0922b0dcca6e1f60, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationDataSet::class$ = NULL;
          jmethodID *CombinedObservationDataSet::mids$ = NULL;
          bool CombinedObservationDataSet::live$ = false;

          jclass CombinedObservationDataSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationDataSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0c28318670149d72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/time/AbsoluteDate;DLjava/util/List;)V");
              mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getObservationData_a6156df500549a58] = env->getMethodID(cls, "getObservationData", "()Ljava/util/List;");
              mids$[mid_getPrnNumber_f2f64475e4580546] = env->getMethodID(cls, "getPrnNumber", "()I");
              mids$[mid_getRcvrClkOffset_456d9a2f64d6b28d] = env->getMethodID(cls, "getRcvrClkOffset", "()D");
              mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationDataSet::CombinedObservationDataSet(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0c28318670149d72, a0.this$, a1, a2.this$, a3, a4.this$)) {}

          ::org::orekit::time::AbsoluteDate CombinedObservationDataSet::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
          }

          ::java::util::List CombinedObservationDataSet::getObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationData_a6156df500549a58]));
          }

          jint CombinedObservationDataSet::getPrnNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrnNumber_f2f64475e4580546]);
          }

          jdouble CombinedObservationDataSet::getRcvrClkOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcvrClkOffset_456d9a2f64d6b28d]);
          }

          ::org::orekit::gnss::SatelliteSystem CombinedObservationDataSet::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_1b72fcc8f550bfc7]));
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
          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self);
          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data);
          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data);
          static PyGetSetDef t_CombinedObservationDataSet__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, date),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, observationData),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, prnNumber),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, rcvrClkOffset),
            DECLARE_GET_FIELD(t_CombinedObservationDataSet, satelliteSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationDataSet__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationDataSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getDate, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getPrnNumber, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getRcvrClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationDataSet, getSatelliteSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationDataSet)[] = {
            { Py_tp_methods, t_CombinedObservationDataSet__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationDataSet_init_ },
            { Py_tp_getset, t_CombinedObservationDataSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationDataSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationDataSet, t_CombinedObservationDataSet, CombinedObservationDataSet);

          void t_CombinedObservationDataSet::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationDataSet), &PY_TYPE_DEF(CombinedObservationDataSet), module, "CombinedObservationDataSet", 0);
          }

          void t_CombinedObservationDataSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "class_", make_descriptor(CombinedObservationDataSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "wrapfn_", make_descriptor(t_CombinedObservationDataSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationDataSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationDataSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationDataSet::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationDataSet::wrap_Object(CombinedObservationDataSet(((t_CombinedObservationDataSet *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationDataSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationDataSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationDataSet_init_(t_CombinedObservationDataSet *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationDataSet object((jobject) NULL);

            if (!parseArgs(args, "KIkDK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationDataSet(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationDataSet_getDate(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_getObservationData(t_CombinedObservationDataSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CombinedObservationData));
          }

          static PyObject *t_CombinedObservationDataSet_getPrnNumber(t_CombinedObservationDataSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrnNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CombinedObservationDataSet_getRcvrClkOffset(t_CombinedObservationDataSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationDataSet_getSatelliteSystem(t_CombinedObservationDataSet *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationDataSet_get__date(t_CombinedObservationDataSet *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__observationData(t_CombinedObservationDataSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationDataSet_get__prnNumber(t_CombinedObservationDataSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrnNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__rcvrClkOffset(t_CombinedObservationDataSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcvrClkOffset());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationDataSet_get__satelliteSystem(t_CombinedObservationDataSet *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/AbstractListCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractListCrawler::class$ = NULL;
      jmethodID *AbstractListCrawler::mids$ = NULL;
      bool AbstractListCrawler::live$ = false;

      jclass AbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addInput_7ca0d9438822cb0b] = env->getMethodID(cls, "addInput", "(Ljava/lang/Object;)V");
          mids$[mid_getInputs_a6156df500549a58] = env->getMethodID(cls, "getInputs", "()Ljava/util/List;");
          mids$[mid_getStream_25301161b6e4daa9] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getCompleteName_d5950e748b97110b] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getBaseName_d5950e748b97110b] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_5aeaff72b829467a] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractListCrawler::addInput(const ::java::lang::Object & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addInput_7ca0d9438822cb0b], a0.this$);
      }

      ::java::util::List AbstractListCrawler::getInputs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getInputs_a6156df500549a58]));
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
      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args);
      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg);
      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self);
      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data);
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data);
      static PyGetSetDef t_AbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractListCrawler, inputs),
        DECLARE_GET_FIELD(t_AbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_AbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractListCrawler, addInput, METH_O),
        DECLARE_METHOD(t_AbstractListCrawler, getInputs, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractListCrawler)[] = {
        { Py_tp_methods, t_AbstractListCrawler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractListCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractListCrawler, t_AbstractListCrawler, AbstractListCrawler);
      PyObject *t_AbstractListCrawler::wrap_Object(const AbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractListCrawler), &PY_TYPE_DEF(AbstractListCrawler), module, "AbstractListCrawler", 0);
      }

      void t_AbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "class_", make_descriptor(AbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "wrapfn_", make_descriptor(t_AbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_AbstractListCrawler::wrap_Object(AbstractListCrawler(((t_AbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(self->object.addInput(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addInput", arg);
        return NULL;
      }

      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2Field::mids$ = NULL;
        bool FieldUnivariateDerivative2Field::live$ = false;

        jclass FieldUnivariateDerivative2Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_93920066ce6cb101] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative2Field_cc85f31a76162ff0] = env->getStaticMethodID(cls, "getUnivariateDerivative2Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getZero_93920066ce6cb101] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative2Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getOne_93920066ce6cb101]));
        }

        ::java::lang::Class FieldUnivariateDerivative2Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        FieldUnivariateDerivative2Field FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative2Field_cc85f31a76162ff0], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 FieldUnivariateDerivative2Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getZero_93920066ce6cb101]));
        }

        jint FieldUnivariateDerivative2Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self);
        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getUnivariateDerivative2Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative2Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2Field, t_FieldUnivariateDerivative2Field, FieldUnivariateDerivative2Field);
        PyObject *t_FieldUnivariateDerivative2Field::wrap_Object(const FieldUnivariateDerivative2Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2Field *self = (t_FieldUnivariateDerivative2Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2Field), &PY_TYPE_DEF(FieldUnivariateDerivative2Field), module, "FieldUnivariateDerivative2Field", 0);
        }

        void t_FieldUnivariateDerivative2Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "class_", make_descriptor(FieldUnivariateDerivative2Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2Field::wrap_Object(FieldUnivariateDerivative2Field(((t_FieldUnivariateDerivative2Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_of_(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_equals(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getOne(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getRuntimeClass(t_FieldUnivariateDerivative2Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getUnivariateDerivative2Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field::getUnivariateDerivative2Field(a0));
            return t_FieldUnivariateDerivative2Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative2Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2Field_getZero(t_FieldUnivariateDerivative2Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_hashCode(t_FieldUnivariateDerivative2Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2Field_get__parameters_(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__one(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__runtimeClass(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2Field_get__zero(t_FieldUnivariateDerivative2Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2::wrap_Object(value);
        }
      }
    }
  }
}
