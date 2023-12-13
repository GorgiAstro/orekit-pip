#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Module.h"
#include "java/lang/ModuleLayer.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Module.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Module::class$ = NULL;
    jmethodID *Module::mids$ = NULL;
    bool Module::live$ = false;

    jclass Module::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Module");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addExports_d9074c75ac59e276] = env->getMethodID(cls, "addExports", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addOpens_d9074c75ac59e276] = env->getMethodID(cls, "addOpens", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addReads_383fc8aab10c350a] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;)Ljava/lang/Module;");
        mids$[mid_addUses_bb473f7885ba10f9] = env->getMethodID(cls, "addUses", "(Ljava/lang/Class;)Ljava/lang/Module;");
        mids$[mid_canRead_cc1516eb3a5c7d9f] = env->getMethodID(cls, "canRead", "(Ljava/lang/Module;)Z");
        mids$[mid_canUse_a24f4963f111aa48] = env->getMethodID(cls, "canUse", "(Ljava/lang/Class;)Z");
        mids$[mid_getClassLoader_fb951be34fc77929] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getLayer_c147713285b11692] = env->getMethodID(cls, "getLayer", "()Ljava/lang/ModuleLayer;");
        mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackages_7e8f11dd23d1142c] = env->getMethodID(cls, "getPackages", "()Ljava/util/Set;");
        mids$[mid_getResourceAsStream_6831515bfd9973e1] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_isExported_cde6b28e15c96b75] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;)Z");
        mids$[mid_isExported_879a9d39890cfffe] = env->getMethodID(cls, "isExported", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_isNamed_9ab94ac1dc23b105] = env->getMethodID(cls, "isNamed", "()Z");
        mids$[mid_isOpen_cde6b28e15c96b75] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;)Z");
        mids$[mid_isOpen_879a9d39890cfffe] = env->getMethodID(cls, "isOpen", "(Ljava/lang/String;Ljava/lang/Module;)Z");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Module Module::addExports(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addExports_d9074c75ac59e276], a0.this$, a1.this$));
    }

    Module Module::addOpens(const ::java::lang::String & a0, const Module & a1) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addOpens_d9074c75ac59e276], a0.this$, a1.this$));
    }

    Module Module::addReads(const Module & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addReads_383fc8aab10c350a], a0.this$));
    }

    Module Module::addUses(const ::java::lang::Class & a0) const
    {
      return Module(env->callObjectMethod(this$, mids$[mid_addUses_bb473f7885ba10f9], a0.this$));
    }

    jboolean Module::canRead(const Module & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canRead_cc1516eb3a5c7d9f], a0.this$);
    }

    jboolean Module::canUse(const ::java::lang::Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_canUse_a24f4963f111aa48], a0.this$);
    }

    ::java::lang::ClassLoader Module::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_fb951be34fc77929]));
    }

    ::java::lang::ModuleLayer Module::getLayer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_getLayer_c147713285b11692]));
    }

    ::java::lang::String Module::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
    }

    ::java::util::Set Module::getPackages() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getPackages_7e8f11dd23d1142c]));
    }

    ::java::io::InputStream Module::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_6831515bfd9973e1], a0.this$));
    }

    jboolean Module::isExported(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_cde6b28e15c96b75], a0.this$);
    }

    jboolean Module::isExported(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isExported_879a9d39890cfffe], a0.this$, a1.this$);
    }

    jboolean Module::isNamed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNamed_9ab94ac1dc23b105]);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_cde6b28e15c96b75], a0.this$);
    }

    jboolean Module::isOpen(const ::java::lang::String & a0, const Module & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isOpen_879a9d39890cfffe], a0.this$, a1.this$);
    }

    ::java::lang::String Module::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Module_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Module_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Module_addExports(t_Module *self, PyObject *args);
    static PyObject *t_Module_addOpens(t_Module *self, PyObject *args);
    static PyObject *t_Module_addReads(t_Module *self, PyObject *arg);
    static PyObject *t_Module_addUses(t_Module *self, PyObject *arg);
    static PyObject *t_Module_canRead(t_Module *self, PyObject *arg);
    static PyObject *t_Module_canUse(t_Module *self, PyObject *arg);
    static PyObject *t_Module_getClassLoader(t_Module *self);
    static PyObject *t_Module_getLayer(t_Module *self);
    static PyObject *t_Module_getName(t_Module *self);
    static PyObject *t_Module_getPackages(t_Module *self);
    static PyObject *t_Module_getResourceAsStream(t_Module *self, PyObject *arg);
    static PyObject *t_Module_isExported(t_Module *self, PyObject *args);
    static PyObject *t_Module_isNamed(t_Module *self);
    static PyObject *t_Module_isOpen(t_Module *self, PyObject *args);
    static PyObject *t_Module_toString(t_Module *self, PyObject *args);
    static PyObject *t_Module_get__classLoader(t_Module *self, void *data);
    static PyObject *t_Module_get__layer(t_Module *self, void *data);
    static PyObject *t_Module_get__name(t_Module *self, void *data);
    static PyObject *t_Module_get__named(t_Module *self, void *data);
    static PyObject *t_Module_get__packages(t_Module *self, void *data);
    static PyGetSetDef t_Module__fields_[] = {
      DECLARE_GET_FIELD(t_Module, classLoader),
      DECLARE_GET_FIELD(t_Module, layer),
      DECLARE_GET_FIELD(t_Module, name),
      DECLARE_GET_FIELD(t_Module, named),
      DECLARE_GET_FIELD(t_Module, packages),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Module__methods_[] = {
      DECLARE_METHOD(t_Module, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Module, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Module, addExports, METH_VARARGS),
      DECLARE_METHOD(t_Module, addOpens, METH_VARARGS),
      DECLARE_METHOD(t_Module, addReads, METH_O),
      DECLARE_METHOD(t_Module, addUses, METH_O),
      DECLARE_METHOD(t_Module, canRead, METH_O),
      DECLARE_METHOD(t_Module, canUse, METH_O),
      DECLARE_METHOD(t_Module, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Module, getLayer, METH_NOARGS),
      DECLARE_METHOD(t_Module, getName, METH_NOARGS),
      DECLARE_METHOD(t_Module, getPackages, METH_NOARGS),
      DECLARE_METHOD(t_Module, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Module, isExported, METH_VARARGS),
      DECLARE_METHOD(t_Module, isNamed, METH_NOARGS),
      DECLARE_METHOD(t_Module, isOpen, METH_VARARGS),
      DECLARE_METHOD(t_Module, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Module)[] = {
      { Py_tp_methods, t_Module__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Module__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Module)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Module, t_Module, Module);

    void t_Module::install(PyObject *module)
    {
      installType(&PY_TYPE(Module), &PY_TYPE_DEF(Module), module, "Module", 0);
    }

    void t_Module::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Module), "class_", make_descriptor(Module::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Module), "wrapfn_", make_descriptor(t_Module::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Module), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Module_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Module::initializeClass, 1)))
        return NULL;
      return t_Module::wrap_Object(Module(((t_Module *) arg)->object.this$));
    }
    static PyObject *t_Module_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Module::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Module_addExports(t_Module *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Module a1((jobject) NULL);
      Module result((jobject) NULL);

      if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addExports(a0, a1));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addExports", args);
      return NULL;
    }

    static PyObject *t_Module_addOpens(t_Module *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Module a1((jobject) NULL);
      Module result((jobject) NULL);

      if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addOpens(a0, a1));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addOpens", args);
      return NULL;
    }

    static PyObject *t_Module_addReads(t_Module *self, PyObject *arg)
    {
      Module a0((jobject) NULL);
      Module result((jobject) NULL);

      if (!parseArg(arg, "k", Module::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.addReads(a0));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addReads", arg);
      return NULL;
    }

    static PyObject *t_Module_addUses(t_Module *self, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      Module result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.addUses(a0));
        return t_Module::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addUses", arg);
      return NULL;
    }

    static PyObject *t_Module_canRead(t_Module *self, PyObject *arg)
    {
      Module a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", Module::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.canRead(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "canRead", arg);
      return NULL;
    }

    static PyObject *t_Module_canUse(t_Module *self, PyObject *arg)
    {
      ::java::lang::Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::lang::Class::initializeClass, &a0, &p0, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.canUse(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "canUse", arg);
      return NULL;
    }

    static PyObject *t_Module_getClassLoader(t_Module *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Module_getLayer(t_Module *self)
    {
      ::java::lang::ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = self->object.getLayer());
      return ::java::lang::t_ModuleLayer::wrap_Object(result);
    }

    static PyObject *t_Module_getName(t_Module *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Module_getPackages(t_Module *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackages());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Module_getResourceAsStream(t_Module *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_Module_isExported(t_Module *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isExported(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Module a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.isExported(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "isExported", args);
      return NULL;
    }

    static PyObject *t_Module_isNamed(t_Module *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNamed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Module_isOpen(t_Module *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isOpen(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Module a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "sk", Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.isOpen(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "isOpen", args);
      return NULL;
    }

    static PyObject *t_Module_toString(t_Module *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Module), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Module_get__classLoader(t_Module *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Module_get__layer(t_Module *self, void *data)
    {
      ::java::lang::ModuleLayer value((jobject) NULL);
      OBJ_CALL(value = self->object.getLayer());
      return ::java::lang::t_ModuleLayer::wrap_Object(value);
    }

    static PyObject *t_Module_get__name(t_Module *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Module_get__named(t_Module *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNamed());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Module_get__packages(t_Module *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackages());
      return ::java::util::t_Set::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Comparable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Comparable::class$ = NULL;
    jmethodID *Comparable::mids$ = NULL;
    bool Comparable::live$ = false;

    jclass Comparable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Comparable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compareTo_b7898c5e94612125] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Object;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparable::compareTo(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_b7898c5e94612125], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Comparable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparable_of_(t_Comparable *self, PyObject *args);
    static PyObject *t_Comparable_compareTo(t_Comparable *self, PyObject *arg);
    static PyObject *t_Comparable_get__parameters_(t_Comparable *self, void *data);
    static PyGetSetDef t_Comparable__fields_[] = {
      DECLARE_GET_FIELD(t_Comparable, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Comparable__methods_[] = {
      DECLARE_METHOD(t_Comparable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparable, of_, METH_VARARGS),
      DECLARE_METHOD(t_Comparable, compareTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Comparable)[] = {
      { Py_tp_methods, t_Comparable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Comparable__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Comparable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Comparable, t_Comparable, Comparable);
    PyObject *t_Comparable::wrap_Object(const Comparable& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparable::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparable *self = (t_Comparable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Comparable::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparable::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparable *self = (t_Comparable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Comparable::install(PyObject *module)
    {
      installType(&PY_TYPE(Comparable), &PY_TYPE_DEF(Comparable), module, "Comparable", 0);
    }

    void t_Comparable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparable), "class_", make_descriptor(Comparable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparable), "wrapfn_", make_descriptor(t_Comparable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Comparable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Comparable::initializeClass, 1)))
        return NULL;
      return t_Comparable::wrap_Object(Comparable(((t_Comparable *) arg)->object.this$));
    }
    static PyObject *t_Comparable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Comparable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Comparable_of_(t_Comparable *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Comparable_compareTo(t_Comparable *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }
    static PyObject *t_Comparable_get__parameters_(t_Comparable *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ClassNotFoundException::class$ = NULL;
    jmethodID *ClassNotFoundException::mids$ = NULL;
    bool ClassNotFoundException::live$ = false;

    jclass ClassNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ClassNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_getCause_8ccc799e0abbc77e] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getException_8ccc799e0abbc77e] = env->getMethodID(cls, "getException", "()Ljava/lang/Throwable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ClassNotFoundException::ClassNotFoundException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}

    ::java::lang::Throwable ClassNotFoundException::getCause() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getCause_8ccc799e0abbc77e]));
    }

    ::java::lang::Throwable ClassNotFoundException::getException() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getException_8ccc799e0abbc77e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args);
    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self);
    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data);
    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data);
    static PyGetSetDef t_ClassNotFoundException__fields_[] = {
      DECLARE_GET_FIELD(t_ClassNotFoundException, cause),
      DECLARE_GET_FIELD(t_ClassNotFoundException, exception),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ClassNotFoundException__methods_[] = {
      DECLARE_METHOD(t_ClassNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassNotFoundException, getCause, METH_VARARGS),
      DECLARE_METHOD(t_ClassNotFoundException, getException, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ClassNotFoundException)[] = {
      { Py_tp_methods, t_ClassNotFoundException__methods_ },
      { Py_tp_init, (void *) t_ClassNotFoundException_init_ },
      { Py_tp_getset, t_ClassNotFoundException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ClassNotFoundException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(ClassNotFoundException, t_ClassNotFoundException, ClassNotFoundException);

    void t_ClassNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(ClassNotFoundException), &PY_TYPE_DEF(ClassNotFoundException), module, "ClassNotFoundException", 0);
    }

    void t_ClassNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "class_", make_descriptor(ClassNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "wrapfn_", make_descriptor(t_ClassNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ClassNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ClassNotFoundException::initializeClass, 1)))
        return NULL;
      return t_ClassNotFoundException::wrap_Object(ClassNotFoundException(((t_ClassNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_ClassNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ClassNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ClassNotFoundException_init_(t_ClassNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ClassNotFoundException object((jobject) NULL);

          INT_CALL(object = ClassNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ClassNotFoundException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ClassNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ClassNotFoundException(a0, a1));
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

    static PyObject *t_ClassNotFoundException_getCause(t_ClassNotFoundException *self, PyObject *args)
    {
      ::java::lang::Throwable result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCause());
        return ::java::lang::t_Throwable::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ClassNotFoundException), (PyObject *) self, "getCause", args, 2);
    }

    static PyObject *t_ClassNotFoundException_getException(t_ClassNotFoundException *self)
    {
      ::java::lang::Throwable result((jobject) NULL);
      OBJ_CALL(result = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(result);
    }

    static PyObject *t_ClassNotFoundException_get__cause(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getCause());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }

    static PyObject *t_ClassNotFoundException_get__exception(t_ClassNotFoundException *self, void *data)
    {
      ::java::lang::Throwable value((jobject) NULL);
      OBJ_CALL(value = self->object.getException());
      return ::java::lang::t_Throwable::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map$Entry.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Map$Entry::class$ = NULL;
    jmethodID *Map$Entry::mids$ = NULL;
    bool Map$Entry::live$ = false;

    jclass Map$Entry::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Map$Entry");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparingByKey_127b1bec8b0c3ae1] = env->getStaticMethodID(cls, "comparingByKey", "()Ljava/util/Comparator;");
        mids$[mid_comparingByKey_09cb371d3e63c195] = env->getStaticMethodID(cls, "comparingByKey", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_comparingByValue_127b1bec8b0c3ae1] = env->getStaticMethodID(cls, "comparingByValue", "()Ljava/util/Comparator;");
        mids$[mid_comparingByValue_09cb371d3e63c195] = env->getStaticMethodID(cls, "comparingByValue", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getKey_541690f9ee81d3ad] = env->getMethodID(cls, "getKey", "()Ljava/lang/Object;");
        mids$[mid_getValue_541690f9ee81d3ad] = env->getMethodID(cls, "getValue", "()Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setValue_5804c890f94a02b6] = env->getMethodID(cls, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator Map$Entry::comparingByKey()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_127b1bec8b0c3ae1]));
    }

    ::java::util::Comparator Map$Entry::comparingByKey(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByKey_09cb371d3e63c195], a0.this$));
    }

    ::java::util::Comparator Map$Entry::comparingByValue()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_127b1bec8b0c3ae1]));
    }

    ::java::util::Comparator Map$Entry::comparingByValue(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_comparingByValue_09cb371d3e63c195], a0.this$));
    }

    jboolean Map$Entry::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Map$Entry::getKey() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getKey_541690f9ee81d3ad]));
    }

    ::java::lang::Object Map$Entry::getValue() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getValue_541690f9ee81d3ad]));
    }

    jint Map$Entry::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    ::java::lang::Object Map$Entry::setValue(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setValue_5804c890f94a02b6], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Map$Entry_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map$Entry_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Map$Entry_of_(t_Map$Entry *self, PyObject *args);
    static PyObject *t_Map$Entry_comparingByKey(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map$Entry_comparingByValue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Map$Entry_equals(t_Map$Entry *self, PyObject *args);
    static PyObject *t_Map$Entry_getKey(t_Map$Entry *self);
    static PyObject *t_Map$Entry_getValue(t_Map$Entry *self);
    static PyObject *t_Map$Entry_hashCode(t_Map$Entry *self, PyObject *args);
    static PyObject *t_Map$Entry_setValue(t_Map$Entry *self, PyObject *arg);
    static PyObject *t_Map$Entry_get__key(t_Map$Entry *self, void *data);
    static PyObject *t_Map$Entry_get__value(t_Map$Entry *self, void *data);
    static int t_Map$Entry_set__value(t_Map$Entry *self, PyObject *arg, void *data);
    static PyObject *t_Map$Entry_get__parameters_(t_Map$Entry *self, void *data);
    static PyGetSetDef t_Map$Entry__fields_[] = {
      DECLARE_GET_FIELD(t_Map$Entry, key),
      DECLARE_GETSET_FIELD(t_Map$Entry, value),
      DECLARE_GET_FIELD(t_Map$Entry, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Map$Entry__methods_[] = {
      DECLARE_METHOD(t_Map$Entry, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, of_, METH_VARARGS),
      DECLARE_METHOD(t_Map$Entry, comparingByKey, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, comparingByValue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Map$Entry, equals, METH_VARARGS),
      DECLARE_METHOD(t_Map$Entry, getKey, METH_NOARGS),
      DECLARE_METHOD(t_Map$Entry, getValue, METH_NOARGS),
      DECLARE_METHOD(t_Map$Entry, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Map$Entry, setValue, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Map$Entry)[] = {
      { Py_tp_methods, t_Map$Entry__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Map$Entry__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Map$Entry)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Map$Entry, t_Map$Entry, Map$Entry);
    PyObject *t_Map$Entry::wrap_Object(const Map$Entry& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map$Entry::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map$Entry *self = (t_Map$Entry *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Map$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Map$Entry::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Map$Entry *self = (t_Map$Entry *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Map$Entry::install(PyObject *module)
    {
      installType(&PY_TYPE(Map$Entry), &PY_TYPE_DEF(Map$Entry), module, "Map$Entry", 0);
    }

    void t_Map$Entry::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map$Entry), "class_", make_descriptor(Map$Entry::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map$Entry), "wrapfn_", make_descriptor(t_Map$Entry::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Map$Entry), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Map$Entry_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Map$Entry::initializeClass, 1)))
        return NULL;
      return t_Map$Entry::wrap_Object(Map$Entry(((t_Map$Entry *) arg)->object.this$));
    }
    static PyObject *t_Map$Entry_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Map$Entry::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Map$Entry_of_(t_Map$Entry *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Map$Entry_comparingByKey(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map$Entry::comparingByKey());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Map$Entry::comparingByKey(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "comparingByKey", args);
      return NULL;
    }

    static PyObject *t_Map$Entry_comparingByValue(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Map$Entry::comparingByValue());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Map$Entry::comparingByValue(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "comparingByValue", args);
      return NULL;
    }

    static PyObject *t_Map$Entry_equals(t_Map$Entry *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Map$Entry), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Map$Entry_getKey(t_Map$Entry *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getKey());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Map$Entry_getValue(t_Map$Entry *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getValue());
      return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Map$Entry_hashCode(t_Map$Entry *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Map$Entry), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Map$Entry_setValue(t_Map$Entry *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[1], &a0))
      {
        OBJ_CALL(result = self->object.setValue(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setValue", arg);
      return NULL;
    }
    static PyObject *t_Map$Entry_get__parameters_(t_Map$Entry *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Map$Entry_get__key(t_Map$Entry *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getKey());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_Map$Entry_get__value(t_Map$Entry *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getValue());
      return ::java::lang::t_Object::wrap_Object(value);
    }
    static int t_Map$Entry_set__value(t_Map$Entry *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::Object value((jobject) NULL);
        if (!parseArg(arg, "o", &value))
        {
          INT_CALL(self->object.setValue(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "value", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ReflectiveOperationException::class$ = NULL;
    jmethodID *ReflectiveOperationException::mids$ = NULL;
    bool ReflectiveOperationException::live$ = false;

    jclass ReflectiveOperationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ReflectiveOperationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ReflectiveOperationException::ReflectiveOperationException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    ReflectiveOperationException::ReflectiveOperationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ReflectiveOperationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ReflectiveOperationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ReflectiveOperationException_init_(t_ReflectiveOperationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_ReflectiveOperationException__methods_[] = {
      DECLARE_METHOD(t_ReflectiveOperationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ReflectiveOperationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ReflectiveOperationException)[] = {
      { Py_tp_methods, t_ReflectiveOperationException__methods_ },
      { Py_tp_init, (void *) t_ReflectiveOperationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ReflectiveOperationException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(ReflectiveOperationException, t_ReflectiveOperationException, ReflectiveOperationException);

    void t_ReflectiveOperationException::install(PyObject *module)
    {
      installType(&PY_TYPE(ReflectiveOperationException), &PY_TYPE_DEF(ReflectiveOperationException), module, "ReflectiveOperationException", 0);
    }

    void t_ReflectiveOperationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "class_", make_descriptor(ReflectiveOperationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "wrapfn_", make_descriptor(t_ReflectiveOperationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ReflectiveOperationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ReflectiveOperationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ReflectiveOperationException::initializeClass, 1)))
        return NULL;
      return t_ReflectiveOperationException::wrap_Object(ReflectiveOperationException(((t_ReflectiveOperationException *) arg)->object.this$));
    }
    static PyObject *t_ReflectiveOperationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ReflectiveOperationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ReflectiveOperationException_init_(t_ReflectiveOperationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ReflectiveOperationException object((jobject) NULL);

          INT_CALL(object = ReflectiveOperationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ReflectiveOperationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = ReflectiveOperationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ReflectiveOperationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ReflectiveOperationException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/util/Map.h"
#include "java/text/AttributedCharacterIterator$Attribute.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *AttributedCharacterIterator::class$ = NULL;
    jmethodID *AttributedCharacterIterator::mids$ = NULL;
    bool AttributedCharacterIterator::live$ = false;

    jclass AttributedCharacterIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/AttributedCharacterIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAllAttributeKeys_7e8f11dd23d1142c] = env->getMethodID(cls, "getAllAttributeKeys", "()Ljava/util/Set;");
        mids$[mid_getAttribute_35104434eb6bd0ee] = env->getMethodID(cls, "getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/lang/Object;");
        mids$[mid_getAttributes_810bed48fafb0b9a] = env->getMethodID(cls, "getAttributes", "()Ljava/util/Map;");
        mids$[mid_getRunLimit_55546ef6a647f39b] = env->getMethodID(cls, "getRunLimit", "()I");
        mids$[mid_getRunLimit_b0eeda8f546a1c45] = env->getMethodID(cls, "getRunLimit", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunLimit_9dfa3140bb9ea2c1] = env->getMethodID(cls, "getRunLimit", "(Ljava/util/Set;)I");
        mids$[mid_getRunStart_55546ef6a647f39b] = env->getMethodID(cls, "getRunStart", "()I");
        mids$[mid_getRunStart_b0eeda8f546a1c45] = env->getMethodID(cls, "getRunStart", "(Ljava/text/AttributedCharacterIterator$Attribute;)I");
        mids$[mid_getRunStart_9dfa3140bb9ea2c1] = env->getMethodID(cls, "getRunStart", "(Ljava/util/Set;)I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set AttributedCharacterIterator::getAllAttributeKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getAllAttributeKeys_7e8f11dd23d1142c]));
    }

    ::java::lang::Object AttributedCharacterIterator::getAttribute(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_35104434eb6bd0ee], a0.this$));
    }

    ::java::util::Map AttributedCharacterIterator::getAttributes() const
    {
      return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAttributes_810bed48fafb0b9a]));
    }

    jint AttributedCharacterIterator::getRunLimit() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_55546ef6a647f39b]);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_b0eeda8f546a1c45], a0.this$);
    }

    jint AttributedCharacterIterator::getRunLimit(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunLimit_9dfa3140bb9ea2c1], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart() const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_55546ef6a647f39b]);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::text::AttributedCharacterIterator$Attribute & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_b0eeda8f546a1c45], a0.this$);
    }

    jint AttributedCharacterIterator::getRunStart(const ::java::util::Set & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getRunStart_9dfa3140bb9ea2c1], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg);
    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self);
    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args);
    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data);
    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data);
    static PyGetSetDef t_AttributedCharacterIterator__fields_[] = {
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, allAttributeKeys),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, attributes),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runLimit),
      DECLARE_GET_FIELD(t_AttributedCharacterIterator, runStart),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AttributedCharacterIterator__methods_[] = {
      DECLARE_METHOD(t_AttributedCharacterIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAllAttributeKeys, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttribute, METH_O),
      DECLARE_METHOD(t_AttributedCharacterIterator, getAttributes, METH_NOARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunLimit, METH_VARARGS),
      DECLARE_METHOD(t_AttributedCharacterIterator, getRunStart, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AttributedCharacterIterator)[] = {
      { Py_tp_methods, t_AttributedCharacterIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AttributedCharacterIterator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AttributedCharacterIterator)[] = {
      &PY_TYPE_DEF(::java::text::CharacterIterator),
      NULL
    };

    DEFINE_TYPE(AttributedCharacterIterator, t_AttributedCharacterIterator, AttributedCharacterIterator);

    void t_AttributedCharacterIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(AttributedCharacterIterator), &PY_TYPE_DEF(AttributedCharacterIterator), module, "AttributedCharacterIterator", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "Attribute", make_descriptor(&PY_TYPE_DEF(AttributedCharacterIterator$Attribute)));
    }

    void t_AttributedCharacterIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "class_", make_descriptor(AttributedCharacterIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "wrapfn_", make_descriptor(t_AttributedCharacterIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AttributedCharacterIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AttributedCharacterIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AttributedCharacterIterator::initializeClass, 1)))
        return NULL;
      return t_AttributedCharacterIterator::wrap_Object(AttributedCharacterIterator(((t_AttributedCharacterIterator *) arg)->object.this$));
    }
    static PyObject *t_AttributedCharacterIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AttributedCharacterIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AttributedCharacterIterator_getAllAttributeKeys(t_AttributedCharacterIterator *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute));
    }

    static PyObject *t_AttributedCharacterIterator_getAttribute(t_AttributedCharacterIterator *self, PyObject *arg)
    {
      ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.getAttribute(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getAttribute", arg);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getAttributes(t_AttributedCharacterIterator *self)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(result, ::java::text::PY_TYPE(AttributedCharacterIterator$Attribute), ::java::lang::PY_TYPE(Object));
    }

    static PyObject *t_AttributedCharacterIterator_getRunLimit(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunLimit());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunLimit(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunLimit", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_getRunStart(t_AttributedCharacterIterator *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.getRunStart());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          ::java::text::AttributedCharacterIterator$Attribute a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "k", ::java::text::AttributedCharacterIterator$Attribute::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::util::Set a0((jobject) NULL);
          PyTypeObject **p0;
          jint result;

          if (!parseArgs(args, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
          {
            OBJ_CALL(result = self->object.getRunStart(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getRunStart", args);
      return NULL;
    }

    static PyObject *t_AttributedCharacterIterator_get__allAttributeKeys(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAllAttributeKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__attributes(t_AttributedCharacterIterator *self, void *data)
    {
      ::java::util::Map value((jobject) NULL);
      OBJ_CALL(value = self->object.getAttributes());
      return ::java::util::t_Map::wrap_Object(value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runLimit(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunLimit());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_AttributedCharacterIterator_get__runStart(t_AttributedCharacterIterator *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRunStart());
      return PyLong_FromLong((long) value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputValidation.h"
#include "java/io/InvalidObjectException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputValidation::class$ = NULL;
    jmethodID *ObjectInputValidation::mids$ = NULL;
    bool ObjectInputValidation::live$ = false;

    jclass ObjectInputValidation::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputValidation");

        mids$ = new jmethodID[max_mid];
        mids$[mid_validateObject_a1fa5dae97ea5ed2] = env->getMethodID(cls, "validateObject", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectInputValidation::validateObject() const
    {
      env->callVoidMethod(this$, mids$[mid_validateObject_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputValidation_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputValidation_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputValidation_validateObject(t_ObjectInputValidation *self);

    static PyMethodDef t_ObjectInputValidation__methods_[] = {
      DECLARE_METHOD(t_ObjectInputValidation, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputValidation, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputValidation, validateObject, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputValidation)[] = {
      { Py_tp_methods, t_ObjectInputValidation__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputValidation)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputValidation, t_ObjectInputValidation, ObjectInputValidation);

    void t_ObjectInputValidation::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputValidation), &PY_TYPE_DEF(ObjectInputValidation), module, "ObjectInputValidation", 0);
    }

    void t_ObjectInputValidation::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputValidation), "class_", make_descriptor(ObjectInputValidation::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputValidation), "wrapfn_", make_descriptor(t_ObjectInputValidation::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputValidation), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputValidation_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputValidation::initializeClass, 1)))
        return NULL;
      return t_ObjectInputValidation::wrap_Object(ObjectInputValidation(((t_ObjectInputValidation *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputValidation_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputValidation::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInputValidation_validateObject(t_ObjectInputValidation *self)
    {
      OBJ_CALL(self->object.validateObject());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Closeable::class$ = NULL;
    jmethodID *Closeable::mids$ = NULL;
    bool Closeable::live$ = false;

    jclass Closeable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Closeable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Closeable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Closeable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Closeable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Closeable_close(t_Closeable *self, PyObject *args);

    static PyMethodDef t_Closeable__methods_[] = {
      DECLARE_METHOD(t_Closeable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Closeable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Closeable, close, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Closeable)[] = {
      { Py_tp_methods, t_Closeable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Closeable)[] = {
      &PY_TYPE_DEF(::java::lang::AutoCloseable),
      NULL
    };

    DEFINE_TYPE(Closeable, t_Closeable, Closeable);

    void t_Closeable::install(PyObject *module)
    {
      installType(&PY_TYPE(Closeable), &PY_TYPE_DEF(Closeable), module, "Closeable", 0);
    }

    void t_Closeable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Closeable), "class_", make_descriptor(Closeable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Closeable), "wrapfn_", make_descriptor(t_Closeable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Closeable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Closeable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Closeable::initializeClass, 1)))
        return NULL;
      return t_Closeable::wrap_Object(Closeable(((t_Closeable *) arg)->object.this$));
    }
    static PyObject *t_Closeable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Closeable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Closeable_close(t_Closeable *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Closeable), (PyObject *) self, "close", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/EventListener.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventListener::class$ = NULL;
    jmethodID *EventListener::mids$ = NULL;
    bool EventListener::live$ = false;

    jclass EventListener::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventListener");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_EventListener_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventListener_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_EventListener__methods_[] = {
      DECLARE_METHOD(t_EventListener, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventListener, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventListener)[] = {
      { Py_tp_methods, t_EventListener__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventListener)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventListener, t_EventListener, EventListener);

    void t_EventListener::install(PyObject *module)
    {
      installType(&PY_TYPE(EventListener), &PY_TYPE_DEF(EventListener), module, "EventListener", 0);
    }

    void t_EventListener::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventListener), "class_", make_descriptor(EventListener::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventListener), "wrapfn_", make_descriptor(t_EventListener::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventListener), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventListener_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventListener::initializeClass, 1)))
        return NULL;
      return t_EventListener::wrap_Object(EventListener(((t_EventListener *) arg)->object.this$));
    }
    static PyObject *t_EventListener_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventListener::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ConcurrentModificationException::class$ = NULL;
    jmethodID *ConcurrentModificationException::mids$ = NULL;
    bool ConcurrentModificationException::live$ = false;

    jclass ConcurrentModificationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ConcurrentModificationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ConcurrentModificationException::ConcurrentModificationException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ConcurrentModificationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ConcurrentModificationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ConcurrentModificationException_init_(t_ConcurrentModificationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_ConcurrentModificationException__methods_[] = {
      DECLARE_METHOD(t_ConcurrentModificationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ConcurrentModificationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ConcurrentModificationException)[] = {
      { Py_tp_methods, t_ConcurrentModificationException__methods_ },
      { Py_tp_init, (void *) t_ConcurrentModificationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ConcurrentModificationException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(ConcurrentModificationException, t_ConcurrentModificationException, ConcurrentModificationException);

    void t_ConcurrentModificationException::install(PyObject *module)
    {
      installType(&PY_TYPE(ConcurrentModificationException), &PY_TYPE_DEF(ConcurrentModificationException), module, "ConcurrentModificationException", 0);
    }

    void t_ConcurrentModificationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "class_", make_descriptor(ConcurrentModificationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "wrapfn_", make_descriptor(t_ConcurrentModificationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ConcurrentModificationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ConcurrentModificationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ConcurrentModificationException::initializeClass, 1)))
        return NULL;
      return t_ConcurrentModificationException::wrap_Object(ConcurrentModificationException(((t_ConcurrentModificationException *) arg)->object.this$));
    }
    static PyObject *t_ConcurrentModificationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ConcurrentModificationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ConcurrentModificationException_init_(t_ConcurrentModificationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ConcurrentModificationException object((jobject) NULL);

          INT_CALL(object = ConcurrentModificationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = ConcurrentModificationException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = ConcurrentModificationException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          ConcurrentModificationException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = ConcurrentModificationException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *ParsePosition::class$ = NULL;
    jmethodID *ParsePosition::mids$ = NULL;
    bool ParsePosition::live$ = false;

    jclass ParsePosition::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/ParsePosition");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getErrorIndex_55546ef6a647f39b] = env->getMethodID(cls, "getErrorIndex", "()I");
        mids$[mid_getIndex_55546ef6a647f39b] = env->getMethodID(cls, "getIndex", "()I");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setErrorIndex_44ed599e93e8a30c] = env->getMethodID(cls, "setErrorIndex", "(I)V");
        mids$[mid_setIndex_44ed599e93e8a30c] = env->getMethodID(cls, "setIndex", "(I)V");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ParsePosition::ParsePosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    jboolean ParsePosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint ParsePosition::getErrorIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getErrorIndex_55546ef6a647f39b]);
    }

    jint ParsePosition::getIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getIndex_55546ef6a647f39b]);
    }

    jint ParsePosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    void ParsePosition::setErrorIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setErrorIndex_44ed599e93e8a30c], a0);
    }

    void ParsePosition::setIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setIndex_44ed599e93e8a30c], a0);
    }

    ::java::lang::String ParsePosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_ParsePosition_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ParsePosition_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ParsePosition_init_(t_ParsePosition *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ParsePosition_equals(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_getErrorIndex(t_ParsePosition *self);
    static PyObject *t_ParsePosition_getIndex(t_ParsePosition *self);
    static PyObject *t_ParsePosition_hashCode(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_setErrorIndex(t_ParsePosition *self, PyObject *arg);
    static PyObject *t_ParsePosition_setIndex(t_ParsePosition *self, PyObject *arg);
    static PyObject *t_ParsePosition_toString(t_ParsePosition *self, PyObject *args);
    static PyObject *t_ParsePosition_get__errorIndex(t_ParsePosition *self, void *data);
    static int t_ParsePosition_set__errorIndex(t_ParsePosition *self, PyObject *arg, void *data);
    static PyObject *t_ParsePosition_get__index(t_ParsePosition *self, void *data);
    static int t_ParsePosition_set__index(t_ParsePosition *self, PyObject *arg, void *data);
    static PyGetSetDef t_ParsePosition__fields_[] = {
      DECLARE_GETSET_FIELD(t_ParsePosition, errorIndex),
      DECLARE_GETSET_FIELD(t_ParsePosition, index),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ParsePosition__methods_[] = {
      DECLARE_METHOD(t_ParsePosition, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParsePosition, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ParsePosition, equals, METH_VARARGS),
      DECLARE_METHOD(t_ParsePosition, getErrorIndex, METH_NOARGS),
      DECLARE_METHOD(t_ParsePosition, getIndex, METH_NOARGS),
      DECLARE_METHOD(t_ParsePosition, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_ParsePosition, setErrorIndex, METH_O),
      DECLARE_METHOD(t_ParsePosition, setIndex, METH_O),
      DECLARE_METHOD(t_ParsePosition, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ParsePosition)[] = {
      { Py_tp_methods, t_ParsePosition__methods_ },
      { Py_tp_init, (void *) t_ParsePosition_init_ },
      { Py_tp_getset, t_ParsePosition__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ParsePosition)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ParsePosition, t_ParsePosition, ParsePosition);

    void t_ParsePosition::install(PyObject *module)
    {
      installType(&PY_TYPE(ParsePosition), &PY_TYPE_DEF(ParsePosition), module, "ParsePosition", 0);
    }

    void t_ParsePosition::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "class_", make_descriptor(ParsePosition::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "wrapfn_", make_descriptor(t_ParsePosition::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ParsePosition), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ParsePosition_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ParsePosition::initializeClass, 1)))
        return NULL;
      return t_ParsePosition::wrap_Object(ParsePosition(((t_ParsePosition *) arg)->object.this$));
    }
    static PyObject *t_ParsePosition_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ParsePosition::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ParsePosition_init_(t_ParsePosition *self, PyObject *args, PyObject *kwds)
    {
      jint a0;
      ParsePosition object((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        INT_CALL(object = ParsePosition(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ParsePosition_equals(t_ParsePosition *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_ParsePosition_getErrorIndex(t_ParsePosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getErrorIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParsePosition_getIndex(t_ParsePosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ParsePosition_hashCode(t_ParsePosition *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_ParsePosition_setErrorIndex(t_ParsePosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setErrorIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setErrorIndex", arg);
      return NULL;
    }

    static PyObject *t_ParsePosition_setIndex(t_ParsePosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
      return NULL;
    }

    static PyObject *t_ParsePosition_toString(t_ParsePosition *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(ParsePosition), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_ParsePosition_get__errorIndex(t_ParsePosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getErrorIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_ParsePosition_set__errorIndex(t_ParsePosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setErrorIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "errorIndex", arg);
      return -1;
    }

    static PyObject *t_ParsePosition_get__index(t_ParsePosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_ParsePosition_set__index(t_ParsePosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "index", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/lang/Class.h"
#include "java/io/SerializablePermission.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectStreamConstants::class$ = NULL;
    jmethodID *ObjectStreamConstants::mids$ = NULL;
    bool ObjectStreamConstants::live$ = false;
    jint ObjectStreamConstants::PROTOCOL_VERSION_1 = (jint) 0;
    jint ObjectStreamConstants::PROTOCOL_VERSION_2 = (jint) 0;
    jbyte ObjectStreamConstants::SC_BLOCK_DATA = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_ENUM = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_EXTERNALIZABLE = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_SERIALIZABLE = (jbyte) 0;
    jbyte ObjectStreamConstants::SC_WRITE_METHOD = (jbyte) 0;
    ::java::io::SerializablePermission *ObjectStreamConstants::SERIAL_FILTER_PERMISSION = NULL;
    jshort ObjectStreamConstants::STREAM_MAGIC = (jshort) 0;
    jshort ObjectStreamConstants::STREAM_VERSION = (jshort) 0;
    ::java::io::SerializablePermission *ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION = NULL;
    ::java::io::SerializablePermission *ObjectStreamConstants::SUBSTITUTION_PERMISSION = NULL;
    jbyte ObjectStreamConstants::TC_ARRAY = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_BASE = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_BLOCKDATA = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_BLOCKDATALONG = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_CLASS = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_CLASSDESC = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_ENDBLOCKDATA = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_ENUM = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_EXCEPTION = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_LONGSTRING = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_MAX = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_NULL = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_OBJECT = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_PROXYCLASSDESC = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_REFERENCE = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_RESET = (jbyte) 0;
    jbyte ObjectStreamConstants::TC_STRING = (jbyte) 0;
    jint ObjectStreamConstants::baseWireHandle = (jint) 0;

    jclass ObjectStreamConstants::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectStreamConstants");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        PROTOCOL_VERSION_1 = env->getStaticIntField(cls, "PROTOCOL_VERSION_1");
        PROTOCOL_VERSION_2 = env->getStaticIntField(cls, "PROTOCOL_VERSION_2");
        SC_BLOCK_DATA = env->getStaticByteField(cls, "SC_BLOCK_DATA");
        SC_ENUM = env->getStaticByteField(cls, "SC_ENUM");
        SC_EXTERNALIZABLE = env->getStaticByteField(cls, "SC_EXTERNALIZABLE");
        SC_SERIALIZABLE = env->getStaticByteField(cls, "SC_SERIALIZABLE");
        SC_WRITE_METHOD = env->getStaticByteField(cls, "SC_WRITE_METHOD");
        SERIAL_FILTER_PERMISSION = new ::java::io::SerializablePermission(env->getStaticObjectField(cls, "SERIAL_FILTER_PERMISSION", "Ljava/io/SerializablePermission;"));
        STREAM_MAGIC = env->getStaticShortField(cls, "STREAM_MAGIC");
        STREAM_VERSION = env->getStaticShortField(cls, "STREAM_VERSION");
        SUBCLASS_IMPLEMENTATION_PERMISSION = new ::java::io::SerializablePermission(env->getStaticObjectField(cls, "SUBCLASS_IMPLEMENTATION_PERMISSION", "Ljava/io/SerializablePermission;"));
        SUBSTITUTION_PERMISSION = new ::java::io::SerializablePermission(env->getStaticObjectField(cls, "SUBSTITUTION_PERMISSION", "Ljava/io/SerializablePermission;"));
        TC_ARRAY = env->getStaticByteField(cls, "TC_ARRAY");
        TC_BASE = env->getStaticByteField(cls, "TC_BASE");
        TC_BLOCKDATA = env->getStaticByteField(cls, "TC_BLOCKDATA");
        TC_BLOCKDATALONG = env->getStaticByteField(cls, "TC_BLOCKDATALONG");
        TC_CLASS = env->getStaticByteField(cls, "TC_CLASS");
        TC_CLASSDESC = env->getStaticByteField(cls, "TC_CLASSDESC");
        TC_ENDBLOCKDATA = env->getStaticByteField(cls, "TC_ENDBLOCKDATA");
        TC_ENUM = env->getStaticByteField(cls, "TC_ENUM");
        TC_EXCEPTION = env->getStaticByteField(cls, "TC_EXCEPTION");
        TC_LONGSTRING = env->getStaticByteField(cls, "TC_LONGSTRING");
        TC_MAX = env->getStaticByteField(cls, "TC_MAX");
        TC_NULL = env->getStaticByteField(cls, "TC_NULL");
        TC_OBJECT = env->getStaticByteField(cls, "TC_OBJECT");
        TC_PROXYCLASSDESC = env->getStaticByteField(cls, "TC_PROXYCLASSDESC");
        TC_REFERENCE = env->getStaticByteField(cls, "TC_REFERENCE");
        TC_RESET = env->getStaticByteField(cls, "TC_RESET");
        TC_STRING = env->getStaticByteField(cls, "TC_STRING");
        baseWireHandle = env->getStaticIntField(cls, "baseWireHandle");
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectStreamConstants_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectStreamConstants_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_ObjectStreamConstants__methods_[] = {
      DECLARE_METHOD(t_ObjectStreamConstants, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectStreamConstants, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectStreamConstants)[] = {
      { Py_tp_methods, t_ObjectStreamConstants__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectStreamConstants)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectStreamConstants, t_ObjectStreamConstants, ObjectStreamConstants);

    void t_ObjectStreamConstants::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectStreamConstants), &PY_TYPE_DEF(ObjectStreamConstants), module, "ObjectStreamConstants", 0);
    }

    void t_ObjectStreamConstants::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "class_", make_descriptor(ObjectStreamConstants::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "wrapfn_", make_descriptor(t_ObjectStreamConstants::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "boxfn_", make_descriptor(boxObject));
      env->getClass(ObjectStreamConstants::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "PROTOCOL_VERSION_1", make_descriptor(ObjectStreamConstants::PROTOCOL_VERSION_1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "PROTOCOL_VERSION_2", make_descriptor(ObjectStreamConstants::PROTOCOL_VERSION_2));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_BLOCK_DATA", make_descriptor(ObjectStreamConstants::SC_BLOCK_DATA));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_ENUM", make_descriptor(ObjectStreamConstants::SC_ENUM));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_EXTERNALIZABLE", make_descriptor(ObjectStreamConstants::SC_EXTERNALIZABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_SERIALIZABLE", make_descriptor(ObjectStreamConstants::SC_SERIALIZABLE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SC_WRITE_METHOD", make_descriptor(ObjectStreamConstants::SC_WRITE_METHOD));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SERIAL_FILTER_PERMISSION", make_descriptor(::java::io::t_SerializablePermission::wrap_Object(*ObjectStreamConstants::SERIAL_FILTER_PERMISSION)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "STREAM_MAGIC", make_descriptor(ObjectStreamConstants::STREAM_MAGIC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "STREAM_VERSION", make_descriptor(ObjectStreamConstants::STREAM_VERSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SUBCLASS_IMPLEMENTATION_PERMISSION", make_descriptor(::java::io::t_SerializablePermission::wrap_Object(*ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "SUBSTITUTION_PERMISSION", make_descriptor(::java::io::t_SerializablePermission::wrap_Object(*ObjectStreamConstants::SUBSTITUTION_PERMISSION)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_ARRAY", make_descriptor(ObjectStreamConstants::TC_ARRAY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_BASE", make_descriptor(ObjectStreamConstants::TC_BASE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_BLOCKDATA", make_descriptor(ObjectStreamConstants::TC_BLOCKDATA));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_BLOCKDATALONG", make_descriptor(ObjectStreamConstants::TC_BLOCKDATALONG));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_CLASS", make_descriptor(ObjectStreamConstants::TC_CLASS));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_CLASSDESC", make_descriptor(ObjectStreamConstants::TC_CLASSDESC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_ENDBLOCKDATA", make_descriptor(ObjectStreamConstants::TC_ENDBLOCKDATA));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_ENUM", make_descriptor(ObjectStreamConstants::TC_ENUM));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_EXCEPTION", make_descriptor(ObjectStreamConstants::TC_EXCEPTION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_LONGSTRING", make_descriptor(ObjectStreamConstants::TC_LONGSTRING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_MAX", make_descriptor(ObjectStreamConstants::TC_MAX));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_NULL", make_descriptor(ObjectStreamConstants::TC_NULL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_OBJECT", make_descriptor(ObjectStreamConstants::TC_OBJECT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_PROXYCLASSDESC", make_descriptor(ObjectStreamConstants::TC_PROXYCLASSDESC));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_REFERENCE", make_descriptor(ObjectStreamConstants::TC_REFERENCE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_RESET", make_descriptor(ObjectStreamConstants::TC_RESET));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "TC_STRING", make_descriptor(ObjectStreamConstants::TC_STRING));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectStreamConstants), "baseWireHandle", make_descriptor(ObjectStreamConstants::baseWireHandle));
    }

    static PyObject *t_ObjectStreamConstants_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectStreamConstants::initializeClass, 1)))
        return NULL;
      return t_ObjectStreamConstants::wrap_Object(ObjectStreamConstants(((t_ObjectStreamConstants *) arg)->object.this$));
    }
    static PyObject *t_ObjectStreamConstants_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectStreamConstants::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileNotFoundException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileNotFoundException::class$ = NULL;
    jmethodID *FileNotFoundException::mids$ = NULL;
    bool FileNotFoundException::live$ = false;

    jclass FileNotFoundException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileNotFoundException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileNotFoundException::FileNotFoundException() : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    FileNotFoundException::FileNotFoundException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileNotFoundException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileNotFoundException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileNotFoundException_init_(t_FileNotFoundException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_FileNotFoundException__methods_[] = {
      DECLARE_METHOD(t_FileNotFoundException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileNotFoundException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileNotFoundException)[] = {
      { Py_tp_methods, t_FileNotFoundException__methods_ },
      { Py_tp_init, (void *) t_FileNotFoundException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileNotFoundException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(FileNotFoundException, t_FileNotFoundException, FileNotFoundException);

    void t_FileNotFoundException::install(PyObject *module)
    {
      installType(&PY_TYPE(FileNotFoundException), &PY_TYPE_DEF(FileNotFoundException), module, "FileNotFoundException", 0);
    }

    void t_FileNotFoundException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "class_", make_descriptor(FileNotFoundException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "wrapfn_", make_descriptor(t_FileNotFoundException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileNotFoundException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileNotFoundException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileNotFoundException::initializeClass, 1)))
        return NULL;
      return t_FileNotFoundException::wrap_Object(FileNotFoundException(((t_FileNotFoundException *) arg)->object.this$));
    }
    static PyObject *t_FileNotFoundException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileNotFoundException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileNotFoundException_init_(t_FileNotFoundException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          FileNotFoundException object((jobject) NULL);

          INT_CALL(object = FileNotFoundException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          FileNotFoundException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileNotFoundException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$Category.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/util/Locale$Category.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$Category::class$ = NULL;
    jmethodID *Locale$Category::mids$ = NULL;
    bool Locale$Category::live$ = false;
    Locale$Category *Locale$Category::DISPLAY = NULL;
    Locale$Category *Locale$Category::FORMAT = NULL;

    jclass Locale$Category::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$Category");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_942762f295d37e13] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;");
        mids$[mid_values_e9ca4fe7e46fd168] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$Category;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        DISPLAY = new Locale$Category(env->getStaticObjectField(cls, "DISPLAY", "Ljava/util/Locale$Category;"));
        FORMAT = new Locale$Category(env->getStaticObjectField(cls, "FORMAT", "Ljava/util/Locale$Category;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$Category Locale$Category::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$Category(env->callStaticObjectMethod(cls, mids$[mid_valueOf_942762f295d37e13], a0.this$));
    }

    JArray< Locale$Category > Locale$Category::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$Category >(env->callStaticObjectMethod(cls, mids$[mid_values_e9ca4fe7e46fd168]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$Category_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$Category_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$Category_of_(t_Locale$Category *self, PyObject *args);
    static PyObject *t_Locale$Category_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$Category_values(PyTypeObject *type);
    static PyObject *t_Locale$Category_get__parameters_(t_Locale$Category *self, void *data);
    static PyGetSetDef t_Locale$Category__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$Category, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$Category__methods_[] = {
      DECLARE_METHOD(t_Locale$Category, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$Category, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$Category, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$Category, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$Category, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$Category)[] = {
      { Py_tp_methods, t_Locale$Category__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$Category__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$Category)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$Category, t_Locale$Category, Locale$Category);
    PyObject *t_Locale$Category::wrap_Object(const Locale$Category& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$Category::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$Category *self = (t_Locale$Category *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$Category::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$Category::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$Category *self = (t_Locale$Category *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$Category::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$Category), &PY_TYPE_DEF(Locale$Category), module, "Locale$Category", 0);
    }

    void t_Locale$Category::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "class_", make_descriptor(Locale$Category::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "wrapfn_", make_descriptor(t_Locale$Category::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$Category::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "DISPLAY", make_descriptor(t_Locale$Category::wrap_Object(*Locale$Category::DISPLAY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$Category), "FORMAT", make_descriptor(t_Locale$Category::wrap_Object(*Locale$Category::FORMAT)));
    }

    static PyObject *t_Locale$Category_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$Category::initializeClass, 1)))
        return NULL;
      return t_Locale$Category::wrap_Object(Locale$Category(((t_Locale$Category *) arg)->object.this$));
    }
    static PyObject *t_Locale$Category_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$Category::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$Category_of_(t_Locale$Category *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$Category_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$Category result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$Category::valueOf(a0));
        return t_Locale$Category::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$Category_values(PyTypeObject *type)
    {
      JArray< Locale$Category > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$Category::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$Category::wrap_jobject);
    }
    static PyObject *t_Locale$Category_get__parameters_(t_Locale$Category *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Package.h"
#include "java/lang/Package.h"
#include "java/lang/Class.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Package::class$ = NULL;
    jmethodID *Package::mids$ = NULL;
    bool Package::live$ = false;

    jclass Package::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Package");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getImplementationTitle_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getImplementationTitle", "()Ljava/lang/String;");
        mids$[mid_getImplementationVendor_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getImplementationVendor", "()Ljava/lang/String;");
        mids$[mid_getImplementationVersion_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getImplementationVersion", "()Ljava/lang/String;");
        mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackage_ea8f0e6057ebcb3a] = env->getStaticMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getPackages_4ece9e113339960d] = env->getStaticMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_getSpecificationTitle_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSpecificationTitle", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVendor_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSpecificationVendor", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVersion_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSpecificationVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isCompatibleWith_cde6b28e15c96b75] = env->getMethodID(cls, "isCompatibleWith", "(Ljava/lang/String;)Z");
        mids$[mid_isSealed_9ab94ac1dc23b105] = env->getMethodID(cls, "isSealed", "()Z");
        mids$[mid_isSealed_72310db42813c777] = env->getMethodID(cls, "isSealed", "(Ljava/net/URL;)Z");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String Package::getImplementationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationTitle_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Package::getImplementationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVendor_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Package::getImplementationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVersion_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Package::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
    }

    Package Package::getPackage(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Package(env->callStaticObjectMethod(cls, mids$[mid_getPackage_ea8f0e6057ebcb3a], a0.this$));
    }

    JArray< Package > Package::getPackages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Package >(env->callStaticObjectMethod(cls, mids$[mid_getPackages_4ece9e113339960d]));
    }

    ::java::lang::String Package::getSpecificationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationTitle_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Package::getSpecificationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVendor_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Package::getSpecificationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVersion_1c1fa1e935d6cdcf]));
    }

    jint Package::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Package::isCompatibleWith(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_cde6b28e15c96b75], a0.this$);
    }

    jboolean Package::isSealed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_9ab94ac1dc23b105]);
    }

    jboolean Package::isSealed(const ::java::net::URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_72310db42813c777], a0.this$);
    }

    ::java::lang::String Package::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Package_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Package_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Package_getImplementationTitle(t_Package *self);
    static PyObject *t_Package_getImplementationVendor(t_Package *self);
    static PyObject *t_Package_getImplementationVersion(t_Package *self);
    static PyObject *t_Package_getName(t_Package *self);
    static PyObject *t_Package_getPackage(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Package_getPackages(PyTypeObject *type);
    static PyObject *t_Package_getSpecificationTitle(t_Package *self);
    static PyObject *t_Package_getSpecificationVendor(t_Package *self);
    static PyObject *t_Package_getSpecificationVersion(t_Package *self);
    static PyObject *t_Package_hashCode(t_Package *self, PyObject *args);
    static PyObject *t_Package_isCompatibleWith(t_Package *self, PyObject *arg);
    static PyObject *t_Package_isSealed(t_Package *self, PyObject *args);
    static PyObject *t_Package_toString(t_Package *self, PyObject *args);
    static PyObject *t_Package_get__implementationTitle(t_Package *self, void *data);
    static PyObject *t_Package_get__implementationVendor(t_Package *self, void *data);
    static PyObject *t_Package_get__implementationVersion(t_Package *self, void *data);
    static PyObject *t_Package_get__name(t_Package *self, void *data);
    static PyObject *t_Package_get__packages(t_Package *self, void *data);
    static PyObject *t_Package_get__sealed(t_Package *self, void *data);
    static PyObject *t_Package_get__specificationTitle(t_Package *self, void *data);
    static PyObject *t_Package_get__specificationVendor(t_Package *self, void *data);
    static PyObject *t_Package_get__specificationVersion(t_Package *self, void *data);
    static PyGetSetDef t_Package__fields_[] = {
      DECLARE_GET_FIELD(t_Package, implementationTitle),
      DECLARE_GET_FIELD(t_Package, implementationVendor),
      DECLARE_GET_FIELD(t_Package, implementationVersion),
      DECLARE_GET_FIELD(t_Package, name),
      DECLARE_GET_FIELD(t_Package, packages),
      DECLARE_GET_FIELD(t_Package, sealed),
      DECLARE_GET_FIELD(t_Package, specificationTitle),
      DECLARE_GET_FIELD(t_Package, specificationVendor),
      DECLARE_GET_FIELD(t_Package, specificationVersion),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Package__methods_[] = {
      DECLARE_METHOD(t_Package, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Package, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Package, getImplementationTitle, METH_NOARGS),
      DECLARE_METHOD(t_Package, getImplementationVendor, METH_NOARGS),
      DECLARE_METHOD(t_Package, getImplementationVersion, METH_NOARGS),
      DECLARE_METHOD(t_Package, getName, METH_NOARGS),
      DECLARE_METHOD(t_Package, getPackage, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Package, getPackages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Package, getSpecificationTitle, METH_NOARGS),
      DECLARE_METHOD(t_Package, getSpecificationVendor, METH_NOARGS),
      DECLARE_METHOD(t_Package, getSpecificationVersion, METH_NOARGS),
      DECLARE_METHOD(t_Package, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Package, isCompatibleWith, METH_O),
      DECLARE_METHOD(t_Package, isSealed, METH_VARARGS),
      DECLARE_METHOD(t_Package, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Package)[] = {
      { Py_tp_methods, t_Package__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Package__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Package)[] = {
      &PY_TYPE_DEF(::java::lang::NamedPackage),
      NULL
    };

    DEFINE_TYPE(Package, t_Package, Package);

    void t_Package::install(PyObject *module)
    {
      installType(&PY_TYPE(Package), &PY_TYPE_DEF(Package), module, "Package", 0);
    }

    void t_Package::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Package), "class_", make_descriptor(Package::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Package), "wrapfn_", make_descriptor(t_Package::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Package), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Package_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Package::initializeClass, 1)))
        return NULL;
      return t_Package::wrap_Object(Package(((t_Package *) arg)->object.this$));
    }
    static PyObject *t_Package_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Package::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Package_getImplementationTitle(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getImplementationTitle());
      return j2p(result);
    }

    static PyObject *t_Package_getImplementationVendor(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getImplementationVendor());
      return j2p(result);
    }

    static PyObject *t_Package_getImplementationVersion(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getImplementationVersion());
      return j2p(result);
    }

    static PyObject *t_Package_getName(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Package_getPackage(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Package result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Package::getPackage(a0));
        return t_Package::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getPackage", arg);
      return NULL;
    }

    static PyObject *t_Package_getPackages(PyTypeObject *type)
    {
      JArray< Package > result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::Package::getPackages());
      return JArray<jobject>(result.this$).wrap(t_Package::wrap_jobject);
    }

    static PyObject *t_Package_getSpecificationTitle(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSpecificationTitle());
      return j2p(result);
    }

    static PyObject *t_Package_getSpecificationVendor(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSpecificationVendor());
      return j2p(result);
    }

    static PyObject *t_Package_getSpecificationVersion(t_Package *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSpecificationVersion());
      return j2p(result);
    }

    static PyObject *t_Package_hashCode(t_Package *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Package), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Package_isCompatibleWith(t_Package *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.isCompatibleWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
      return NULL;
    }

    static PyObject *t_Package_isSealed(t_Package *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSealed());
          Py_RETURN_BOOL(result);
        }
        break;
       case 1:
        {
          ::java::net::URL a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.isSealed(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "isSealed", args);
      return NULL;
    }

    static PyObject *t_Package_toString(t_Package *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Package), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Package_get__implementationTitle(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getImplementationTitle());
      return j2p(value);
    }

    static PyObject *t_Package_get__implementationVendor(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getImplementationVendor());
      return j2p(value);
    }

    static PyObject *t_Package_get__implementationVersion(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getImplementationVersion());
      return j2p(value);
    }

    static PyObject *t_Package_get__name(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Package_get__packages(t_Package *self, void *data)
    {
      JArray< Package > value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackages());
      return JArray<jobject>(value.this$).wrap(t_Package::wrap_jobject);
    }

    static PyObject *t_Package_get__sealed(t_Package *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSealed());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Package_get__specificationTitle(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSpecificationTitle());
      return j2p(value);
    }

    static PyObject *t_Package_get__specificationVendor(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSpecificationVendor());
      return j2p(value);
    }

    static PyObject *t_Package_get__specificationVersion(t_Package *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSpecificationVersion());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ListIterator::class$ = NULL;
    jmethodID *ListIterator::mids$ = NULL;
    bool ListIterator::live$ = false;

    jclass ListIterator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ListIterator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_55f3c894852c27a3] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)V");
        mids$[mid_hasNext_9ab94ac1dc23b105] = env->getMethodID(cls, "hasNext", "()Z");
        mids$[mid_hasPrevious_9ab94ac1dc23b105] = env->getMethodID(cls, "hasPrevious", "()Z");
        mids$[mid_next_541690f9ee81d3ad] = env->getMethodID(cls, "next", "()Ljava/lang/Object;");
        mids$[mid_nextIndex_55546ef6a647f39b] = env->getMethodID(cls, "nextIndex", "()I");
        mids$[mid_previous_541690f9ee81d3ad] = env->getMethodID(cls, "previous", "()Ljava/lang/Object;");
        mids$[mid_previousIndex_55546ef6a647f39b] = env->getMethodID(cls, "previousIndex", "()I");
        mids$[mid_remove_a1fa5dae97ea5ed2] = env->getMethodID(cls, "remove", "()V");
        mids$[mid_set_55f3c894852c27a3] = env->getMethodID(cls, "set", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ListIterator::add(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_add_55f3c894852c27a3], a0.this$);
    }

    jboolean ListIterator::hasNext() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasNext_9ab94ac1dc23b105]);
    }

    jboolean ListIterator::hasPrevious() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasPrevious_9ab94ac1dc23b105]);
    }

    ::java::lang::Object ListIterator::next() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_next_541690f9ee81d3ad]));
    }

    jint ListIterator::nextIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_nextIndex_55546ef6a647f39b]);
    }

    ::java::lang::Object ListIterator::previous() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_previous_541690f9ee81d3ad]));
    }

    jint ListIterator::previousIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_previousIndex_55546ef6a647f39b]);
    }

    void ListIterator::remove() const
    {
      env->callVoidMethod(this$, mids$[mid_remove_a1fa5dae97ea5ed2]);
    }

    void ListIterator::set(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_set_55f3c894852c27a3], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ListIterator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ListIterator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ListIterator_of_(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_add(t_ListIterator *self, PyObject *arg);
    static PyObject *t_ListIterator_hasNext(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_hasPrevious(t_ListIterator *self);
    static PyObject *t_ListIterator_next(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_nextIndex(t_ListIterator *self);
    static PyObject *t_ListIterator_previous(t_ListIterator *self);
    static PyObject *t_ListIterator_previousIndex(t_ListIterator *self);
    static PyObject *t_ListIterator_remove(t_ListIterator *self, PyObject *args);
    static PyObject *t_ListIterator_set(t_ListIterator *self, PyObject *arg);
    static PyObject *t_ListIterator_get__parameters_(t_ListIterator *self, void *data);
    static PyGetSetDef t_ListIterator__fields_[] = {
      DECLARE_GET_FIELD(t_ListIterator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ListIterator__methods_[] = {
      DECLARE_METHOD(t_ListIterator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ListIterator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ListIterator, of_, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, add, METH_O),
      DECLARE_METHOD(t_ListIterator, hasNext, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, hasPrevious, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, next, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, nextIndex, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, previous, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, previousIndex, METH_NOARGS),
      DECLARE_METHOD(t_ListIterator, remove, METH_VARARGS),
      DECLARE_METHOD(t_ListIterator, set, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ListIterator)[] = {
      { Py_tp_methods, t_ListIterator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ListIterator__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ListIterator)[] = {
      &PY_TYPE_DEF(::java::util::Iterator),
      NULL
    };

    DEFINE_TYPE(ListIterator, t_ListIterator, ListIterator);
    PyObject *t_ListIterator::wrap_Object(const ListIterator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ListIterator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ListIterator *self = (t_ListIterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ListIterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ListIterator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ListIterator *self = (t_ListIterator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ListIterator::install(PyObject *module)
    {
      installType(&PY_TYPE(ListIterator), &PY_TYPE_DEF(ListIterator), module, "ListIterator", 0);
    }

    void t_ListIterator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ListIterator), "class_", make_descriptor(ListIterator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ListIterator), "wrapfn_", make_descriptor(t_ListIterator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ListIterator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ListIterator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ListIterator::initializeClass, 1)))
        return NULL;
      return t_ListIterator::wrap_Object(ListIterator(((t_ListIterator *) arg)->object.this$));
    }
    static PyObject *t_ListIterator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ListIterator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ListIterator_of_(t_ListIterator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_ListIterator_add(t_ListIterator *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.add(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_ListIterator_hasNext(t_ListIterator *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ListIterator), (PyObject *) self, "hasNext", args, 2);
    }

    static PyObject *t_ListIterator_hasPrevious(t_ListIterator *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasPrevious());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ListIterator_next(t_ListIterator *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.next());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(ListIterator), (PyObject *) self, "next", args, 2);
    }

    static PyObject *t_ListIterator_nextIndex(t_ListIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.nextIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ListIterator_previous(t_ListIterator *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.previous());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ListIterator_previousIndex(t_ListIterator *self)
    {
      jint result;
      OBJ_CALL(result = self->object.previousIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ListIterator_remove(t_ListIterator *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ListIterator), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ListIterator_set(t_ListIterator *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.set(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "set", arg);
      return NULL;
    }
    static PyObject *t_ListIterator_get__parameters_(t_ListIterator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInput.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/ClassNotFoundException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInput::class$ = NULL;
    jmethodID *ObjectInput::mids$ = NULL;
    bool ObjectInput::live$ = false;

    jclass ObjectInput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_available_55546ef6a647f39b] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_read_55546ef6a647f39b] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_53324f422c2c7f64] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_296dd75c373e2c1d] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readObject_541690f9ee81d3ad] = env->getMethodID(cls, "readObject", "()Ljava/lang/Object;");
        mids$[mid_skip_9db63109f74a74fc] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint ObjectInput::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_55546ef6a647f39b]);
    }

    void ObjectInput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    jint ObjectInput::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_55546ef6a647f39b]);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_53324f422c2c7f64], a0.this$);
    }

    jint ObjectInput::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_296dd75c373e2c1d], a0.this$, a1, a2);
    }

    ::java::lang::Object ObjectInput::readObject() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_readObject_541690f9ee81d3ad]));
    }

    jlong ObjectInput::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_9db63109f74a74fc], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInput_available(t_ObjectInput *self);
    static PyObject *t_ObjectInput_close(t_ObjectInput *self);
    static PyObject *t_ObjectInput_read(t_ObjectInput *self, PyObject *args);
    static PyObject *t_ObjectInput_readObject(t_ObjectInput *self);
    static PyObject *t_ObjectInput_skip(t_ObjectInput *self, PyObject *arg);

    static PyMethodDef t_ObjectInput__methods_[] = {
      DECLARE_METHOD(t_ObjectInput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInput, available, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInput, close, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInput, read, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInput, readObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectInput, skip, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInput)[] = {
      { Py_tp_methods, t_ObjectInput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInput)[] = {
      &PY_TYPE_DEF(::java::io::DataInput),
      NULL
    };

    DEFINE_TYPE(ObjectInput, t_ObjectInput, ObjectInput);

    void t_ObjectInput::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInput), &PY_TYPE_DEF(ObjectInput), module, "ObjectInput", 0);
    }

    void t_ObjectInput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInput), "class_", make_descriptor(ObjectInput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInput), "wrapfn_", make_descriptor(t_ObjectInput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInput::initializeClass, 1)))
        return NULL;
      return t_ObjectInput::wrap_Object(ObjectInput(((t_ObjectInput *) arg)->object.this$));
    }
    static PyObject *t_ObjectInput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectInput_available(t_ObjectInput *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_ObjectInput_close(t_ObjectInput *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectInput_read(t_ObjectInput *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_ObjectInput_readObject(t_ObjectInput *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.readObject());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ObjectInput_skip(t_ObjectInput *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/function/LongConsumer.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/lang/Class.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Spliterator$OfLong::class$ = NULL;
    jmethodID *Spliterator$OfLong::mids$ = NULL;
    bool Spliterator$OfLong::live$ = false;

    jclass Spliterator$OfLong::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Spliterator$OfLong");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_e8b2ec59438c8d3d] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/LongConsumer;)V");
        mids$[mid_tryAdvance_ebaab0d50a7f2556] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/LongConsumer;)Z");
        mids$[mid_trySplit_8fe5a3c44d68fdf2] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfLong;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfLong::forEachRemaining(const ::java::util::function::LongConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_e8b2ec59438c8d3d], a0.this$);
    }

    jboolean Spliterator$OfLong::tryAdvance(const ::java::util::function::LongConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_ebaab0d50a7f2556], a0.this$);
    }

    Spliterator$OfLong Spliterator$OfLong::trySplit() const
    {
      return Spliterator$OfLong(env->callObjectMethod(this$, mids$[mid_trySplit_8fe5a3c44d68fdf2]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Spliterator$OfLong_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfLong_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Spliterator$OfLong_of_(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_forEachRemaining(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_tryAdvance(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_trySplit(t_Spliterator$OfLong *self, PyObject *args);
    static PyObject *t_Spliterator$OfLong_get__parameters_(t_Spliterator$OfLong *self, void *data);
    static PyGetSetDef t_Spliterator$OfLong__fields_[] = {
      DECLARE_GET_FIELD(t_Spliterator$OfLong, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Spliterator$OfLong__methods_[] = {
      DECLARE_METHOD(t_Spliterator$OfLong, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfLong, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Spliterator$OfLong, of_, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfLong, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfLong, tryAdvance, METH_VARARGS),
      DECLARE_METHOD(t_Spliterator$OfLong, trySplit, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Spliterator$OfLong)[] = {
      { Py_tp_methods, t_Spliterator$OfLong__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Spliterator$OfLong__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Spliterator$OfLong)[] = {
      &PY_TYPE_DEF(::java::util::Spliterator$OfPrimitive),
      NULL
    };

    DEFINE_TYPE(Spliterator$OfLong, t_Spliterator$OfLong, Spliterator$OfLong);
    PyObject *t_Spliterator$OfLong::wrap_Object(const Spliterator$OfLong& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfLong::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfLong *self = (t_Spliterator$OfLong *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Spliterator$OfLong::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Spliterator$OfLong::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Spliterator$OfLong *self = (t_Spliterator$OfLong *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Spliterator$OfLong::install(PyObject *module)
    {
      installType(&PY_TYPE(Spliterator$OfLong), &PY_TYPE_DEF(Spliterator$OfLong), module, "Spliterator$OfLong", 0);
    }

    void t_Spliterator$OfLong::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfLong), "class_", make_descriptor(Spliterator$OfLong::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfLong), "wrapfn_", make_descriptor(t_Spliterator$OfLong::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Spliterator$OfLong), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Spliterator$OfLong_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Spliterator$OfLong::initializeClass, 1)))
        return NULL;
      return t_Spliterator$OfLong::wrap_Object(Spliterator$OfLong(((t_Spliterator$OfLong *) arg)->object.this$));
    }
    static PyObject *t_Spliterator$OfLong_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Spliterator$OfLong::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Spliterator$OfLong_of_(t_Spliterator$OfLong *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Spliterator$OfLong_forEachRemaining(t_Spliterator$OfLong *self, PyObject *args)
    {
      ::java::util::function::LongConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::LongConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Spliterator$OfLong), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_Spliterator$OfLong_tryAdvance(t_Spliterator$OfLong *self, PyObject *args)
    {
      ::java::util::function::LongConsumer a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "k", ::java::util::function::LongConsumer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.tryAdvance(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfLong), (PyObject *) self, "tryAdvance", args, 2);
    }

    static PyObject *t_Spliterator$OfLong_trySplit(t_Spliterator$OfLong *self, PyObject *args)
    {
      Spliterator$OfLong result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.trySplit());
        return t_Spliterator$OfLong::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Spliterator$OfLong), (PyObject *) self, "trySplit", args, 2);
    }
    static PyObject *t_Spliterator$OfLong_get__parameters_(t_Spliterator$OfLong *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/MissingResourceException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *MissingResourceException::class$ = NULL;
    jmethodID *MissingResourceException::mids$ = NULL;
    bool MissingResourceException::live$ = false;

    jclass MissingResourceException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/MissingResourceException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_getClassName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    MissingResourceException::MissingResourceException(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::String MissingResourceException::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String MissingResourceException::getKey() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_MissingResourceException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_MissingResourceException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_MissingResourceException_init_(t_MissingResourceException *self, PyObject *args, PyObject *kwds);
    static PyObject *t_MissingResourceException_getClassName(t_MissingResourceException *self);
    static PyObject *t_MissingResourceException_getKey(t_MissingResourceException *self);
    static PyObject *t_MissingResourceException_get__className(t_MissingResourceException *self, void *data);
    static PyObject *t_MissingResourceException_get__key(t_MissingResourceException *self, void *data);
    static PyGetSetDef t_MissingResourceException__fields_[] = {
      DECLARE_GET_FIELD(t_MissingResourceException, className),
      DECLARE_GET_FIELD(t_MissingResourceException, key),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_MissingResourceException__methods_[] = {
      DECLARE_METHOD(t_MissingResourceException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_MissingResourceException, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_MissingResourceException, getClassName, METH_NOARGS),
      DECLARE_METHOD(t_MissingResourceException, getKey, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(MissingResourceException)[] = {
      { Py_tp_methods, t_MissingResourceException__methods_ },
      { Py_tp_init, (void *) t_MissingResourceException_init_ },
      { Py_tp_getset, t_MissingResourceException__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(MissingResourceException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(MissingResourceException, t_MissingResourceException, MissingResourceException);

    void t_MissingResourceException::install(PyObject *module)
    {
      installType(&PY_TYPE(MissingResourceException), &PY_TYPE_DEF(MissingResourceException), module, "MissingResourceException", 0);
    }

    void t_MissingResourceException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(MissingResourceException), "class_", make_descriptor(MissingResourceException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(MissingResourceException), "wrapfn_", make_descriptor(t_MissingResourceException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(MissingResourceException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_MissingResourceException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, MissingResourceException::initializeClass, 1)))
        return NULL;
      return t_MissingResourceException::wrap_Object(MissingResourceException(((t_MissingResourceException *) arg)->object.this$));
    }
    static PyObject *t_MissingResourceException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, MissingResourceException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_MissingResourceException_init_(t_MissingResourceException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      MissingResourceException object((jobject) NULL);

      if (!parseArgs(args, "sss", &a0, &a1, &a2))
      {
        INT_CALL(object = MissingResourceException(a0, a1, a2));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_MissingResourceException_getClassName(t_MissingResourceException *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassName());
      return j2p(result);
    }

    static PyObject *t_MissingResourceException_getKey(t_MissingResourceException *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getKey());
      return j2p(result);
    }

    static PyObject *t_MissingResourceException_get__className(t_MissingResourceException *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassName());
      return j2p(value);
    }

    static PyObject *t_MissingResourceException_get__key(t_MissingResourceException *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getKey());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/io/InputStream.h"
#include "java/lang/Package.h"
#include "java/io/IOException.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ClassLoader::class$ = NULL;
    jmethodID *ClassLoader::mids$ = NULL;
    bool ClassLoader::live$ = false;

    jclass ClassLoader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ClassLoader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clearAssertionStatus_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearAssertionStatus", "()V");
        mids$[mid_getDefinedPackage_ea8f0e6057ebcb3a] = env->getMethodID(cls, "getDefinedPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getDefinedPackages_4ece9e113339960d] = env->getMethodID(cls, "getDefinedPackages", "()[Ljava/lang/Package;");
        mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getParent_fb951be34fc77929] = env->getMethodID(cls, "getParent", "()Ljava/lang/ClassLoader;");
        mids$[mid_getPlatformClassLoader_fb951be34fc77929] = env->getStaticMethodID(cls, "getPlatformClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getResource_4872b6a8d8971899] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_6831515bfd9973e1] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getResources_0996d8d68b1681c5] = env->getMethodID(cls, "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getSystemClassLoader_fb951be34fc77929] = env->getStaticMethodID(cls, "getSystemClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getSystemResource_4872b6a8d8971899] = env->getStaticMethodID(cls, "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getSystemResourceAsStream_6831515bfd9973e1] = env->getStaticMethodID(cls, "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSystemResources_0996d8d68b1681c5] = env->getStaticMethodID(cls, "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_getUnnamedModule_a1af2f56cbb446b6] = env->getMethodID(cls, "getUnnamedModule", "()Ljava/lang/Module;");
        mids$[mid_isRegisteredAsParallelCapable_9ab94ac1dc23b105] = env->getMethodID(cls, "isRegisteredAsParallelCapable", "()Z");
        mids$[mid_loadClass_19d7740902dbd288] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_resources_39542c7f47d70872] = env->getMethodID(cls, "resources", "(Ljava/lang/String;)Ljava/util/stream/Stream;");
        mids$[mid_setClassAssertionStatus_76cf8b957ccb7ae1] = env->getMethodID(cls, "setClassAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_setDefaultAssertionStatus_fcb96c98de6fad04] = env->getMethodID(cls, "setDefaultAssertionStatus", "(Z)V");
        mids$[mid_setPackageAssertionStatus_76cf8b957ccb7ae1] = env->getMethodID(cls, "setPackageAssertionStatus", "(Ljava/lang/String;Z)V");
        mids$[mid_loadClass_340b3ea35e3cd05e] = env->getMethodID(cls, "loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;");
        mids$[mid_definePackage_1b10089f831ddf29] = env->getMethodID(cls, "definePackage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;");
        mids$[mid_getPackage_ea8f0e6057ebcb3a] = env->getMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_setSigners_4ba13468aa7ecd1f] = env->getMethodID(cls, "setSigners", "(Ljava/lang/Class;[Ljava/lang/Object;)V");
        mids$[mid_findResource_3c2cc72c73012663] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_findResource_4872b6a8d8971899] = env->getMethodID(cls, "findResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getClassLoadingLock_b5bfd4959be00bde] = env->getMethodID(cls, "getClassLoadingLock", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_findClass_c22e4a5bde0a5dcc] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findClass_19d7740902dbd288] = env->getMethodID(cls, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_defineClass_b25cb33f5445c7b1] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_defineClass_657a21003b8f769e] = env->getMethodID(cls, "defineClass", "([BII)Ljava/lang/Class;");
        mids$[mid_defineClass_408d929014dcf10b] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BII)Ljava/lang/Class;");
        mids$[mid_defineClass_8bc31053d318932a] = env->getMethodID(cls, "defineClass", "(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;");
        mids$[mid_resolveClass_9d20f27ef81b4361] = env->getMethodID(cls, "resolveClass", "(Ljava/lang/Class;)V");
        mids$[mid_findSystemClass_19d7740902dbd288] = env->getMethodID(cls, "findSystemClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findLoadedClass_19d7740902dbd288] = env->getMethodID(cls, "findLoadedClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_findResources_0996d8d68b1681c5] = env->getMethodID(cls, "findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;");
        mids$[mid_registerAsParallelCapable_9ab94ac1dc23b105] = env->getStaticMethodID(cls, "registerAsParallelCapable", "()Z");
        mids$[mid_getPackages_4ece9e113339960d] = env->getMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_findLibrary_6f0f3576df9f75ee] = env->getMethodID(cls, "findLibrary", "(Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ClassLoader::clearAssertionStatus() const
    {
      env->callVoidMethod(this$, mids$[mid_clearAssertionStatus_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Package ClassLoader::getDefinedPackage(const ::java::lang::String & a0) const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getDefinedPackage_ea8f0e6057ebcb3a], a0.this$));
    }

    JArray< ::java::lang::Package > ClassLoader::getDefinedPackages() const
    {
      return JArray< ::java::lang::Package >(env->callObjectMethod(this$, mids$[mid_getDefinedPackages_4ece9e113339960d]));
    }

    ::java::lang::String ClassLoader::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
    }

    ClassLoader ClassLoader::getParent() const
    {
      return ClassLoader(env->callObjectMethod(this$, mids$[mid_getParent_fb951be34fc77929]));
    }

    ClassLoader ClassLoader::getPlatformClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getPlatformClassLoader_fb951be34fc77929]));
    }

    ::java::net::URL ClassLoader::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_4872b6a8d8971899], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_6831515bfd9973e1], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getResources(const ::java::lang::String & a0) const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getResources_0996d8d68b1681c5], a0.this$));
    }

    ClassLoader ClassLoader::getSystemClassLoader()
    {
      jclass cls = env->getClass(initializeClass);
      return ClassLoader(env->callStaticObjectMethod(cls, mids$[mid_getSystemClassLoader_fb951be34fc77929]));
    }

    ::java::net::URL ClassLoader::getSystemResource(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::net::URL(env->callStaticObjectMethod(cls, mids$[mid_getSystemResource_4872b6a8d8971899], a0.this$));
    }

    ::java::io::InputStream ClassLoader::getSystemResourceAsStream(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::io::InputStream(env->callStaticObjectMethod(cls, mids$[mid_getSystemResourceAsStream_6831515bfd9973e1], a0.this$));
    }

    ::java::util::Enumeration ClassLoader::getSystemResources(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_getSystemResources_0996d8d68b1681c5], a0.this$));
    }

    ::java::lang::Module ClassLoader::getUnnamedModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getUnnamedModule_a1af2f56cbb446b6]));
    }

    jboolean ClassLoader::isRegisteredAsParallelCapable() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isRegisteredAsParallelCapable_9ab94ac1dc23b105]);
    }

    ::java::lang::Class ClassLoader::loadClass(const ::java::lang::String & a0) const
    {
      return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_loadClass_19d7740902dbd288], a0.this$));
    }

    ::java::util::stream::Stream ClassLoader::resources(const ::java::lang::String & a0) const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_resources_39542c7f47d70872], a0.this$));
    }

    void ClassLoader::setClassAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setClassAssertionStatus_76cf8b957ccb7ae1], a0.this$, a1);
    }

    void ClassLoader::setDefaultAssertionStatus(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDefaultAssertionStatus_fcb96c98de6fad04], a0);
    }

    void ClassLoader::setPackageAssertionStatus(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setPackageAssertionStatus_76cf8b957ccb7ae1], a0.this$, a1);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ClassLoader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_clearAssertionStatus(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getDefinedPackage(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getDefinedPackages(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getName(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getParent(t_ClassLoader *self);
    static PyObject *t_ClassLoader_getPlatformClassLoader(PyTypeObject *type);
    static PyObject *t_ClassLoader_getResource(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getResourceAsStream(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getResources(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_getSystemClassLoader(PyTypeObject *type);
    static PyObject *t_ClassLoader_getSystemResource(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_getSystemResourceAsStream(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_getSystemResources(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ClassLoader_getUnnamedModule(t_ClassLoader *self);
    static PyObject *t_ClassLoader_isRegisteredAsParallelCapable(t_ClassLoader *self);
    static PyObject *t_ClassLoader_loadClass(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_resources(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_setClassAssertionStatus(t_ClassLoader *self, PyObject *args);
    static PyObject *t_ClassLoader_setDefaultAssertionStatus(t_ClassLoader *self, PyObject *arg);
    static PyObject *t_ClassLoader_setPackageAssertionStatus(t_ClassLoader *self, PyObject *args);
    static int t_ClassLoader_set__defaultAssertionStatus(t_ClassLoader *self, PyObject *arg, void *data);
    static PyObject *t_ClassLoader_get__definedPackages(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__name(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__parent(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__platformClassLoader(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__registeredAsParallelCapable(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__systemClassLoader(t_ClassLoader *self, void *data);
    static PyObject *t_ClassLoader_get__unnamedModule(t_ClassLoader *self, void *data);
    static PyGetSetDef t_ClassLoader__fields_[] = {
      DECLARE_SET_FIELD(t_ClassLoader, defaultAssertionStatus),
      DECLARE_GET_FIELD(t_ClassLoader, definedPackages),
      DECLARE_GET_FIELD(t_ClassLoader, name),
      DECLARE_GET_FIELD(t_ClassLoader, parent),
      DECLARE_GET_FIELD(t_ClassLoader, platformClassLoader),
      DECLARE_GET_FIELD(t_ClassLoader, registeredAsParallelCapable),
      DECLARE_GET_FIELD(t_ClassLoader, systemClassLoader),
      DECLARE_GET_FIELD(t_ClassLoader, unnamedModule),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ClassLoader__methods_[] = {
      DECLARE_METHOD(t_ClassLoader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, clearAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getDefinedPackage, METH_O),
      DECLARE_METHOD(t_ClassLoader, getDefinedPackages, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getName, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getParent, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, getPlatformClassLoader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getResource, METH_O),
      DECLARE_METHOD(t_ClassLoader, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_ClassLoader, getResources, METH_O),
      DECLARE_METHOD(t_ClassLoader, getSystemClassLoader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getSystemResource, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getSystemResourceAsStream, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getSystemResources, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ClassLoader, getUnnamedModule, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, isRegisteredAsParallelCapable, METH_NOARGS),
      DECLARE_METHOD(t_ClassLoader, loadClass, METH_O),
      DECLARE_METHOD(t_ClassLoader, resources, METH_O),
      DECLARE_METHOD(t_ClassLoader, setClassAssertionStatus, METH_VARARGS),
      DECLARE_METHOD(t_ClassLoader, setDefaultAssertionStatus, METH_O),
      DECLARE_METHOD(t_ClassLoader, setPackageAssertionStatus, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ClassLoader)[] = {
      { Py_tp_methods, t_ClassLoader__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_ClassLoader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ClassLoader)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ClassLoader, t_ClassLoader, ClassLoader);

    void t_ClassLoader::install(PyObject *module)
    {
      installType(&PY_TYPE(ClassLoader), &PY_TYPE_DEF(ClassLoader), module, "ClassLoader", 0);
    }

    void t_ClassLoader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassLoader), "class_", make_descriptor(ClassLoader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassLoader), "wrapfn_", make_descriptor(t_ClassLoader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ClassLoader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ClassLoader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ClassLoader::initializeClass, 1)))
        return NULL;
      return t_ClassLoader::wrap_Object(ClassLoader(((t_ClassLoader *) arg)->object.this$));
    }
    static PyObject *t_ClassLoader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ClassLoader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ClassLoader_clearAssertionStatus(t_ClassLoader *self)
    {
      OBJ_CALL(self->object.clearAssertionStatus());
      Py_RETURN_NONE;
    }

    static PyObject *t_ClassLoader_getDefinedPackage(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Package result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getDefinedPackage(a0));
        return ::java::lang::t_Package::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getDefinedPackage", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getDefinedPackages(t_ClassLoader *self)
    {
      JArray< ::java::lang::Package > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDefinedPackages());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Package::wrap_jobject);
    }

    static PyObject *t_ClassLoader_getName(t_ClassLoader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_ClassLoader_getParent(t_ClassLoader *self)
    {
      ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getParent());
      return t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_getPlatformClassLoader(PyTypeObject *type)
    {
      ClassLoader result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::ClassLoader::getPlatformClassLoader());
      return t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_getResource(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResource", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getResourceAsStream(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getResources(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResources(a0));
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::net::PY_TYPE(URL));
      }

      PyErr_SetArgsError((PyObject *) self, "getResources", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getSystemClassLoader(PyTypeObject *type)
    {
      ClassLoader result((jobject) NULL);
      OBJ_CALL(result = ::java::lang::ClassLoader::getSystemClassLoader());
      return t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_getSystemResource(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::ClassLoader::getSystemResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getSystemResource", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getSystemResourceAsStream(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::ClassLoader::getSystemResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getSystemResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getSystemResources(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::ClassLoader::getSystemResources(a0));
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::net::PY_TYPE(URL));
      }

      PyErr_SetArgsError(type, "getSystemResources", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_getUnnamedModule(t_ClassLoader *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnnamedModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_ClassLoader_isRegisteredAsParallelCapable(t_ClassLoader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isRegisteredAsParallelCapable());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_ClassLoader_loadClass(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Class result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.loadClass(a0));
        return ::java::lang::t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "loadClass", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_resources(t_ClassLoader *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::stream::Stream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.resources(a0));
        return ::java::util::stream::t_Stream::wrap_Object(result, ::java::net::PY_TYPE(URL));
      }

      PyErr_SetArgsError((PyObject *) self, "resources", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_setClassAssertionStatus(t_ClassLoader *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean a1;

      if (!parseArgs(args, "sZ", &a0, &a1))
      {
        OBJ_CALL(self->object.setClassAssertionStatus(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setClassAssertionStatus", args);
      return NULL;
    }

    static PyObject *t_ClassLoader_setDefaultAssertionStatus(t_ClassLoader *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDefaultAssertionStatus(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDefaultAssertionStatus", arg);
      return NULL;
    }

    static PyObject *t_ClassLoader_setPackageAssertionStatus(t_ClassLoader *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean a1;

      if (!parseArgs(args, "sZ", &a0, &a1))
      {
        OBJ_CALL(self->object.setPackageAssertionStatus(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPackageAssertionStatus", args);
      return NULL;
    }

    static int t_ClassLoader_set__defaultAssertionStatus(t_ClassLoader *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDefaultAssertionStatus(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "defaultAssertionStatus", arg);
      return -1;
    }

    static PyObject *t_ClassLoader_get__definedPackages(t_ClassLoader *self, void *data)
    {
      JArray< ::java::lang::Package > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefinedPackages());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Package::wrap_jobject);
    }

    static PyObject *t_ClassLoader_get__name(t_ClassLoader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_ClassLoader_get__parent(t_ClassLoader *self, void *data)
    {
      ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getParent());
      return t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_ClassLoader_get__platformClassLoader(t_ClassLoader *self, void *data)
    {
      ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getPlatformClassLoader());
      return t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_ClassLoader_get__registeredAsParallelCapable(t_ClassLoader *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isRegisteredAsParallelCapable());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ClassLoader_get__systemClassLoader(t_ClassLoader *self, void *data)
    {
      ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getSystemClassLoader());
      return t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_ClassLoader_get__unnamedModule(t_ClassLoader *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnnamedModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/NotActiveException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *NotActiveException::class$ = NULL;
    jmethodID *NotActiveException::mids$ = NULL;
    bool NotActiveException::live$ = false;

    jclass NotActiveException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/NotActiveException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NotActiveException::NotActiveException() : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    NotActiveException::NotActiveException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_NotActiveException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NotActiveException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NotActiveException_init_(t_NotActiveException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NotActiveException__methods_[] = {
      DECLARE_METHOD(t_NotActiveException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NotActiveException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NotActiveException)[] = {
      { Py_tp_methods, t_NotActiveException__methods_ },
      { Py_tp_init, (void *) t_NotActiveException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NotActiveException)[] = {
      &PY_TYPE_DEF(::java::io::ObjectStreamException),
      NULL
    };

    DEFINE_TYPE(NotActiveException, t_NotActiveException, NotActiveException);

    void t_NotActiveException::install(PyObject *module)
    {
      installType(&PY_TYPE(NotActiveException), &PY_TYPE_DEF(NotActiveException), module, "NotActiveException", 0);
    }

    void t_NotActiveException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "class_", make_descriptor(NotActiveException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "wrapfn_", make_descriptor(t_NotActiveException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NotActiveException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NotActiveException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NotActiveException::initializeClass, 1)))
        return NULL;
      return t_NotActiveException::wrap_Object(NotActiveException(((t_NotActiveException *) arg)->object.this$));
    }
    static PyObject *t_NotActiveException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NotActiveException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NotActiveException_init_(t_NotActiveException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NotActiveException object((jobject) NULL);

          INT_CALL(object = NotActiveException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NotActiveException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NotActiveException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/ObjectOutput.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream$PutField::class$ = NULL;
    jmethodID *ObjectOutputStream$PutField::mids$ = NULL;
    bool ObjectOutputStream$PutField::live$ = false;

    jclass ObjectOutputStream$PutField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream$PutField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_put_76cf8b957ccb7ae1] = env->getMethodID(cls, "put", "(Ljava/lang/String;Z)V");
        mids$[mid_put_c99a0c15b2cc0a3e] = env->getMethodID(cls, "put", "(Ljava/lang/String;B)V");
        mids$[mid_put_165c6e94f6289825] = env->getMethodID(cls, "put", "(Ljava/lang/String;C)V");
        mids$[mid_put_b7ec643e4edd96c5] = env->getMethodID(cls, "put", "(Ljava/lang/String;D)V");
        mids$[mid_put_d859a3ff51dc23ad] = env->getMethodID(cls, "put", "(Ljava/lang/String;F)V");
        mids$[mid_put_02c6e5855745e0e2] = env->getMethodID(cls, "put", "(Ljava/lang/String;I)V");
        mids$[mid_put_2bd6b3882bcba51f] = env->getMethodID(cls, "put", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_put_1d7f34ba2f8998cc] = env->getMethodID(cls, "put", "(Ljava/lang/String;J)V");
        mids$[mid_put_2b983c9d6fbe6a27] = env->getMethodID(cls, "put", "(Ljava/lang/String;S)V");
        mids$[mid_write_765c1712f3f1ff4b] = env->getMethodID(cls, "write", "(Ljava/io/ObjectOutput;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream$PutField::ObjectOutputStream$PutField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jboolean a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_76cf8b957ccb7ae1], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jbyte a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_c99a0c15b2cc0a3e], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_165c6e94f6289825], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jdouble a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_b7ec643e4edd96c5], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jfloat a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_d859a3ff51dc23ad], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_02c6e5855745e0e2], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_2bd6b3882bcba51f], a0.this$, a1.this$);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jlong a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_1d7f34ba2f8998cc], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::put(const ::java::lang::String & a0, jshort a1) const
    {
      env->callVoidMethod(this$, mids$[mid_put_2b983c9d6fbe6a27], a0.this$, a1);
    }

    void ObjectOutputStream$PutField::write(const ::java::io::ObjectOutput & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_765c1712f3f1ff4b], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream$PutField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream$PutField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream$PutField_init_(t_ObjectOutputStream$PutField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream$PutField_put(t_ObjectOutputStream$PutField *self, PyObject *args);
    static PyObject *t_ObjectOutputStream$PutField_write(t_ObjectOutputStream$PutField *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream$PutField__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream$PutField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, put, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream$PutField, write, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream$PutField)[] = {
      { Py_tp_methods, t_ObjectOutputStream$PutField__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream$PutField_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream$PutField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream$PutField, t_ObjectOutputStream$PutField, ObjectOutputStream$PutField);

    void t_ObjectOutputStream$PutField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream$PutField), &PY_TYPE_DEF(ObjectOutputStream$PutField), module, "ObjectOutputStream$PutField", 0);
    }

    void t_ObjectOutputStream$PutField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "class_", make_descriptor(ObjectOutputStream$PutField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "wrapfn_", make_descriptor(t_ObjectOutputStream$PutField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream$PutField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream$PutField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream$PutField::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream$PutField::wrap_Object(ObjectOutputStream$PutField(((t_ObjectOutputStream$PutField *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream$PutField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream$PutField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream$PutField_init_(t_ObjectOutputStream$PutField *self, PyObject *args, PyObject *kwds)
    {
      ObjectOutputStream$PutField object((jobject) NULL);

      INT_CALL(object = ObjectOutputStream$PutField());
      self->object = object;

      return 0;
    }

    static PyObject *t_ObjectOutputStream$PutField_put(t_ObjectOutputStream$PutField *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "sB", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "sC", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "sF", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "sS", &a0, &a1))
          {
            OBJ_CALL(self->object.put(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream$PutField_write(t_ObjectOutputStream$PutField *self, PyObject *arg)
    {
      ::java::io::ObjectOutput a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::ObjectOutput::initializeClass, &a0))
      {
        OBJ_CALL(self->object.write(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "write", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutput.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutput::class$ = NULL;
    jmethodID *ObjectOutput::mids$ = NULL;
    bool ObjectOutput::live$ = false;

    jclass ObjectOutput::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutput");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_a1fa5dae97ea5ed2] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_459771b03534868e] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_44ed599e93e8a30c] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_a9fddc59b07ce512] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeObject_55f3c894852c27a3] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectOutput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_a1fa5dae97ea5ed2]);
    }

    void ObjectOutput::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_459771b03534868e], a0.this$);
    }

    void ObjectOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_44ed599e93e8a30c], a0);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a9fddc59b07ce512], a0.this$, a1, a2);
    }

    void ObjectOutput::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_55f3c894852c27a3], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutput_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutput_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutput_close(t_ObjectOutput *self);
    static PyObject *t_ObjectOutput_flush(t_ObjectOutput *self);
    static PyObject *t_ObjectOutput_write(t_ObjectOutput *self, PyObject *args);
    static PyObject *t_ObjectOutput_writeObject(t_ObjectOutput *self, PyObject *arg);

    static PyMethodDef t_ObjectOutput__methods_[] = {
      DECLARE_METHOD(t_ObjectOutput, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutput, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutput, close, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutput, flush, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutput, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutput, writeObject, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutput)[] = {
      { Py_tp_methods, t_ObjectOutput__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutput)[] = {
      &PY_TYPE_DEF(::java::io::DataOutput),
      NULL
    };

    DEFINE_TYPE(ObjectOutput, t_ObjectOutput, ObjectOutput);

    void t_ObjectOutput::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutput), &PY_TYPE_DEF(ObjectOutput), module, "ObjectOutput", 0);
    }

    void t_ObjectOutput::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "class_", make_descriptor(ObjectOutput::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "wrapfn_", make_descriptor(t_ObjectOutput::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutput), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutput_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutput::initializeClass, 1)))
        return NULL;
      return t_ObjectOutput::wrap_Object(ObjectOutput(((t_ObjectOutput *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutput_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutput::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ObjectOutput_close(t_ObjectOutput *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutput_flush(t_ObjectOutput *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutput_write(t_ObjectOutput *self, PyObject *args)
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

      return callSuper(PY_TYPE(ObjectOutput), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutput_writeObject(t_ObjectOutput *self, PyObject *arg)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileFilter.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileFilter::class$ = NULL;
    jmethodID *FileFilter::mids$ = NULL;
    bool FileFilter::live$ = false;

    jclass FileFilter::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileFilter");

        mids$ = new jmethodID[max_mid];
        mids$[mid_accept_a49c91b14b47fa95] = env->getMethodID(cls, "accept", "(Ljava/io/File;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean FileFilter::accept(const ::java::io::File & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_accept_a49c91b14b47fa95], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg);

    static PyMethodDef t_FileFilter__methods_[] = {
      DECLARE_METHOD(t_FileFilter, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileFilter, accept, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileFilter)[] = {
      { Py_tp_methods, t_FileFilter__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileFilter)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FileFilter, t_FileFilter, FileFilter);

    void t_FileFilter::install(PyObject *module)
    {
      installType(&PY_TYPE(FileFilter), &PY_TYPE_DEF(FileFilter), module, "FileFilter", 0);
    }

    void t_FileFilter::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "class_", make_descriptor(FileFilter::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "wrapfn_", make_descriptor(t_FileFilter::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileFilter), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileFilter_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileFilter::initializeClass, 1)))
        return NULL;
      return t_FileFilter::wrap_Object(FileFilter(((t_FileFilter *) arg)->object.this$));
    }
    static PyObject *t_FileFilter_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileFilter::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_FileFilter_accept(t_FileFilter *self, PyObject *arg)
    {
      ::java::io::File a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.accept(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "accept", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InvalidObjectException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InvalidObjectException::class$ = NULL;
    jmethodID *InvalidObjectException::mids$ = NULL;
    bool InvalidObjectException::live$ = false;

    jclass InvalidObjectException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InvalidObjectException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidObjectException::InvalidObjectException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InvalidObjectException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InvalidObjectException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InvalidObjectException_init_(t_InvalidObjectException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InvalidObjectException__methods_[] = {
      DECLARE_METHOD(t_InvalidObjectException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InvalidObjectException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InvalidObjectException)[] = {
      { Py_tp_methods, t_InvalidObjectException__methods_ },
      { Py_tp_init, (void *) t_InvalidObjectException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InvalidObjectException)[] = {
      &PY_TYPE_DEF(::java::io::ObjectStreamException),
      NULL
    };

    DEFINE_TYPE(InvalidObjectException, t_InvalidObjectException, InvalidObjectException);

    void t_InvalidObjectException::install(PyObject *module)
    {
      installType(&PY_TYPE(InvalidObjectException), &PY_TYPE_DEF(InvalidObjectException), module, "InvalidObjectException", 0);
    }

    void t_InvalidObjectException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "class_", make_descriptor(InvalidObjectException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "wrapfn_", make_descriptor(t_InvalidObjectException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidObjectException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InvalidObjectException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InvalidObjectException::initializeClass, 1)))
        return NULL;
      return t_InvalidObjectException::wrap_Object(InvalidObjectException(((t_InvalidObjectException *) arg)->object.this$));
    }
    static PyObject *t_InvalidObjectException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InvalidObjectException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InvalidObjectException_init_(t_InvalidObjectException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      InvalidObjectException object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = InvalidObjectException(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/RandomAccess.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *RandomAccess::class$ = NULL;
    jmethodID *RandomAccess::mids$ = NULL;
    bool RandomAccess::live$ = false;

    jclass RandomAccess::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/RandomAccess");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_RandomAccess_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RandomAccess_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_RandomAccess__methods_[] = {
      DECLARE_METHOD(t_RandomAccess, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RandomAccess, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RandomAccess)[] = {
      { Py_tp_methods, t_RandomAccess__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RandomAccess)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(RandomAccess, t_RandomAccess, RandomAccess);

    void t_RandomAccess::install(PyObject *module)
    {
      installType(&PY_TYPE(RandomAccess), &PY_TYPE_DEF(RandomAccess), module, "RandomAccess", 0);
    }

    void t_RandomAccess::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAccess), "class_", make_descriptor(RandomAccess::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAccess), "wrapfn_", make_descriptor(t_RandomAccess::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAccess), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RandomAccess_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RandomAccess::initializeClass, 1)))
        return NULL;
      return t_RandomAccess::wrap_Object(RandomAccess(((t_RandomAccess *) arg)->object.this$));
    }
    static PyObject *t_RandomAccess_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RandomAccess::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/lang/Double.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *PrimitiveIterator$OfDouble::class$ = NULL;
    jmethodID *PrimitiveIterator$OfDouble::mids$ = NULL;
    bool PrimitiveIterator$OfDouble::live$ = false;

    jclass PrimitiveIterator$OfDouble::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/PrimitiveIterator$OfDouble");

        mids$ = new jmethodID[max_mid];
        mids$[mid_forEachRemaining_85691ac11e338ac3] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_next_3e9d5c8261f8e4a2] = env->getMethodID(cls, "next", "()Ljava/lang/Double;");
        mids$[mid_nextDouble_b74f83833fdad017] = env->getMethodID(cls, "nextDouble", "()D");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_85691ac11e338ac3], a0.this$);
    }

    ::java::lang::Double PrimitiveIterator$OfDouble::next() const
    {
      return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_next_3e9d5c8261f8e4a2]));
    }

    jdouble PrimitiveIterator$OfDouble::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_b74f83833fdad017]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_PrimitiveIterator$OfDouble_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrimitiveIterator$OfDouble_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_PrimitiveIterator$OfDouble_of_(t_PrimitiveIterator$OfDouble *self, PyObject *args);
    static PyObject *t_PrimitiveIterator$OfDouble_forEachRemaining(t_PrimitiveIterator$OfDouble *self, PyObject *args);
    static PyObject *t_PrimitiveIterator$OfDouble_next(t_PrimitiveIterator$OfDouble *self, PyObject *args);
    static PyObject *t_PrimitiveIterator$OfDouble_nextDouble(t_PrimitiveIterator$OfDouble *self);
    static PyObject *t_PrimitiveIterator$OfDouble_get__parameters_(t_PrimitiveIterator$OfDouble *self, void *data);
    static PyGetSetDef t_PrimitiveIterator$OfDouble__fields_[] = {
      DECLARE_GET_FIELD(t_PrimitiveIterator$OfDouble, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_PrimitiveIterator$OfDouble__methods_[] = {
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, of_, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, forEachRemaining, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, next, METH_VARARGS),
      DECLARE_METHOD(t_PrimitiveIterator$OfDouble, nextDouble, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(PrimitiveIterator$OfDouble)[] = {
      { Py_tp_methods, t_PrimitiveIterator$OfDouble__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_PrimitiveIterator$OfDouble__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_generic_iterator_next< ::java::util::t_Iterator,::java::lang::t_Double >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(PrimitiveIterator$OfDouble)[] = {
      &PY_TYPE_DEF(::java::util::PrimitiveIterator),
      NULL
    };

    DEFINE_TYPE(PrimitiveIterator$OfDouble, t_PrimitiveIterator$OfDouble, PrimitiveIterator$OfDouble);
    PyObject *t_PrimitiveIterator$OfDouble::wrap_Object(const PrimitiveIterator$OfDouble& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_PrimitiveIterator$OfDouble::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_PrimitiveIterator$OfDouble *self = (t_PrimitiveIterator$OfDouble *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_PrimitiveIterator$OfDouble::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_PrimitiveIterator$OfDouble::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_PrimitiveIterator$OfDouble *self = (t_PrimitiveIterator$OfDouble *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_PrimitiveIterator$OfDouble::install(PyObject *module)
    {
      installType(&PY_TYPE(PrimitiveIterator$OfDouble), &PY_TYPE_DEF(PrimitiveIterator$OfDouble), module, "PrimitiveIterator$OfDouble", 0);
    }

    void t_PrimitiveIterator$OfDouble::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator$OfDouble), "class_", make_descriptor(PrimitiveIterator$OfDouble::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator$OfDouble), "wrapfn_", make_descriptor(t_PrimitiveIterator$OfDouble::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(PrimitiveIterator$OfDouble), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_PrimitiveIterator$OfDouble_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, PrimitiveIterator$OfDouble::initializeClass, 1)))
        return NULL;
      return t_PrimitiveIterator$OfDouble::wrap_Object(PrimitiveIterator$OfDouble(((t_PrimitiveIterator$OfDouble *) arg)->object.this$));
    }
    static PyObject *t_PrimitiveIterator$OfDouble_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, PrimitiveIterator$OfDouble::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_PrimitiveIterator$OfDouble_of_(t_PrimitiveIterator$OfDouble *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_PrimitiveIterator$OfDouble_forEachRemaining(t_PrimitiveIterator$OfDouble *self, PyObject *args)
    {
      ::java::util::function::DoubleConsumer a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
      {
        OBJ_CALL(self->object.forEachRemaining(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(PrimitiveIterator$OfDouble), (PyObject *) self, "forEachRemaining", args, 2);
    }

    static PyObject *t_PrimitiveIterator$OfDouble_next(t_PrimitiveIterator$OfDouble *self, PyObject *args)
    {
      ::java::lang::Double result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Double::wrap_Object(result);
      }

      return callSuper(PY_TYPE(PrimitiveIterator$OfDouble), (PyObject *) self, "next", args, 2);
    }

    static PyObject *t_PrimitiveIterator$OfDouble_nextDouble(t_PrimitiveIterator$OfDouble *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.nextDouble());
      return PyFloat_FromDouble((double) result);
    }
    static PyObject *t_PrimitiveIterator$OfDouble_get__parameters_(t_PrimitiveIterator$OfDouble *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Deque.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Deque::class$ = NULL;
    jmethodID *Deque::mids$ = NULL;
    bool Deque::live$ = false;

    jclass Deque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Deque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_55f3c894852c27a3] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_55f3c894852c27a3] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_541690f9ee81d3ad] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_541690f9ee81d3ad] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_541690f9ee81d3ad] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_460c5e2d9d51c6cc] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_460c5e2d9d51c6cc] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_460c5e2d9d51c6cc] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_541690f9ee81d3ad] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_541690f9ee81d3ad] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_541690f9ee81d3ad] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_541690f9ee81d3ad] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_541690f9ee81d3ad] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_541690f9ee81d3ad] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_541690f9ee81d3ad] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_55f3c894852c27a3] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_541690f9ee81d3ad] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeFirst_541690f9ee81d3ad] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_460c5e2d9d51c6cc] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_541690f9ee81d3ad] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_460c5e2d9d51c6cc] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Deque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Deque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    void Deque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_55f3c894852c27a3], a0.this$);
    }

    void Deque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_55f3c894852c27a3], a0.this$);
    }

    jboolean Deque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Iterator Deque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_fc7780bc5d5b73b0]));
    }

    ::java::lang::Object Deque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_541690f9ee81d3ad]));
    }

    ::java::util::Iterator Deque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jboolean Deque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Deque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Deque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Deque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_541690f9ee81d3ad]));
    }

    ::java::lang::Object Deque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_541690f9ee81d3ad]));
    }

    void Deque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_55f3c894852c27a3], a0.this$);
    }

    ::java::lang::Object Deque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_541690f9ee81d3ad]));
    }

    jboolean Deque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Deque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_541690f9ee81d3ad]));
    }

    jboolean Deque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Deque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_541690f9ee81d3ad]));
    }

    jboolean Deque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_460c5e2d9d51c6cc], a0.this$);
    }

    jint Deque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Deque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Deque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Deque_of_(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_add(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_addAll(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_addFirst(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_addLast(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_contains(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_descendingIterator(t_Deque *self);
    static PyObject *t_Deque_element(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_getFirst(t_Deque *self);
    static PyObject *t_Deque_getLast(t_Deque *self);
    static PyObject *t_Deque_iterator(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_offer(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_offerFirst(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_offerLast(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_peek(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_peekFirst(t_Deque *self);
    static PyObject *t_Deque_peekLast(t_Deque *self);
    static PyObject *t_Deque_poll(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_pollFirst(t_Deque *self);
    static PyObject *t_Deque_pollLast(t_Deque *self);
    static PyObject *t_Deque_pop(t_Deque *self);
    static PyObject *t_Deque_push(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_remove(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_removeFirst(t_Deque *self);
    static PyObject *t_Deque_removeFirstOccurrence(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_removeLast(t_Deque *self);
    static PyObject *t_Deque_removeLastOccurrence(t_Deque *self, PyObject *arg);
    static PyObject *t_Deque_size(t_Deque *self, PyObject *args);
    static PyObject *t_Deque_get__first(t_Deque *self, void *data);
    static PyObject *t_Deque_get__last(t_Deque *self, void *data);
    static PyObject *t_Deque_get__parameters_(t_Deque *self, void *data);
    static PyGetSetDef t_Deque__fields_[] = {
      DECLARE_GET_FIELD(t_Deque, first),
      DECLARE_GET_FIELD(t_Deque, last),
      DECLARE_GET_FIELD(t_Deque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Deque__methods_[] = {
      DECLARE_METHOD(t_Deque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Deque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Deque, of_, METH_VARARGS),
      DECLARE_METHOD(t_Deque, add, METH_VARARGS),
      DECLARE_METHOD(t_Deque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_Deque, addFirst, METH_O),
      DECLARE_METHOD(t_Deque, addLast, METH_O),
      DECLARE_METHOD(t_Deque, contains, METH_VARARGS),
      DECLARE_METHOD(t_Deque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_Deque, element, METH_VARARGS),
      DECLARE_METHOD(t_Deque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Deque, offer, METH_VARARGS),
      DECLARE_METHOD(t_Deque, offerFirst, METH_O),
      DECLARE_METHOD(t_Deque, offerLast, METH_O),
      DECLARE_METHOD(t_Deque, peek, METH_VARARGS),
      DECLARE_METHOD(t_Deque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, poll, METH_VARARGS),
      DECLARE_METHOD(t_Deque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, pop, METH_NOARGS),
      DECLARE_METHOD(t_Deque, push, METH_O),
      DECLARE_METHOD(t_Deque, remove, METH_VARARGS),
      DECLARE_METHOD(t_Deque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_Deque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_Deque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_Deque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_Deque, size, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Deque)[] = {
      { Py_tp_methods, t_Deque__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Deque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Deque *)) get_generic_iterator< t_Deque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Deque)[] = {
      &PY_TYPE_DEF(::java::util::Queue),
      NULL
    };

    DEFINE_TYPE(Deque, t_Deque, Deque);
    PyObject *t_Deque::wrap_Object(const Deque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Deque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Deque *self = (t_Deque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Deque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Deque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Deque *self = (t_Deque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Deque::install(PyObject *module)
    {
      installType(&PY_TYPE(Deque), &PY_TYPE_DEF(Deque), module, "Deque", 0);
    }

    void t_Deque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Deque), "class_", make_descriptor(Deque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Deque), "wrapfn_", make_descriptor(t_Deque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Deque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Deque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Deque::initializeClass, 1)))
        return NULL;
      return t_Deque::wrap_Object(Deque(((t_Deque *) arg)->object.this$));
    }
    static PyObject *t_Deque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Deque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Deque_of_(t_Deque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Deque_add(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Deque_addAll(t_Deque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_Deque_addFirst(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_Deque_addLast(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_Deque_contains(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Deque_descendingIterator(t_Deque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Deque_element(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.element());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "element", args, 2);
    }

    static PyObject *t_Deque_getFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_getLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_iterator(t_Deque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Deque_offer(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "offer", args, 2);
    }

    static PyObject *t_Deque_offerFirst(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_Deque_offerLast(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_Deque_peek(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.peek());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "peek", args, 2);
    }

    static PyObject *t_Deque_peekFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_peekLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_poll(t_Deque *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.poll());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "poll", args, 2);
    }

    static PyObject *t_Deque_pollFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_pollLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_pop(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_push(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_Deque_remove(t_Deque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Deque_removeFirst(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_removeFirstOccurrence(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_Deque_removeLast(t_Deque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Deque_removeLastOccurrence(t_Deque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_Deque_size(t_Deque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Deque), (PyObject *) self, "size", args, 2);
    }
    static PyObject *t_Deque_get__parameters_(t_Deque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Deque_get__first(t_Deque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_Deque_get__last(t_Deque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Queue.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Queue::class$ = NULL;
    jmethodID *Queue::mids$ = NULL;
    bool Queue::live$ = false;

    jclass Queue::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Queue");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_element_541690f9ee81d3ad] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_offer_460c5e2d9d51c6cc] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_541690f9ee81d3ad] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_poll_541690f9ee81d3ad] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_remove_541690f9ee81d3ad] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Queue::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Queue::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_541690f9ee81d3ad]));
    }

    jboolean Queue::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Queue::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_541690f9ee81d3ad]));
    }

    ::java::lang::Object Queue::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_541690f9ee81d3ad]));
    }

    ::java::lang::Object Queue::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_541690f9ee81d3ad]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Queue_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Queue_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Queue_of_(t_Queue *self, PyObject *args);
    static PyObject *t_Queue_add(t_Queue *self, PyObject *args);
    static PyObject *t_Queue_element(t_Queue *self);
    static PyObject *t_Queue_offer(t_Queue *self, PyObject *arg);
    static PyObject *t_Queue_peek(t_Queue *self);
    static PyObject *t_Queue_poll(t_Queue *self);
    static PyObject *t_Queue_remove(t_Queue *self, PyObject *args);
    static PyObject *t_Queue_get__parameters_(t_Queue *self, void *data);
    static PyGetSetDef t_Queue__fields_[] = {
      DECLARE_GET_FIELD(t_Queue, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Queue__methods_[] = {
      DECLARE_METHOD(t_Queue, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Queue, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Queue, of_, METH_VARARGS),
      DECLARE_METHOD(t_Queue, add, METH_VARARGS),
      DECLARE_METHOD(t_Queue, element, METH_NOARGS),
      DECLARE_METHOD(t_Queue, offer, METH_O),
      DECLARE_METHOD(t_Queue, peek, METH_NOARGS),
      DECLARE_METHOD(t_Queue, poll, METH_NOARGS),
      DECLARE_METHOD(t_Queue, remove, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Queue)[] = {
      { Py_tp_methods, t_Queue__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Queue__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Queue)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(Queue, t_Queue, Queue);
    PyObject *t_Queue::wrap_Object(const Queue& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Queue::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Queue *self = (t_Queue *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Queue::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Queue::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Queue *self = (t_Queue *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Queue::install(PyObject *module)
    {
      installType(&PY_TYPE(Queue), &PY_TYPE_DEF(Queue), module, "Queue", 0);
    }

    void t_Queue::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Queue), "class_", make_descriptor(Queue::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Queue), "wrapfn_", make_descriptor(t_Queue::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Queue), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Queue_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Queue::initializeClass, 1)))
        return NULL;
      return t_Queue::wrap_Object(Queue(((t_Queue *) arg)->object.this$));
    }
    static PyObject *t_Queue_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Queue::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Queue_of_(t_Queue *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Queue_add(t_Queue *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Queue), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Queue_element(t_Queue *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Queue_offer(t_Queue *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_Queue_peek(t_Queue *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Queue_poll(t_Queue *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Queue_remove(t_Queue *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.remove());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Queue), (PyObject *) self, "remove", args, 2);
    }
    static PyObject *t_Queue_get__parameters_(t_Queue *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/FieldPosition.h"
#include "java/text/Format$Field.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *FieldPosition::class$ = NULL;
    jmethodID *FieldPosition::mids$ = NULL;
    bool FieldPosition::live$ = false;

    jclass FieldPosition::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/FieldPosition");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_6da7a099f2671014] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;)V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_5f99e2d4885e07be] = env->getMethodID(cls, "<init>", "(Ljava/text/Format$Field;I)V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBeginIndex_55546ef6a647f39b] = env->getMethodID(cls, "getBeginIndex", "()I");
        mids$[mid_getEndIndex_55546ef6a647f39b] = env->getMethodID(cls, "getEndIndex", "()I");
        mids$[mid_getField_55546ef6a647f39b] = env->getMethodID(cls, "getField", "()I");
        mids$[mid_getFieldAttribute_7f60d31259f27345] = env->getMethodID(cls, "getFieldAttribute", "()Ljava/text/Format$Field;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setBeginIndex_44ed599e93e8a30c] = env->getMethodID(cls, "setBeginIndex", "(I)V");
        mids$[mid_setEndIndex_44ed599e93e8a30c] = env->getMethodID(cls, "setEndIndex", "(I)V");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6da7a099f2671014, a0.this$)) {}

    FieldPosition::FieldPosition(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    FieldPosition::FieldPosition(const ::java::text::Format$Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f99e2d4885e07be, a0.this$, a1)) {}

    jboolean FieldPosition::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint FieldPosition::getBeginIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getBeginIndex_55546ef6a647f39b]);
    }

    jint FieldPosition::getEndIndex() const
    {
      return env->callIntMethod(this$, mids$[mid_getEndIndex_55546ef6a647f39b]);
    }

    jint FieldPosition::getField() const
    {
      return env->callIntMethod(this$, mids$[mid_getField_55546ef6a647f39b]);
    }

    ::java::text::Format$Field FieldPosition::getFieldAttribute() const
    {
      return ::java::text::Format$Field(env->callObjectMethod(this$, mids$[mid_getFieldAttribute_7f60d31259f27345]));
    }

    jint FieldPosition::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    void FieldPosition::setBeginIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setBeginIndex_44ed599e93e8a30c], a0);
    }

    void FieldPosition::setEndIndex(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setEndIndex_44ed599e93e8a30c], a0);
    }

    ::java::lang::String FieldPosition::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_FieldPosition_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FieldPosition_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FieldPosition_init_(t_FieldPosition *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FieldPosition_equals(t_FieldPosition *self, PyObject *args);
    static PyObject *t_FieldPosition_getBeginIndex(t_FieldPosition *self);
    static PyObject *t_FieldPosition_getEndIndex(t_FieldPosition *self);
    static PyObject *t_FieldPosition_getField(t_FieldPosition *self);
    static PyObject *t_FieldPosition_getFieldAttribute(t_FieldPosition *self);
    static PyObject *t_FieldPosition_hashCode(t_FieldPosition *self, PyObject *args);
    static PyObject *t_FieldPosition_setBeginIndex(t_FieldPosition *self, PyObject *arg);
    static PyObject *t_FieldPosition_setEndIndex(t_FieldPosition *self, PyObject *arg);
    static PyObject *t_FieldPosition_toString(t_FieldPosition *self, PyObject *args);
    static PyObject *t_FieldPosition_get__beginIndex(t_FieldPosition *self, void *data);
    static int t_FieldPosition_set__beginIndex(t_FieldPosition *self, PyObject *arg, void *data);
    static PyObject *t_FieldPosition_get__endIndex(t_FieldPosition *self, void *data);
    static int t_FieldPosition_set__endIndex(t_FieldPosition *self, PyObject *arg, void *data);
    static PyObject *t_FieldPosition_get__field(t_FieldPosition *self, void *data);
    static PyObject *t_FieldPosition_get__fieldAttribute(t_FieldPosition *self, void *data);
    static PyGetSetDef t_FieldPosition__fields_[] = {
      DECLARE_GETSET_FIELD(t_FieldPosition, beginIndex),
      DECLARE_GETSET_FIELD(t_FieldPosition, endIndex),
      DECLARE_GET_FIELD(t_FieldPosition, field),
      DECLARE_GET_FIELD(t_FieldPosition, fieldAttribute),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FieldPosition__methods_[] = {
      DECLARE_METHOD(t_FieldPosition, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldPosition, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FieldPosition, equals, METH_VARARGS),
      DECLARE_METHOD(t_FieldPosition, getBeginIndex, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, getEndIndex, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, getField, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, getFieldAttribute, METH_NOARGS),
      DECLARE_METHOD(t_FieldPosition, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_FieldPosition, setBeginIndex, METH_O),
      DECLARE_METHOD(t_FieldPosition, setEndIndex, METH_O),
      DECLARE_METHOD(t_FieldPosition, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FieldPosition)[] = {
      { Py_tp_methods, t_FieldPosition__methods_ },
      { Py_tp_init, (void *) t_FieldPosition_init_ },
      { Py_tp_getset, t_FieldPosition__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FieldPosition)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FieldPosition, t_FieldPosition, FieldPosition);

    void t_FieldPosition::install(PyObject *module)
    {
      installType(&PY_TYPE(FieldPosition), &PY_TYPE_DEF(FieldPosition), module, "FieldPosition", 0);
    }

    void t_FieldPosition::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPosition), "class_", make_descriptor(FieldPosition::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPosition), "wrapfn_", make_descriptor(t_FieldPosition::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPosition), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FieldPosition_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FieldPosition::initializeClass, 1)))
        return NULL;
      return t_FieldPosition::wrap_Object(FieldPosition(((t_FieldPosition *) arg)->object.this$));
    }
    static PyObject *t_FieldPosition_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FieldPosition::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FieldPosition_init_(t_FieldPosition *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::text::Format$Field a0((jobject) NULL);
          FieldPosition object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::text::Format$Field::initializeClass, &a0))
          {
            INT_CALL(object = FieldPosition(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          FieldPosition object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = FieldPosition(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::text::Format$Field a0((jobject) NULL);
          jint a1;
          FieldPosition object((jobject) NULL);

          if (!parseArgs(args, "kI", ::java::text::Format$Field::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FieldPosition(a0, a1));
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

    static PyObject *t_FieldPosition_equals(t_FieldPosition *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(FieldPosition), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_FieldPosition_getBeginIndex(t_FieldPosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getBeginIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_FieldPosition_getEndIndex(t_FieldPosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getEndIndex());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_FieldPosition_getField(t_FieldPosition *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getField());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_FieldPosition_getFieldAttribute(t_FieldPosition *self)
    {
      ::java::text::Format$Field result((jobject) NULL);
      OBJ_CALL(result = self->object.getFieldAttribute());
      return ::java::text::t_Format$Field::wrap_Object(result);
    }

    static PyObject *t_FieldPosition_hashCode(t_FieldPosition *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FieldPosition), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_FieldPosition_setBeginIndex(t_FieldPosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setBeginIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setBeginIndex", arg);
      return NULL;
    }

    static PyObject *t_FieldPosition_setEndIndex(t_FieldPosition *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setEndIndex(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setEndIndex", arg);
      return NULL;
    }

    static PyObject *t_FieldPosition_toString(t_FieldPosition *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(FieldPosition), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_FieldPosition_get__beginIndex(t_FieldPosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getBeginIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_FieldPosition_set__beginIndex(t_FieldPosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setBeginIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "beginIndex", arg);
      return -1;
    }

    static PyObject *t_FieldPosition_get__endIndex(t_FieldPosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getEndIndex());
      return PyLong_FromLong((long) value);
    }
    static int t_FieldPosition_set__endIndex(t_FieldPosition *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setEndIndex(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "endIndex", arg);
      return -1;
    }

    static PyObject *t_FieldPosition_get__field(t_FieldPosition *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getField());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_FieldPosition_get__fieldAttribute(t_FieldPosition *self, void *data)
    {
      ::java::text::Format$Field value((jobject) NULL);
      OBJ_CALL(value = self->object.getFieldAttribute());
      return ::java::text::t_Format$Field::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *InstantiationException::class$ = NULL;
    jmethodID *InstantiationException::mids$ = NULL;
    bool InstantiationException::live$ = false;

    jclass InstantiationException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/InstantiationException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InstantiationException::InstantiationException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    InstantiationException::InstantiationException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_InstantiationException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InstantiationException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InstantiationException_init_(t_InstantiationException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InstantiationException__methods_[] = {
      DECLARE_METHOD(t_InstantiationException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InstantiationException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InstantiationException)[] = {
      { Py_tp_methods, t_InstantiationException__methods_ },
      { Py_tp_init, (void *) t_InstantiationException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InstantiationException)[] = {
      &PY_TYPE_DEF(::java::lang::ReflectiveOperationException),
      NULL
    };

    DEFINE_TYPE(InstantiationException, t_InstantiationException, InstantiationException);

    void t_InstantiationException::install(PyObject *module)
    {
      installType(&PY_TYPE(InstantiationException), &PY_TYPE_DEF(InstantiationException), module, "InstantiationException", 0);
    }

    void t_InstantiationException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "class_", make_descriptor(InstantiationException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "wrapfn_", make_descriptor(t_InstantiationException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InstantiationException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InstantiationException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InstantiationException::initializeClass, 1)))
        return NULL;
      return t_InstantiationException::wrap_Object(InstantiationException(((t_InstantiationException *) arg)->object.this$));
    }
    static PyObject *t_InstantiationException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InstantiationException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InstantiationException_init_(t_InstantiationException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          InstantiationException object((jobject) NULL);

          INT_CALL(object = InstantiationException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InstantiationException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InstantiationException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/System$Logger.h"
#include "java/lang/System$Logger$Level.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *System$Logger::class$ = NULL;
    jmethodID *System$Logger::mids$ = NULL;
    bool System$Logger::live$ = false;

    jclass System$Logger::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/System$Logger");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_isLoggable_5a1b1513ca374069] = env->getMethodID(cls, "isLoggable", "(Ljava/lang/System$Logger$Level;)Z");
        mids$[mid_log_4fa7eddafa665d23] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;)V");
        mids$[mid_log_e8d92e36f33b3362] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/Object;)V");
        mids$[mid_log_cc115d8ae1298d1a] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)V");
        mids$[mid_log_35bdaa7c2435c524] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_bb7a9eb3372b842e] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_log_7054b5660034cfcb] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)V");
        mids$[mid_log_6e5c0db348854a99] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V");
        mids$[mid_log_4aa0aa0b892fb1d0] = env->getMethodID(cls, "log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String System$Logger::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
    }

    jboolean System$Logger::isLoggable(const ::java::lang::System$Logger$Level & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLoggable_5a1b1513ca374069], a0.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_4fa7eddafa665d23], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_e8d92e36f33b3362], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_log_cc115d8ae1298d1a], a0.this$, a1.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const JArray< ::java::lang::Object > & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_35bdaa7c2435c524], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::lang::String & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_bb7a9eb3372b842e], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::function::Supplier & a1, const ::java::lang::Throwable & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_log_7054b5660034cfcb], a0.this$, a1.this$, a2.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const JArray< ::java::lang::Object > & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_6e5c0db348854a99], a0.this$, a1.this$, a2.this$, a3.this$);
    }

    void System$Logger::log(const ::java::lang::System$Logger$Level & a0, const ::java::util::ResourceBundle & a1, const ::java::lang::String & a2, const ::java::lang::Throwable & a3) const
    {
      env->callVoidMethod(this$, mids$[mid_log_4aa0aa0b892fb1d0], a0.this$, a1.this$, a2.this$, a3.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_System$Logger_getName(t_System$Logger *self);
    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg);
    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args);
    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data);
    static PyGetSetDef t_System$Logger__fields_[] = {
      DECLARE_GET_FIELD(t_System$Logger, name),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_System$Logger__methods_[] = {
      DECLARE_METHOD(t_System$Logger, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_System$Logger, getName, METH_NOARGS),
      DECLARE_METHOD(t_System$Logger, isLoggable, METH_O),
      DECLARE_METHOD(t_System$Logger, log, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(System$Logger)[] = {
      { Py_tp_methods, t_System$Logger__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_System$Logger__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(System$Logger)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(System$Logger, t_System$Logger, System$Logger);

    void t_System$Logger::install(PyObject *module)
    {
      installType(&PY_TYPE(System$Logger), &PY_TYPE_DEF(System$Logger), module, "System$Logger", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "Level", make_descriptor(&PY_TYPE_DEF(System$Logger$Level)));
    }

    void t_System$Logger::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "class_", make_descriptor(System$Logger::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "wrapfn_", make_descriptor(t_System$Logger::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(System$Logger), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_System$Logger_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, System$Logger::initializeClass, 1)))
        return NULL;
      return t_System$Logger::wrap_Object(System$Logger(((t_System$Logger *) arg)->object.this$));
    }
    static PyObject *t_System$Logger_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, System$Logger::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_System$Logger_getName(t_System$Logger *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_System$Logger_isLoggable(t_System$Logger *self, PyObject *arg)
    {
      ::java::lang::System$Logger$Level a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_))
      {
        OBJ_CALL(result = self->object.isLoggable(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isLoggable", arg);
      return NULL;
    }

    static PyObject *t_System$Logger_log(t_System$Logger *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "Ks", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "Ko", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
          {
            OBJ_CALL(self->object.log(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);

          if (!parseArgs(args, "Ks[o", ::java::lang::System$Logger$Level::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "Ksk", ::java::lang::System$Logger$Level::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::function::Supplier a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Throwable a2((jobject) NULL);

          if (!parseArgs(args, "KKk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::function::Supplier::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &p1, ::java::util::function::t_Supplier::parameters_, &a2))
          {
            OBJ_CALL(self->object.log(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          JArray< ::java::lang::Object > a3((jobject) NULL);

          if (!parseArgs(args, "Kks[o", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::System$Logger$Level a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::ResourceBundle a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          ::java::lang::Throwable a3((jobject) NULL);

          if (!parseArgs(args, "Kksk", ::java::lang::System$Logger$Level::initializeClass, ::java::util::ResourceBundle::initializeClass, ::java::lang::Throwable::initializeClass, &a0, &p0, ::java::lang::t_System$Logger$Level::parameters_, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.log(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "log", args);
      return NULL;
    }

    static PyObject *t_System$Logger_get__name(t_System$Logger *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }
  }
}
