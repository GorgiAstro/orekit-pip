#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Console.h"
#include "java/io/Flushable.h"
#include "java/io/PrintWriter.h"
#include "java/io/Reader.h"
#include "java/io/Console.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Console::class$ = NULL;
    jmethodID *Console::mids$ = NULL;
    bool Console::live$ = false;

    jclass Console::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Console");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_format_e952a8636ed008a6] = env->getMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_printf_e952a8636ed008a6] = env->getMethodID(cls, "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/Console;");
        mids$[mid_readLine_3cffd47377eca18a] = env->getMethodID(cls, "readLine", "()Ljava/lang/String;");
        mids$[mid_readLine_46364ebe4fe35fca] = env->getMethodID(cls, "readLine", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_readPassword_36b234749513863e] = env->getMethodID(cls, "readPassword", "()[C");
        mids$[mid_readPassword_7aff8be96a0a0dff] = env->getMethodID(cls, "readPassword", "(Ljava/lang/String;[Ljava/lang/Object;)[C");
        mids$[mid_reader_db817b1afec8e8b3] = env->getMethodID(cls, "reader", "()Ljava/io/Reader;");
        mids$[mid_writer_1a628ceb239cfb3c] = env->getMethodID(cls, "writer", "()Ljava/io/PrintWriter;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Console::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    Console Console::format(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_format_e952a8636ed008a6], a0.this$, a1.this$));
    }

    Console Console::printf(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return Console(env->callObjectMethod(this$, mids$[mid_printf_e952a8636ed008a6], a0.this$, a1.this$));
    }

    ::java::lang::String Console::readLine() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_3cffd47377eca18a]));
    }

    ::java::lang::String Console::readLine(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_readLine_46364ebe4fe35fca], a0.this$, a1.this$));
    }

    JArray< jchar > Console::readPassword() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_36b234749513863e]));
    }

    JArray< jchar > Console::readPassword(const ::java::lang::String & a0, const JArray< ::java::lang::Object > & a1) const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_readPassword_7aff8be96a0a0dff], a0.this$, a1.this$));
    }

    ::java::io::Reader Console::reader() const
    {
      return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_reader_db817b1afec8e8b3]));
    }

    ::java::io::PrintWriter Console::writer() const
    {
      return ::java::io::PrintWriter(env->callObjectMethod(this$, mids$[mid_writer_1a628ceb239cfb3c]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Console_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Console_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Console_flush(t_Console *self);
    static PyObject *t_Console_format(t_Console *self, PyObject *args);
    static PyObject *t_Console_printf(t_Console *self, PyObject *args);
    static PyObject *t_Console_readLine(t_Console *self, PyObject *args);
    static PyObject *t_Console_readPassword(t_Console *self, PyObject *args);
    static PyObject *t_Console_reader(t_Console *self);
    static PyObject *t_Console_writer(t_Console *self);

    static PyMethodDef t_Console__methods_[] = {
      DECLARE_METHOD(t_Console, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Console, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Console, flush, METH_NOARGS),
      DECLARE_METHOD(t_Console, format, METH_VARARGS),
      DECLARE_METHOD(t_Console, printf, METH_VARARGS),
      DECLARE_METHOD(t_Console, readLine, METH_VARARGS),
      DECLARE_METHOD(t_Console, readPassword, METH_VARARGS),
      DECLARE_METHOD(t_Console, reader, METH_NOARGS),
      DECLARE_METHOD(t_Console, writer, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Console)[] = {
      { Py_tp_methods, t_Console__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Console)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Console, t_Console, Console);

    void t_Console::install(PyObject *module)
    {
      installType(&PY_TYPE(Console), &PY_TYPE_DEF(Console), module, "Console", 0);
    }

    void t_Console::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "class_", make_descriptor(Console::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "wrapfn_", make_descriptor(t_Console::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Console), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Console_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Console::initializeClass, 1)))
        return NULL;
      return t_Console::wrap_Object(Console(((t_Console *) arg)->object.this$));
    }
    static PyObject *t_Console_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Console::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Console_flush(t_Console *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_Console_format(t_Console *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      Console result((jobject) NULL);

      if (!parseArgs(args, "s[o", &a0, &a1))
      {
        OBJ_CALL(result = self->object.format(a0, a1));
        return t_Console::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "format", args);
      return NULL;
    }

    static PyObject *t_Console_printf(t_Console *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      Console result((jobject) NULL);

      if (!parseArgs(args, "s[o", &a0, &a1))
      {
        OBJ_CALL(result = self->object.printf(a0, a1));
        return t_Console::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "printf", args);
      return NULL;
    }

    static PyObject *t_Console_readLine(t_Console *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.readLine());
          return j2p(result);
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.readLine(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readLine", args);
      return NULL;
    }

    static PyObject *t_Console_readPassword(t_Console *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jchar > result((jobject) NULL);
          OBJ_CALL(result = self->object.readPassword());
          return result.wrap();
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = self->object.readPassword(a0, a1));
            return result.wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readPassword", args);
      return NULL;
    }

    static PyObject *t_Console_reader(t_Console *self)
    {
      ::java::io::Reader result((jobject) NULL);
      OBJ_CALL(result = self->object.reader());
      return ::java::io::t_Reader::wrap_Object(result);
    }

    static PyObject *t_Console_writer(t_Console *self)
    {
      ::java::io::PrintWriter result((jobject) NULL);
      OBJ_CALL(result = self->object.writer());
      return ::java::io::t_PrintWriter::wrap_Object(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Properties.h"
#include "java/util/Map$Entry.h"
#include "java/io/IOException.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/util/Collection.h"
#include "java/io/PrintWriter.h"
#include "java/io/Reader.h"
#include "java/util/Set.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Properties::class$ = NULL;
    jmethodID *Properties::mids$ = NULL;
    bool Properties::live$ = false;

    jclass Properties::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Properties");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_221e8e85cb385209] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_221e8e85cb385209] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_00b99a423cfc29b8] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_65d69db95c5eb156] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_e9b6f8dd03d71e12] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getProperty_60bb1b490b673cbf] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_495add03b8c9417b] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_00b99a423cfc29b8] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_list_bbeebf9dbb580a3d] = env->getMethodID(cls, "list", "(Ljava/io/PrintStream;)V");
        mids$[mid_list_b077047c9598ae7e] = env->getMethodID(cls, "list", "(Ljava/io/PrintWriter;)V");
        mids$[mid_load_115bc9fcd812647a] = env->getMethodID(cls, "load", "(Ljava/io/InputStream;)V");
        mids$[mid_load_d679cb724d14a1e8] = env->getMethodID(cls, "load", "(Ljava/io/Reader;)V");
        mids$[mid_loadFromXML_115bc9fcd812647a] = env->getMethodID(cls, "loadFromXML", "(Ljava/io/InputStream;)V");
        mids$[mid_propertyNames_00b99a423cfc29b8] = env->getMethodID(cls, "propertyNames", "()Ljava/util/Enumeration;");
        mids$[mid_put_e9b6f8dd03d71e12] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6ba01303bcce0307] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_e9b6f8dd03d71e12] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_65d69db95c5eb156] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5f964797772d10ff] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_e9b6f8dd03d71e12] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_5c8006f3f1f9c96f] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_save_207a8313515c6ca8] = env->getMethodID(cls, "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_setProperty_63fc77e6d24b7a67] = env->getMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_store_207a8313515c6ca8] = env->getMethodID(cls, "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_store_a67829916a4b8bcb] = env->getMethodID(cls, "store", "(Ljava/io/Writer;Ljava/lang/String;)V");
        mids$[mid_storeToXML_207a8313515c6ca8] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_storeToXML_eeb3e1bed9e221e7] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_stringPropertyNames_2dfcbd371d62f4e1] = env->getMethodID(cls, "stringPropertyNames", "()Ljava/util/Set;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_12ee61573a18f417] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_0640e6acf969ed28] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Properties::Properties() : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    Properties::Properties(jint a0) : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    void Properties::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ::java::lang::Object Properties::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean Properties::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean Properties::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_221e8e85cb385209], a0.this$);
    }

    jboolean Properties::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_221e8e85cb385209], a0.this$);
    }

    ::java::util::Enumeration Properties::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_00b99a423cfc29b8]));
    }

    ::java::util::Set Properties::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_2dfcbd371d62f4e1]));
    }

    jboolean Properties::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::Object Properties::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object Properties::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_60bb1b490b673cbf], a0.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_495add03b8c9417b], a0.this$, a1.this$));
    }

    jint Properties::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Properties::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Set Properties::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }

    ::java::util::Enumeration Properties::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_00b99a423cfc29b8]));
    }

    void Properties::list(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_bbeebf9dbb580a3d], a0.this$);
    }

    void Properties::list(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_b077047c9598ae7e], a0.this$);
    }

    void Properties::load(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_115bc9fcd812647a], a0.this$);
    }

    void Properties::load(const ::java::io::Reader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_d679cb724d14a1e8], a0.this$);
    }

    void Properties::loadFromXML(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_loadFromXML_115bc9fcd812647a], a0.this$);
    }

    ::java::util::Enumeration Properties::propertyNames() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_propertyNames_00b99a423cfc29b8]));
    }

    ::java::lang::Object Properties::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    void Properties::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6ba01303bcce0307], a0.this$);
    }

    ::java::lang::Object Properties::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    ::java::lang::Object Properties::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_65d69db95c5eb156], a0.this$));
    }

    jboolean Properties::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_5f964797772d10ff], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    jboolean Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_5c8006f3f1f9c96f], a0.this$, a1.this$, a2.this$);
    }

    void Properties::save(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_save_207a8313515c6ca8], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setProperty_63fc77e6d24b7a67], a0.this$, a1.this$));
    }

    jint Properties::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    void Properties::store(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_207a8313515c6ca8], a0.this$, a1.this$);
    }

    void Properties::store(const ::java::io::Writer & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_a67829916a4b8bcb], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_207a8313515c6ca8], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_eeb3e1bed9e221e7], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Set Properties::stringPropertyNames() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_stringPropertyNames_2dfcbd371d62f4e1]));
    }

    ::java::lang::String Properties::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    ::java::util::Collection Properties::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_12ee61573a18f417]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args);
    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_list(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_load(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg);
    static PyObject *t_Properties_propertyNames(t_Properties *self);
    static PyObject *t_Properties_put(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_save(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_size(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_store(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_stringPropertyNames(t_Properties *self);
    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_values(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get__empty(t_Properties *self, void *data);
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data);
    static PyGetSetDef t_Properties__fields_[] = {
      DECLARE_GET_FIELD(t_Properties, empty),
      DECLARE_GET_FIELD(t_Properties, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Properties__methods_[] = {
      DECLARE_METHOD(t_Properties, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, of_, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clear, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clone, METH_VARARGS),
      DECLARE_METHOD(t_Properties, contains, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_Properties, elements, METH_VARARGS),
      DECLARE_METHOD(t_Properties, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, equals, METH_VARARGS),
      DECLARE_METHOD(t_Properties, get, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Properties, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keys, METH_VARARGS),
      DECLARE_METHOD(t_Properties, list, METH_VARARGS),
      DECLARE_METHOD(t_Properties, load, METH_VARARGS),
      DECLARE_METHOD(t_Properties, loadFromXML, METH_O),
      DECLARE_METHOD(t_Properties, propertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, put, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putAll, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Properties, remove, METH_VARARGS),
      DECLARE_METHOD(t_Properties, replace, METH_VARARGS),
      DECLARE_METHOD(t_Properties, save, METH_VARARGS),
      DECLARE_METHOD(t_Properties, setProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, size, METH_VARARGS),
      DECLARE_METHOD(t_Properties, store, METH_VARARGS),
      DECLARE_METHOD(t_Properties, storeToXML, METH_VARARGS),
      DECLARE_METHOD(t_Properties, stringPropertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, toString, METH_VARARGS),
      DECLARE_METHOD(t_Properties, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Properties)[] = {
      { Py_tp_methods, t_Properties__methods_ },
      { Py_tp_init, (void *) t_Properties_init_ },
      { Py_tp_getset, t_Properties__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Properties)[] = {
      &PY_TYPE_DEF(::java::util::Hashtable),
      NULL
    };

    DEFINE_TYPE(Properties, t_Properties, Properties);
    PyObject *t_Properties::wrap_Object(const Properties& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Properties::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Properties::install(PyObject *module)
    {
      installType(&PY_TYPE(Properties), &PY_TYPE_DEF(Properties), module, "Properties", 0);
    }

    void t_Properties::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "class_", make_descriptor(Properties::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "wrapfn_", make_descriptor(t_Properties::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Properties::initializeClass, 1)))
        return NULL;
      return t_Properties::wrap_Object(Properties(((t_Properties *) arg)->object.this$));
    }
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Properties::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Properties object((jobject) NULL);

          INT_CALL(object = Properties());
          self->object = object;
          self->parameters[0] = ::java::lang::PY_TYPE(Object);
          self->parameters[1] = ::java::lang::PY_TYPE(Object);
          break;
        }
       case 1:
        {
          jint a0;
          Properties object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Properties(a0));
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Object);
            self->parameters[1] = ::java::lang::PY_TYPE(Object);
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.elements());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "elements", args, 2);
    }

    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Properties_get(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keys());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keys", args, 2);
    }

    static PyObject *t_Properties_list(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_Properties_load(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Reader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "load", args);
      return NULL;
    }

    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(self->object.loadFromXML(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "loadFromXML", arg);
      return NULL;
    }

    static PyObject *t_Properties_propertyNames(t_Properties *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.propertyNames());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Properties_put(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_Properties_save(t_Properties *self, PyObject *args)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);

      if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.save(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "save", args);
      return NULL;
    }

    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.setProperty(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_size(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Properties_store(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "store", args);
      return NULL;
    }

    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);

          if (!parseArgs(args, "kss", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "storeToXML", args);
      return NULL;
    }

    static PyObject *t_Properties_stringPropertyNames(t_Properties *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.stringPropertyNames());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Properties_values(t_Properties *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Properties_get__empty(t_Properties *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/InterruptedException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *InterruptedException::class$ = NULL;
    jmethodID *InterruptedException::mids$ = NULL;
    bool InterruptedException::live$ = false;

    jclass InterruptedException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/InterruptedException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InterruptedException::InterruptedException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    InterruptedException::InterruptedException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_InterruptedException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InterruptedException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InterruptedException_init_(t_InterruptedException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InterruptedException__methods_[] = {
      DECLARE_METHOD(t_InterruptedException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InterruptedException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InterruptedException)[] = {
      { Py_tp_methods, t_InterruptedException__methods_ },
      { Py_tp_init, (void *) t_InterruptedException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InterruptedException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(InterruptedException, t_InterruptedException, InterruptedException);

    void t_InterruptedException::install(PyObject *module)
    {
      installType(&PY_TYPE(InterruptedException), &PY_TYPE_DEF(InterruptedException), module, "InterruptedException", 0);
    }

    void t_InterruptedException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InterruptedException), "class_", make_descriptor(InterruptedException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InterruptedException), "wrapfn_", make_descriptor(t_InterruptedException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InterruptedException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InterruptedException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InterruptedException::initializeClass, 1)))
        return NULL;
      return t_InterruptedException::wrap_Object(InterruptedException(((t_InterruptedException *) arg)->object.this$));
    }
    static PyObject *t_InterruptedException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InterruptedException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InterruptedException_init_(t_InterruptedException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          InterruptedException object((jobject) NULL);

          INT_CALL(object = InterruptedException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InterruptedException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InterruptedException(a0));
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
#include "java/lang/Cloneable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Cloneable::class$ = NULL;
    jmethodID *Cloneable::mids$ = NULL;
    bool Cloneable::live$ = false;

    jclass Cloneable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Cloneable");

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
  namespace lang {
    static PyObject *t_Cloneable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Cloneable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Cloneable__methods_[] = {
      DECLARE_METHOD(t_Cloneable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Cloneable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Cloneable)[] = {
      { Py_tp_methods, t_Cloneable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Cloneable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Cloneable, t_Cloneable, Cloneable);

    void t_Cloneable::install(PyObject *module)
    {
      installType(&PY_TYPE(Cloneable), &PY_TYPE_DEF(Cloneable), module, "Cloneable", 0);
    }

    void t_Cloneable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "class_", make_descriptor(Cloneable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "wrapfn_", make_descriptor(t_Cloneable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Cloneable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Cloneable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Cloneable::initializeClass, 1)))
        return NULL;
      return t_Cloneable::wrap_Object(Cloneable(((t_Cloneable *) arg)->object.this$));
    }
    static PyObject *t_Cloneable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Cloneable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
        mids$[mid_getCause_1541e293f3dffabf] = env->getMethodID(cls, "getCause", "()Ljava/lang/Throwable;");
        mids$[mid_getException_1541e293f3dffabf] = env->getMethodID(cls, "getException", "()Ljava/lang/Throwable;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ClassNotFoundException::ClassNotFoundException() : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    ClassNotFoundException::ClassNotFoundException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::ReflectiveOperationException(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}

    ::java::lang::Throwable ClassNotFoundException::getCause() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getCause_1541e293f3dffabf]));
    }

    ::java::lang::Throwable ClassNotFoundException::getException() const
    {
      return ::java::lang::Throwable(env->callObjectMethod(this$, mids$[mid_getException_1541e293f3dffabf]));
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
        mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_getClassName_3cffd47377eca18a] = env->getMethodID(cls, "getClassName", "()Ljava/lang/String;");
        mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    MissingResourceException::MissingResourceException(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::String MissingResourceException::getClassName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassName_3cffd47377eca18a]));
    }

    ::java::lang::String MissingResourceException::getKey() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
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
#include "java/util/ResourceBundle.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle::class$ = NULL;
    jmethodID *ResourceBundle::mids$ = NULL;
    bool ResourceBundle::live$ = false;

    jclass ResourceBundle::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clearCache_0640e6acf969ed28] = env->getStaticMethodID(cls, "clearCache", "()V");
        mids$[mid_clearCache_3cf05a86101dd452] = env->getStaticMethodID(cls, "clearCache", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_containsKey_fd2162b8a05a22fe] = env->getMethodID(cls, "containsKey", "(Ljava/lang/String;)Z");
        mids$[mid_getBaseBundleName_3cffd47377eca18a] = env->getMethodID(cls, "getBaseBundleName", "()Ljava/lang/String;");
        mids$[mid_getBundle_e0da9fa628df6799] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_7b6c9c1764085eea] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_4751b51e2cea8067] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_33e498a9d5a4d5af] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_4cc81d9f43c60e1f] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_8e47a1358bccd05d] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_4c02f480d3600c6f] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_b3b885301694fe90] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getKeys_00b99a423cfc29b8] = env->getMethodID(cls, "getKeys", "()Ljava/util/Enumeration;");
        mids$[mid_getLocale_dbe2fc8ef8b3e0a1] = env->getMethodID(cls, "getLocale", "()Ljava/util/Locale;");
        mids$[mid_getObject_86c4b8560f4aa70f] = env->getMethodID(cls, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_getString_60bb1b490b673cbf] = env->getMethodID(cls, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getStringArray_c6b001d9fe3bba6d] = env->getMethodID(cls, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_keySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_handleGetObject_86c4b8560f4aa70f] = env->getMethodID(cls, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_handleKeySet_2dfcbd371d62f4e1] = env->getMethodID(cls, "handleKeySet", "()Ljava/util/Set;");
        mids$[mid_setParent_da729090bfa11ea4] = env->getMethodID(cls, "setParent", "(Ljava/util/ResourceBundle;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ResourceBundle::ResourceBundle() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    void ResourceBundle::clearCache()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_0640e6acf969ed28]);
    }

    void ResourceBundle::clearCache(const ::java::lang::ClassLoader & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_3cf05a86101dd452], a0.this$);
    }

    jboolean ResourceBundle::containsKey(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_fd2162b8a05a22fe], a0.this$);
    }

    ::java::lang::String ResourceBundle::getBaseBundleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBaseBundleName_3cffd47377eca18a]));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_e0da9fa628df6799], a0.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::lang::Module & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_7b6c9c1764085eea], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_4751b51e2cea8067], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::ResourceBundle$Control & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_33e498a9d5a4d5af], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_4cc81d9f43c60e1f], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::Module & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_8e47a1358bccd05d], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::util::ResourceBundle$Control & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_4c02f480d3600c6f], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2, const ::java::util::ResourceBundle$Control & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_b3b885301694fe90], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::java::util::Enumeration ResourceBundle::getKeys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getKeys_00b99a423cfc29b8]));
    }

    ::java::util::Locale ResourceBundle::getLocale() const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getLocale_dbe2fc8ef8b3e0a1]));
    }

    ::java::lang::Object ResourceBundle::getObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getObject_86c4b8560f4aa70f], a0.this$));
    }

    ::java::lang::String ResourceBundle::getString(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getString_60bb1b490b673cbf], a0.this$));
    }

    JArray< ::java::lang::String > ResourceBundle::getStringArray(const ::java::lang::String & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getStringArray_c6b001d9fe3bba6d], a0.this$));
    }

    ::java::util::Set ResourceBundle::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_2dfcbd371d62f4e1]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data);
    static PyGetSetDef t_ResourceBundle__fields_[] = {
      DECLARE_GET_FIELD(t_ResourceBundle, baseBundleName),
      DECLARE_GET_FIELD(t_ResourceBundle, keys),
      DECLARE_GET_FIELD(t_ResourceBundle, locale),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ResourceBundle__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, clearCache, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, containsKey, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getBaseBundleName, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getBundle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, getKeys, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getLocale, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getObject, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getString, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getStringArray, METH_O),
      DECLARE_METHOD(t_ResourceBundle, keySet, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle)[] = {
      { Py_tp_methods, t_ResourceBundle__methods_ },
      { Py_tp_init, (void *) t_ResourceBundle_init_ },
      { Py_tp_getset, t_ResourceBundle__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle, t_ResourceBundle, ResourceBundle);

    void t_ResourceBundle::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle), &PY_TYPE_DEF(ResourceBundle), module, "ResourceBundle", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "Control", make_descriptor(&PY_TYPE_DEF(ResourceBundle$Control)));
    }

    void t_ResourceBundle::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "class_", make_descriptor(ResourceBundle::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "wrapfn_", make_descriptor(t_ResourceBundle::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle::wrap_Object(ResourceBundle(((t_ResourceBundle *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds)
    {
      ResourceBundle object((jobject) NULL);

      INT_CALL(object = ResourceBundle());
      self->object = object;

      return 0;
    }

    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(::java::util::ResourceBundle::clearCache());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::lang::ClassLoader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ClassLoader::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::ResourceBundle::clearCache(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "clearCache", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getBaseBundleName());
      return j2p(result);
    }

    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Module a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle$Control a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::Module a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::util::ResourceBundle$Control a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ::java::util::ResourceBundle$Control a3((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skkk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2, a3));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self)
    {
      ::java::util::Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(result);
    }

    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getObject(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getObject", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getString", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::String > result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getStringArray(a0));
        return JArray<jstring>(result.this$).wrap();
      }

      PyErr_SetArgsError((PyObject *) self, "getStringArray", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getBaseBundleName());
      return j2p(value);
    }

    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data)
    {
      ::java::util::Enumeration value((jobject) NULL);
      OBJ_CALL(value = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(value);
    }

    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data)
    {
      ::java::util::Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Dictionary.h"
#include "java/util/Enumeration.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Dictionary::class$ = NULL;
    jmethodID *Dictionary::mids$ = NULL;
    bool Dictionary::live$ = false;

    jclass Dictionary::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Dictionary");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_elements_00b99a423cfc29b8] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_get_65d69db95c5eb156] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keys_00b99a423cfc29b8] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_put_e9b6f8dd03d71e12] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_65d69db95c5eb156] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Dictionary::Dictionary() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    ::java::util::Enumeration Dictionary::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_00b99a423cfc29b8]));
    }

    ::java::lang::Object Dictionary::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_65d69db95c5eb156], a0.this$));
    }

    jboolean Dictionary::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Enumeration Dictionary::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_00b99a423cfc29b8]));
    }

    ::java::lang::Object Dictionary::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_e9b6f8dd03d71e12], a0.this$, a1.this$));
    }

    ::java::lang::Object Dictionary::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_65d69db95c5eb156], a0.this$));
    }

    jint Dictionary::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Dictionary_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Dictionary_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Dictionary_of_(t_Dictionary *self, PyObject *args);
    static int t_Dictionary_init_(t_Dictionary *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Dictionary_elements(t_Dictionary *self);
    static PyObject *t_Dictionary_get(t_Dictionary *self, PyObject *arg);
    static PyObject *t_Dictionary_isEmpty(t_Dictionary *self);
    static PyObject *t_Dictionary_keys(t_Dictionary *self);
    static PyObject *t_Dictionary_put(t_Dictionary *self, PyObject *args);
    static PyObject *t_Dictionary_remove(t_Dictionary *self, PyObject *arg);
    static PyObject *t_Dictionary_size(t_Dictionary *self);
    static PyObject *t_Dictionary_get__empty(t_Dictionary *self, void *data);
    static PyObject *t_Dictionary_get__parameters_(t_Dictionary *self, void *data);
    static PyGetSetDef t_Dictionary__fields_[] = {
      DECLARE_GET_FIELD(t_Dictionary, empty),
      DECLARE_GET_FIELD(t_Dictionary, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Dictionary__methods_[] = {
      DECLARE_METHOD(t_Dictionary, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Dictionary, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Dictionary, of_, METH_VARARGS),
      DECLARE_METHOD(t_Dictionary, elements, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, get, METH_O),
      DECLARE_METHOD(t_Dictionary, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, keys, METH_NOARGS),
      DECLARE_METHOD(t_Dictionary, put, METH_VARARGS),
      DECLARE_METHOD(t_Dictionary, remove, METH_O),
      DECLARE_METHOD(t_Dictionary, size, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Dictionary)[] = {
      { Py_tp_methods, t_Dictionary__methods_ },
      { Py_tp_init, (void *) t_Dictionary_init_ },
      { Py_tp_getset, t_Dictionary__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Dictionary)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Dictionary, t_Dictionary, Dictionary);
    PyObject *t_Dictionary::wrap_Object(const Dictionary& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Dictionary::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Dictionary *self = (t_Dictionary *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Dictionary::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Dictionary::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Dictionary *self = (t_Dictionary *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Dictionary::install(PyObject *module)
    {
      installType(&PY_TYPE(Dictionary), &PY_TYPE_DEF(Dictionary), module, "Dictionary", 0);
    }

    void t_Dictionary::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "class_", make_descriptor(Dictionary::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "wrapfn_", make_descriptor(t_Dictionary::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Dictionary), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Dictionary_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Dictionary::initializeClass, 1)))
        return NULL;
      return t_Dictionary::wrap_Object(Dictionary(((t_Dictionary *) arg)->object.this$));
    }
    static PyObject *t_Dictionary_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Dictionary::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Dictionary_of_(t_Dictionary *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Dictionary_init_(t_Dictionary *self, PyObject *args, PyObject *kwds)
    {
      Dictionary object((jobject) NULL);

      INT_CALL(object = Dictionary());
      self->object = object;

      return 0;
    }

    static PyObject *t_Dictionary_elements(t_Dictionary *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.elements());
      return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[1]);
    }

    static PyObject *t_Dictionary_get(t_Dictionary *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_Dictionary_isEmpty(t_Dictionary *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Dictionary_keys(t_Dictionary *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.keys());
      return ::java::util::t_Enumeration::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Dictionary_put(t_Dictionary *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "put", args);
      return NULL;
    }

    static PyObject *t_Dictionary_remove(t_Dictionary *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Dictionary_size(t_Dictionary *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }
    static PyObject *t_Dictionary_get__parameters_(t_Dictionary *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Dictionary_get__empty(t_Dictionary *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Class.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableMap::class$ = NULL;
    jmethodID *NavigableMap::mids$ = NULL;
    bool NavigableMap::live$ = false;

    jclass NavigableMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceilingEntry_6837146afe3e1734] = env->getMethodID(cls, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_ceilingKey_65d69db95c5eb156] = env->getMethodID(cls, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingKeySet_0617a74a450b6c8d] = env->getMethodID(cls, "descendingKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_descendingMap_60eb75cca6401fd1] = env->getMethodID(cls, "descendingMap", "()Ljava/util/NavigableMap;");
        mids$[mid_firstEntry_fbea6a9035a0663d] = env->getMethodID(cls, "firstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_floorEntry_6837146afe3e1734] = env->getMethodID(cls, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_floorKey_65d69db95c5eb156] = env->getMethodID(cls, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headMap_a274b6b212194ae4] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_headMap_99ef2eddf9e5ce0a] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_higherEntry_6837146afe3e1734] = env->getMethodID(cls, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_higherKey_65d69db95c5eb156] = env->getMethodID(cls, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_lastEntry_fbea6a9035a0663d] = env->getMethodID(cls, "lastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_lowerEntry_6837146afe3e1734] = env->getMethodID(cls, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_lowerKey_65d69db95c5eb156] = env->getMethodID(cls, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_navigableKeySet_0617a74a450b6c8d] = env->getMethodID(cls, "navigableKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_pollFirstEntry_fbea6a9035a0663d] = env->getMethodID(cls, "pollFirstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_pollLastEntry_fbea6a9035a0663d] = env->getMethodID(cls, "pollLastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_subMap_4cc139291973b971] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_subMap_a0dc70ea23dca4da] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_tailMap_a274b6b212194ae4] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_99ef2eddf9e5ce0a] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Map$Entry NavigableMap::ceilingEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_ceilingEntry_6837146afe3e1734], a0.this$));
    }

    ::java::lang::Object NavigableMap::ceilingKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceilingKey_65d69db95c5eb156], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::descendingKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingKeySet_0617a74a450b6c8d]));
    }

    NavigableMap NavigableMap::descendingMap() const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_descendingMap_60eb75cca6401fd1]));
    }

    ::java::util::Map$Entry NavigableMap::firstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_firstEntry_fbea6a9035a0663d]));
    }

    ::java::util::Map$Entry NavigableMap::floorEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_floorEntry_6837146afe3e1734], a0.this$));
    }

    ::java::lang::Object NavigableMap::floorKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floorKey_65d69db95c5eb156], a0.this$));
    }

    ::java::util::SortedMap NavigableMap::headMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_a274b6b212194ae4], a0.this$));
    }

    NavigableMap NavigableMap::headMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_headMap_99ef2eddf9e5ce0a], a0.this$, a1));
    }

    ::java::util::Map$Entry NavigableMap::higherEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_higherEntry_6837146afe3e1734], a0.this$));
    }

    ::java::lang::Object NavigableMap::higherKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higherKey_65d69db95c5eb156], a0.this$));
    }

    ::java::util::Map$Entry NavigableMap::lastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lastEntry_fbea6a9035a0663d]));
    }

    ::java::util::Map$Entry NavigableMap::lowerEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lowerEntry_6837146afe3e1734], a0.this$));
    }

    ::java::lang::Object NavigableMap::lowerKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lowerKey_65d69db95c5eb156], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::navigableKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_navigableKeySet_0617a74a450b6c8d]));
    }

    ::java::util::Map$Entry NavigableMap::pollFirstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollFirstEntry_fbea6a9035a0663d]));
    }

    ::java::util::Map$Entry NavigableMap::pollLastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollLastEntry_fbea6a9035a0663d]));
    }

    ::java::util::SortedMap NavigableMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_4cc139291973b971], a0.this$, a1.this$));
    }

    NavigableMap NavigableMap::subMap(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_subMap_a0dc70ea23dca4da], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedMap NavigableMap::tailMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_a274b6b212194ae4], a0.this$));
    }

    NavigableMap NavigableMap::tailMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_tailMap_99ef2eddf9e5ce0a], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableMap_of_(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_ceilingEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_ceilingKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_descendingKeySet(t_NavigableMap *self);
    static PyObject *t_NavigableMap_descendingMap(t_NavigableMap *self);
    static PyObject *t_NavigableMap_firstEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_floorEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_floorKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_headMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_higherEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_higherKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_lastEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_lowerEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_lowerKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_navigableKeySet(t_NavigableMap *self);
    static PyObject *t_NavigableMap_pollFirstEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_pollLastEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_subMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_tailMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_get__parameters_(t_NavigableMap *self, void *data);
    static PyGetSetDef t_NavigableMap__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableMap__methods_[] = {
      DECLARE_METHOD(t_NavigableMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, ceilingEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, ceilingKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, descendingKeySet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, descendingMap, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, firstEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, floorEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, floorKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, headMap, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, higherEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, higherKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, lastEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, lowerEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, lowerKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, navigableKeySet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, pollFirstEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, pollLastEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, subMap, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, tailMap, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableMap)[] = {
      { Py_tp_methods, t_NavigableMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableMap)[] = {
      &PY_TYPE_DEF(::java::util::SortedMap),
      NULL
    };

    DEFINE_TYPE(NavigableMap, t_NavigableMap, NavigableMap);
    PyObject *t_NavigableMap::wrap_Object(const NavigableMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_NavigableMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableMap *self = (t_NavigableMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_NavigableMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_NavigableMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableMap *self = (t_NavigableMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_NavigableMap::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableMap), &PY_TYPE_DEF(NavigableMap), module, "NavigableMap", 0);
    }

    void t_NavigableMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "class_", make_descriptor(NavigableMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "wrapfn_", make_descriptor(t_NavigableMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableMap::initializeClass, 1)))
        return NULL;
      return t_NavigableMap::wrap_Object(NavigableMap(((t_NavigableMap *) arg)->object.this$));
    }
    static PyObject *t_NavigableMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableMap_of_(t_NavigableMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableMap_ceilingEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceilingEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "ceilingEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_ceilingKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceilingKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceilingKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_descendingKeySet(t_NavigableMap *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingKeySet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableMap_descendingMap(t_NavigableMap *self)
    {
      NavigableMap result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingMap());
      return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_firstEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.firstEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_floorEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floorEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "floorEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_floorKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floorKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floorKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_headMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headMap(a0));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headMap(a0, a1));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "headMap", args, 2);
    }

    static PyObject *t_NavigableMap_higherEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higherEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "higherEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_higherKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higherKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higherKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_lastEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.lastEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_lowerEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lowerEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "lowerEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_lowerKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lowerKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lowerKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_navigableKeySet(t_NavigableMap *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.navigableKeySet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableMap_pollFirstEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirstEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_pollLastEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLastEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_subMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subMap(a0, a1));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subMap(a0, a1, a2, a3));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "subMap", args, 2);
    }

    static PyObject *t_NavigableMap_tailMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailMap(a0));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailMap(a0, a1));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "tailMap", args, 2);
    }
    static PyObject *t_NavigableMap_get__parameters_(t_NavigableMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Package.h"
#include "java/lang/Class.h"
#include "java/lang/Package.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
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
        mids$[mid_getImplementationTitle_3cffd47377eca18a] = env->getMethodID(cls, "getImplementationTitle", "()Ljava/lang/String;");
        mids$[mid_getImplementationVendor_3cffd47377eca18a] = env->getMethodID(cls, "getImplementationVendor", "()Ljava/lang/String;");
        mids$[mid_getImplementationVersion_3cffd47377eca18a] = env->getMethodID(cls, "getImplementationVersion", "()Ljava/lang/String;");
        mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getPackage_7b9ea2e3cd9b2198] = env->getStaticMethodID(cls, "getPackage", "(Ljava/lang/String;)Ljava/lang/Package;");
        mids$[mid_getPackages_fd735c3a2f16936e] = env->getStaticMethodID(cls, "getPackages", "()[Ljava/lang/Package;");
        mids$[mid_getSpecificationTitle_3cffd47377eca18a] = env->getMethodID(cls, "getSpecificationTitle", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVendor_3cffd47377eca18a] = env->getMethodID(cls, "getSpecificationVendor", "()Ljava/lang/String;");
        mids$[mid_getSpecificationVersion_3cffd47377eca18a] = env->getMethodID(cls, "getSpecificationVersion", "()Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isCompatibleWith_fd2162b8a05a22fe] = env->getMethodID(cls, "isCompatibleWith", "(Ljava/lang/String;)Z");
        mids$[mid_isSealed_89b302893bdbe1f1] = env->getMethodID(cls, "isSealed", "()Z");
        mids$[mid_isSealed_f24d92f382df2fc3] = env->getMethodID(cls, "isSealed", "(Ljava/net/URL;)Z");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::String Package::getImplementationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationTitle_3cffd47377eca18a]));
    }

    ::java::lang::String Package::getImplementationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVendor_3cffd47377eca18a]));
    }

    ::java::lang::String Package::getImplementationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImplementationVersion_3cffd47377eca18a]));
    }

    ::java::lang::String Package::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
    }

    Package Package::getPackage(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Package(env->callStaticObjectMethod(cls, mids$[mid_getPackage_7b9ea2e3cd9b2198], a0.this$));
    }

    JArray< Package > Package::getPackages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Package >(env->callStaticObjectMethod(cls, mids$[mid_getPackages_fd735c3a2f16936e]));
    }

    ::java::lang::String Package::getSpecificationTitle() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationTitle_3cffd47377eca18a]));
    }

    ::java::lang::String Package::getSpecificationVendor() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVendor_3cffd47377eca18a]));
    }

    ::java::lang::String Package::getSpecificationVersion() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpecificationVersion_3cffd47377eca18a]));
    }

    jint Package::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean Package::isCompatibleWith(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_fd2162b8a05a22fe], a0.this$);
    }

    jboolean Package::isSealed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_89b302893bdbe1f1]);
    }

    jboolean Package::isSealed(const ::java::net::URL & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSealed_f24d92f382df2fc3], a0.this$);
    }

    ::java::lang::String Package::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
#include "java/util/Currency.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/Currency.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Currency::class$ = NULL;
    jmethodID *Currency::mids$ = NULL;
    bool Currency::live$ = false;

    jclass Currency::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Currency");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAvailableCurrencies_2dfcbd371d62f4e1] = env->getStaticMethodID(cls, "getAvailableCurrencies", "()Ljava/util/Set;");
        mids$[mid_getCurrencyCode_3cffd47377eca18a] = env->getMethodID(cls, "getCurrencyCode", "()Ljava/lang/String;");
        mids$[mid_getDefaultFractionDigits_412668abc8d889e9] = env->getMethodID(cls, "getDefaultFractionDigits", "()I");
        mids$[mid_getDisplayName_3cffd47377eca18a] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_4b51060c6b7ea981] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getInstance_51e9b5ef3cee4cb5] = env->getStaticMethodID(cls, "getInstance", "(Ljava/lang/String;)Ljava/util/Currency;");
        mids$[mid_getInstance_babbc6e6ce0672cb] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/util/Currency;");
        mids$[mid_getNumericCode_412668abc8d889e9] = env->getMethodID(cls, "getNumericCode", "()I");
        mids$[mid_getNumericCodeAsString_3cffd47377eca18a] = env->getMethodID(cls, "getNumericCodeAsString", "()Ljava/lang/String;");
        mids$[mid_getSymbol_3cffd47377eca18a] = env->getMethodID(cls, "getSymbol", "()Ljava/lang/String;");
        mids$[mid_getSymbol_4b51060c6b7ea981] = env->getMethodID(cls, "getSymbol", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set Currency::getAvailableCurrencies()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getAvailableCurrencies_2dfcbd371d62f4e1]));
    }

    ::java::lang::String Currency::getCurrencyCode() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencyCode_3cffd47377eca18a]));
    }

    jint Currency::getDefaultFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultFractionDigits_412668abc8d889e9]);
    }

    ::java::lang::String Currency::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_3cffd47377eca18a]));
    }

    ::java::lang::String Currency::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_4b51060c6b7ea981], a0.this$));
    }

    Currency Currency::getInstance(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_51e9b5ef3cee4cb5], a0.this$));
    }

    Currency Currency::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_babbc6e6ce0672cb], a0.this$));
    }

    jint Currency::getNumericCode() const
    {
      return env->callIntMethod(this$, mids$[mid_getNumericCode_412668abc8d889e9]);
    }

    ::java::lang::String Currency::getNumericCodeAsString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNumericCodeAsString_3cffd47377eca18a]));
    }

    ::java::lang::String Currency::getSymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_3cffd47377eca18a]));
    }

    ::java::lang::String Currency::getSymbol(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_4b51060c6b7ea981], a0.this$));
    }

    ::java::lang::String Currency::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type);
    static PyObject *t_Currency_getCurrencyCode(t_Currency *self);
    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self);
    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_Currency_getNumericCode(t_Currency *self);
    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self);
    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data);
    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data);
    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data);
    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data);
    static PyGetSetDef t_Currency__fields_[] = {
      DECLARE_GET_FIELD(t_Currency, availableCurrencies),
      DECLARE_GET_FIELD(t_Currency, currencyCode),
      DECLARE_GET_FIELD(t_Currency, defaultFractionDigits),
      DECLARE_GET_FIELD(t_Currency, displayName),
      DECLARE_GET_FIELD(t_Currency, numericCode),
      DECLARE_GET_FIELD(t_Currency, numericCodeAsString),
      DECLARE_GET_FIELD(t_Currency, symbol),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Currency__methods_[] = {
      DECLARE_METHOD(t_Currency, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, getAvailableCurrencies, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getCurrencyCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDefaultFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Currency, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getNumericCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getNumericCodeAsString, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getSymbol, METH_VARARGS),
      DECLARE_METHOD(t_Currency, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Currency)[] = {
      { Py_tp_methods, t_Currency__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Currency__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Currency)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Currency, t_Currency, Currency);

    void t_Currency::install(PyObject *module)
    {
      installType(&PY_TYPE(Currency), &PY_TYPE_DEF(Currency), module, "Currency", 0);
    }

    void t_Currency::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "class_", make_descriptor(Currency::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "wrapfn_", make_descriptor(t_Currency::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Currency::initializeClass, 1)))
        return NULL;
      return t_Currency::wrap_Object(Currency(((t_Currency *) arg)->object.this$));
    }
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Currency::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Currency::getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(result, ::java::util::PY_TYPE(Currency));
    }

    static PyObject *t_Currency_getCurrencyCode(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencyCode());
      return j2p(result);
    }

    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
        {
          ::java::util::Locale a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_Currency_getNumericCode(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getNumericCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNumericCodeAsString());
      return j2p(result);
    }

    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSymbol());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getSymbol(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getSymbol", args);
      return NULL;
    }

    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Currency), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyCode());
      return j2p(value);
    }

    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getNumericCode());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumericCodeAsString());
      return j2p(value);
    }

    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSymbol());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/Locale$LanguageRange.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$LanguageRange::class$ = NULL;
    jmethodID *Locale$LanguageRange::mids$ = NULL;
    bool Locale$LanguageRange::live$ = false;
    jdouble Locale$LanguageRange::MAX_WEIGHT = (jdouble) 0;
    jdouble Locale$LanguageRange::MIN_WEIGHT = (jdouble) 0;

    jclass Locale$LanguageRange::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$LanguageRange");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c6843ef8200b1ede] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getRange_3cffd47377eca18a] = env->getMethodID(cls, "getRange", "()Ljava/lang/String;");
        mids$[mid_getWeight_557b8123390d8d0c] = env->getMethodID(cls, "getWeight", "()D");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_mapEquivalents_3670b1f1c9ac257e] = env->getStaticMethodID(cls, "mapEquivalents", "(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_parse_112f9b169ddc4fbe] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_parse_50e9e3e483416b46] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/List;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        MAX_WEIGHT = env->getStaticDoubleField(cls, "MAX_WEIGHT");
        MIN_WEIGHT = env->getStaticDoubleField(cls, "MIN_WEIGHT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    Locale$LanguageRange::Locale$LanguageRange(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6843ef8200b1ede, a0.this$, a1)) {}

    jboolean Locale$LanguageRange::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::String Locale$LanguageRange::getRange() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRange_3cffd47377eca18a]));
    }

    jdouble Locale$LanguageRange::getWeight() const
    {
      return env->callDoubleMethod(this$, mids$[mid_getWeight_557b8123390d8d0c]);
    }

    jint Locale$LanguageRange::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    ::java::util::List Locale$LanguageRange::mapEquivalents(const ::java::util::List & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_mapEquivalents_3670b1f1c9ac257e], a0.this$, a1.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_112f9b169ddc4fbe], a0.this$));
    }

    ::java::util::List Locale$LanguageRange::parse(const ::java::lang::String & a0, const ::java::util::Map & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_parse_50e9e3e483416b46], a0.this$, a1.this$));
    }

    ::java::lang::String Locale$LanguageRange::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$LanguageRange_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$LanguageRange_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale$LanguageRange_init_(t_Locale$LanguageRange *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale$LanguageRange_equals(t_Locale$LanguageRange *self, PyObject *args);
    static PyObject *t_Locale$LanguageRange_getRange(t_Locale$LanguageRange *self);
    static PyObject *t_Locale$LanguageRange_getWeight(t_Locale$LanguageRange *self);
    static PyObject *t_Locale$LanguageRange_hashCode(t_Locale$LanguageRange *self, PyObject *args);
    static PyObject *t_Locale$LanguageRange_mapEquivalents(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$LanguageRange_parse(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$LanguageRange_toString(t_Locale$LanguageRange *self, PyObject *args);
    static PyObject *t_Locale$LanguageRange_get__range(t_Locale$LanguageRange *self, void *data);
    static PyObject *t_Locale$LanguageRange_get__weight(t_Locale$LanguageRange *self, void *data);
    static PyGetSetDef t_Locale$LanguageRange__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$LanguageRange, range),
      DECLARE_GET_FIELD(t_Locale$LanguageRange, weight),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$LanguageRange__methods_[] = {
      DECLARE_METHOD(t_Locale$LanguageRange, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, getRange, METH_NOARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, getWeight, METH_NOARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale$LanguageRange, mapEquivalents, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, parse, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$LanguageRange, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$LanguageRange)[] = {
      { Py_tp_methods, t_Locale$LanguageRange__methods_ },
      { Py_tp_init, (void *) t_Locale$LanguageRange_init_ },
      { Py_tp_getset, t_Locale$LanguageRange__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$LanguageRange)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale$LanguageRange, t_Locale$LanguageRange, Locale$LanguageRange);

    void t_Locale$LanguageRange::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$LanguageRange), &PY_TYPE_DEF(Locale$LanguageRange), module, "Locale$LanguageRange", 0);
    }

    void t_Locale$LanguageRange::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "class_", make_descriptor(Locale$LanguageRange::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "wrapfn_", make_descriptor(t_Locale$LanguageRange::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$LanguageRange::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "MAX_WEIGHT", make_descriptor(Locale$LanguageRange::MAX_WEIGHT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$LanguageRange), "MIN_WEIGHT", make_descriptor(Locale$LanguageRange::MIN_WEIGHT));
    }

    static PyObject *t_Locale$LanguageRange_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$LanguageRange::initializeClass, 1)))
        return NULL;
      return t_Locale$LanguageRange::wrap_Object(Locale$LanguageRange(((t_Locale$LanguageRange *) arg)->object.this$));
    }
    static PyObject *t_Locale$LanguageRange_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$LanguageRange::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale$LanguageRange_init_(t_Locale$LanguageRange *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale$LanguageRange object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale$LanguageRange(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          Locale$LanguageRange object((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            INT_CALL(object = Locale$LanguageRange(a0, a1));
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

    static PyObject *t_Locale$LanguageRange_equals(t_Locale$LanguageRange *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale$LanguageRange), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale$LanguageRange_getRange(t_Locale$LanguageRange *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getRange());
      return j2p(result);
    }

    static PyObject *t_Locale$LanguageRange_getWeight(t_Locale$LanguageRange *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.getWeight());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_Locale$LanguageRange_hashCode(t_Locale$LanguageRange *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale$LanguageRange), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale$LanguageRange_mapEquivalents(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale$LanguageRange::mapEquivalents(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale$LanguageRange));
      }

      PyErr_SetArgsError(type, "mapEquivalents", args);
      return NULL;
    }

    static PyObject *t_Locale$LanguageRange_parse(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::Locale$LanguageRange::parse(a0));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale$LanguageRange));
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "sK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale$LanguageRange::parse(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale$LanguageRange));
          }
        }
      }

      PyErr_SetArgsError(type, "parse", args);
      return NULL;
    }

    static PyObject *t_Locale$LanguageRange_toString(t_Locale$LanguageRange *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale$LanguageRange), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale$LanguageRange_get__range(t_Locale$LanguageRange *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getRange());
      return j2p(value);
    }

    static PyObject *t_Locale$LanguageRange_get__weight(t_Locale$LanguageRange *self, void *data)
    {
      jdouble value;
      OBJ_CALL(value = self->object.getWeight());
      return PyFloat_FromDouble((double) value);
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
        mids$[mid_validateObject_0640e6acf969ed28] = env->getMethodID(cls, "validateObject", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectInputValidation::validateObject() const
    {
      env->callVoidMethod(this$, mids$[mid_validateObject_0640e6acf969ed28]);
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
#include "java/util/SortedSet.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *SortedSet::class$ = NULL;
    jmethodID *SortedSet::mids$ = NULL;
    bool SortedSet::live$ = false;

    jclass SortedSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/SortedSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_comparator_b0b551d4a54c7150] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
        mids$[mid_first_e661fe3ba2fafb22] = env->getMethodID(cls, "first", "()Ljava/lang/Object;");
        mids$[mid_headSet_3ca4ace183d6efe9] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_last_e661fe3ba2fafb22] = env->getMethodID(cls, "last", "()Ljava/lang/Object;");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_subSet_ba202d431ff51666] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_3ca4ace183d6efe9] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Comparator SortedSet::comparator() const
    {
      return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_b0b551d4a54c7150]));
    }

    ::java::lang::Object SortedSet::first() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_first_e661fe3ba2fafb22]));
    }

    SortedSet SortedSet::headSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_3ca4ace183d6efe9], a0.this$));
    }

    ::java::lang::Object SortedSet::last() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_last_e661fe3ba2fafb22]));
    }

    ::java::util::Spliterator SortedSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }

    SortedSet SortedSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_ba202d431ff51666], a0.this$, a1.this$));
    }

    SortedSet SortedSet::tailSet(const ::java::lang::Object & a0) const
    {
      return SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_3ca4ace183d6efe9], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_comparator(t_SortedSet *self);
    static PyObject *t_SortedSet_first(t_SortedSet *self);
    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_last(t_SortedSet *self);
    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args);
    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg);
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data);
    static PyGetSetDef t_SortedSet__fields_[] = {
      DECLARE_GET_FIELD(t_SortedSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SortedSet__methods_[] = {
      DECLARE_METHOD(t_SortedSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SortedSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, comparator, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, first, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, headSet, METH_O),
      DECLARE_METHOD(t_SortedSet, last, METH_NOARGS),
      DECLARE_METHOD(t_SortedSet, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_SortedSet, tailSet, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SortedSet)[] = {
      { Py_tp_methods, t_SortedSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_SortedSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SortedSet)[] = {
      &PY_TYPE_DEF(::java::util::Set),
      NULL
    };

    DEFINE_TYPE(SortedSet, t_SortedSet, SortedSet);
    PyObject *t_SortedSet::wrap_Object(const SortedSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_SortedSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_SortedSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_SortedSet *self = (t_SortedSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_SortedSet::install(PyObject *module)
    {
      installType(&PY_TYPE(SortedSet), &PY_TYPE_DEF(SortedSet), module, "SortedSet", 0);
    }

    void t_SortedSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "class_", make_descriptor(SortedSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "wrapfn_", make_descriptor(t_SortedSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SortedSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SortedSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SortedSet::initializeClass, 1)))
        return NULL;
      return t_SortedSet::wrap_Object(SortedSet(((t_SortedSet *) arg)->object.this$));
    }
    static PyObject *t_SortedSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SortedSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_SortedSet_of_(t_SortedSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_SortedSet_comparator(t_SortedSet *self)
    {
      ::java::util::Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.comparator());
      return ::java::util::t_Comparator::wrap_Object(result);
    }

    static PyObject *t_SortedSet_first(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.first());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_headSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.headSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "headSet", arg);
      return NULL;
    }

    static PyObject *t_SortedSet_last(t_SortedSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.last());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SortedSet_spliterator(t_SortedSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(SortedSet), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_SortedSet_subSet(t_SortedSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSet(a0, a1));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subSet", args);
      return NULL;
    }

    static PyObject *t_SortedSet_tailSet(t_SortedSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      SortedSet result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.tailSet(a0));
        return t_SortedSet::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "tailSet", arg);
      return NULL;
    }
    static PyObject *t_SortedSet_get__parameters_(t_SortedSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$IsoCountryCode::class$ = NULL;
    jmethodID *Locale$IsoCountryCode::mids$ = NULL;
    bool Locale$IsoCountryCode::live$ = false;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART1_ALPHA2 = NULL;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART1_ALPHA3 = NULL;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART3 = NULL;

    jclass Locale$IsoCountryCode::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$IsoCountryCode");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_b281c9ce85f8dc36] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;");
        mids$[mid_values_ed6a5adb3fe94a8d] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$IsoCountryCode;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        PART1_ALPHA2 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART1_ALPHA2", "Ljava/util/Locale$IsoCountryCode;"));
        PART1_ALPHA3 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART1_ALPHA3", "Ljava/util/Locale$IsoCountryCode;"));
        PART3 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART3", "Ljava/util/Locale$IsoCountryCode;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$IsoCountryCode Locale$IsoCountryCode::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$IsoCountryCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b281c9ce85f8dc36], a0.this$));
    }

    JArray< Locale$IsoCountryCode > Locale$IsoCountryCode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$IsoCountryCode >(env->callStaticObjectMethod(cls, mids$[mid_values_ed6a5adb3fe94a8d]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$IsoCountryCode_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$IsoCountryCode_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$IsoCountryCode_of_(t_Locale$IsoCountryCode *self, PyObject *args);
    static PyObject *t_Locale$IsoCountryCode_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$IsoCountryCode_values(PyTypeObject *type);
    static PyObject *t_Locale$IsoCountryCode_get__parameters_(t_Locale$IsoCountryCode *self, void *data);
    static PyGetSetDef t_Locale$IsoCountryCode__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$IsoCountryCode, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$IsoCountryCode__methods_[] = {
      DECLARE_METHOD(t_Locale$IsoCountryCode, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$IsoCountryCode)[] = {
      { Py_tp_methods, t_Locale$IsoCountryCode__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$IsoCountryCode__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$IsoCountryCode)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$IsoCountryCode, t_Locale$IsoCountryCode, Locale$IsoCountryCode);
    PyObject *t_Locale$IsoCountryCode::wrap_Object(const Locale$IsoCountryCode& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$IsoCountryCode::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$IsoCountryCode *self = (t_Locale$IsoCountryCode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$IsoCountryCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$IsoCountryCode::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$IsoCountryCode *self = (t_Locale$IsoCountryCode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$IsoCountryCode::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$IsoCountryCode), &PY_TYPE_DEF(Locale$IsoCountryCode), module, "Locale$IsoCountryCode", 0);
    }

    void t_Locale$IsoCountryCode::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "class_", make_descriptor(Locale$IsoCountryCode::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "wrapfn_", make_descriptor(t_Locale$IsoCountryCode::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$IsoCountryCode::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART1_ALPHA2", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART1_ALPHA2)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART1_ALPHA3", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART1_ALPHA3)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART3", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART3)));
    }

    static PyObject *t_Locale$IsoCountryCode_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$IsoCountryCode::initializeClass, 1)))
        return NULL;
      return t_Locale$IsoCountryCode::wrap_Object(Locale$IsoCountryCode(((t_Locale$IsoCountryCode *) arg)->object.this$));
    }
    static PyObject *t_Locale$IsoCountryCode_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$IsoCountryCode::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$IsoCountryCode_of_(t_Locale$IsoCountryCode *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$IsoCountryCode_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$IsoCountryCode result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$IsoCountryCode::valueOf(a0));
        return t_Locale$IsoCountryCode::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$IsoCountryCode_values(PyTypeObject *type)
    {
      JArray< Locale$IsoCountryCode > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$IsoCountryCode::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$IsoCountryCode::wrap_jobject);
    }
    static PyObject *t_Locale$IsoCountryCode_get__parameters_(t_Locale$IsoCountryCode *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Serializable::class$ = NULL;
    jmethodID *Serializable::mids$ = NULL;
    bool Serializable::live$ = false;

    jclass Serializable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Serializable");

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
  namespace io {
    static PyObject *t_Serializable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Serializable_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Serializable__methods_[] = {
      DECLARE_METHOD(t_Serializable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Serializable, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Serializable)[] = {
      { Py_tp_methods, t_Serializable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Serializable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Serializable, t_Serializable, Serializable);

    void t_Serializable::install(PyObject *module)
    {
      installType(&PY_TYPE(Serializable), &PY_TYPE_DEF(Serializable), module, "Serializable", 0);
    }

    void t_Serializable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "class_", make_descriptor(Serializable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "wrapfn_", make_descriptor(t_Serializable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Serializable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Serializable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Serializable::initializeClass, 1)))
        return NULL;
      return t_Serializable::wrap_Object(Serializable(((t_Serializable *) arg)->object.this$));
    }
    static PyObject *t_Serializable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Serializable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/Class.h"
#include "java/lang/Exception.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *AutoCloseable::class$ = NULL;
    jmethodID *AutoCloseable::mids$ = NULL;
    bool AutoCloseable::live$ = false;

    jclass AutoCloseable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/AutoCloseable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void AutoCloseable::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_AutoCloseable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AutoCloseable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AutoCloseable_close(t_AutoCloseable *self);

    static PyMethodDef t_AutoCloseable__methods_[] = {
      DECLARE_METHOD(t_AutoCloseable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AutoCloseable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AutoCloseable, close, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AutoCloseable)[] = {
      { Py_tp_methods, t_AutoCloseable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AutoCloseable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AutoCloseable, t_AutoCloseable, AutoCloseable);

    void t_AutoCloseable::install(PyObject *module)
    {
      installType(&PY_TYPE(AutoCloseable), &PY_TYPE_DEF(AutoCloseable), module, "AutoCloseable", 0);
    }

    void t_AutoCloseable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "class_", make_descriptor(AutoCloseable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "wrapfn_", make_descriptor(t_AutoCloseable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AutoCloseable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AutoCloseable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AutoCloseable::initializeClass, 1)))
        return NULL;
      return t_AutoCloseable::wrap_Object(AutoCloseable(((t_AutoCloseable *) arg)->object.this$));
    }
    static PyObject *t_AutoCloseable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AutoCloseable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AutoCloseable_close(t_AutoCloseable *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
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
        mids$[mid_forEachRemaining_fda350dd3513069c] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V");
        mids$[mid_next_6cbae79808369757] = env->getMethodID(cls, "next", "()Ljava/lang/Double;");
        mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void PrimitiveIterator$OfDouble::forEachRemaining(const ::java::util::function::DoubleConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_fda350dd3513069c], a0.this$);
    }

    ::java::lang::Double PrimitiveIterator$OfDouble::next() const
    {
      return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_next_6cbae79808369757]));
    }

    jdouble PrimitiveIterator$OfDouble::nextDouble() const
    {
      return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
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
#include "java/io/ObjectOutput.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
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
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_write_d759c70c6670fd89] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeObject_009757f2c0fd9090] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void ObjectOutput::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void ObjectOutput::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d759c70c6670fd89], a0.this$);
    }

    void ObjectOutput::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void ObjectOutput::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }

    void ObjectOutput::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_009757f2c0fd9090], a0.this$);
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
#include "java/util/Locale$FilteringMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/util/Locale$FilteringMode.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$FilteringMode::class$ = NULL;
    jmethodID *Locale$FilteringMode::mids$ = NULL;
    bool Locale$FilteringMode::live$ = false;
    Locale$FilteringMode *Locale$FilteringMode::AUTOSELECT_FILTERING = NULL;
    Locale$FilteringMode *Locale$FilteringMode::EXTENDED_FILTERING = NULL;
    Locale$FilteringMode *Locale$FilteringMode::IGNORE_EXTENDED_RANGES = NULL;
    Locale$FilteringMode *Locale$FilteringMode::MAP_EXTENDED_RANGES = NULL;
    Locale$FilteringMode *Locale$FilteringMode::REJECT_EXTENDED_RANGES = NULL;

    jclass Locale$FilteringMode::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$FilteringMode");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_ec4517dd93c504ca] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;");
        mids$[mid_values_a8d7c2de5d24f592] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$FilteringMode;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        AUTOSELECT_FILTERING = new Locale$FilteringMode(env->getStaticObjectField(cls, "AUTOSELECT_FILTERING", "Ljava/util/Locale$FilteringMode;"));
        EXTENDED_FILTERING = new Locale$FilteringMode(env->getStaticObjectField(cls, "EXTENDED_FILTERING", "Ljava/util/Locale$FilteringMode;"));
        IGNORE_EXTENDED_RANGES = new Locale$FilteringMode(env->getStaticObjectField(cls, "IGNORE_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;"));
        MAP_EXTENDED_RANGES = new Locale$FilteringMode(env->getStaticObjectField(cls, "MAP_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;"));
        REJECT_EXTENDED_RANGES = new Locale$FilteringMode(env->getStaticObjectField(cls, "REJECT_EXTENDED_RANGES", "Ljava/util/Locale$FilteringMode;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$FilteringMode Locale$FilteringMode::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$FilteringMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ec4517dd93c504ca], a0.this$));
    }

    JArray< Locale$FilteringMode > Locale$FilteringMode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$FilteringMode >(env->callStaticObjectMethod(cls, mids$[mid_values_a8d7c2de5d24f592]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$FilteringMode_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$FilteringMode_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$FilteringMode_of_(t_Locale$FilteringMode *self, PyObject *args);
    static PyObject *t_Locale$FilteringMode_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$FilteringMode_values(PyTypeObject *type);
    static PyObject *t_Locale$FilteringMode_get__parameters_(t_Locale$FilteringMode *self, void *data);
    static PyGetSetDef t_Locale$FilteringMode__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$FilteringMode, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$FilteringMode__methods_[] = {
      DECLARE_METHOD(t_Locale$FilteringMode, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$FilteringMode, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$FilteringMode, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$FilteringMode, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$FilteringMode, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$FilteringMode)[] = {
      { Py_tp_methods, t_Locale$FilteringMode__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$FilteringMode__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$FilteringMode)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$FilteringMode, t_Locale$FilteringMode, Locale$FilteringMode);
    PyObject *t_Locale$FilteringMode::wrap_Object(const Locale$FilteringMode& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$FilteringMode::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$FilteringMode *self = (t_Locale$FilteringMode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$FilteringMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$FilteringMode::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$FilteringMode *self = (t_Locale$FilteringMode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$FilteringMode::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$FilteringMode), &PY_TYPE_DEF(Locale$FilteringMode), module, "Locale$FilteringMode", 0);
    }

    void t_Locale$FilteringMode::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "class_", make_descriptor(Locale$FilteringMode::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "wrapfn_", make_descriptor(t_Locale$FilteringMode::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$FilteringMode::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "AUTOSELECT_FILTERING", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::AUTOSELECT_FILTERING)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "EXTENDED_FILTERING", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::EXTENDED_FILTERING)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "IGNORE_EXTENDED_RANGES", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::IGNORE_EXTENDED_RANGES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "MAP_EXTENDED_RANGES", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::MAP_EXTENDED_RANGES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$FilteringMode), "REJECT_EXTENDED_RANGES", make_descriptor(t_Locale$FilteringMode::wrap_Object(*Locale$FilteringMode::REJECT_EXTENDED_RANGES)));
    }

    static PyObject *t_Locale$FilteringMode_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$FilteringMode::initializeClass, 1)))
        return NULL;
      return t_Locale$FilteringMode::wrap_Object(Locale$FilteringMode(((t_Locale$FilteringMode *) arg)->object.this$));
    }
    static PyObject *t_Locale$FilteringMode_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$FilteringMode::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$FilteringMode_of_(t_Locale$FilteringMode *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$FilteringMode_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$FilteringMode result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$FilteringMode::valueOf(a0));
        return t_Locale$FilteringMode::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$FilteringMode_values(PyTypeObject *type)
    {
      JArray< Locale$FilteringMode > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$FilteringMode::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$FilteringMode::wrap_jobject);
    }
    static PyObject *t_Locale$FilteringMode_get__parameters_(t_Locale$FilteringMode *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
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
        mids$[mid_forEachRemaining_a56bae4b5f62e5a5] = env->getMethodID(cls, "forEachRemaining", "(Ljava/util/function/LongConsumer;)V");
        mids$[mid_tryAdvance_1d76b3f69ae99417] = env->getMethodID(cls, "tryAdvance", "(Ljava/util/function/LongConsumer;)Z");
        mids$[mid_trySplit_378e0cf6aa1248d2] = env->getMethodID(cls, "trySplit", "()Ljava/util/Spliterator$OfLong;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Spliterator$OfLong::forEachRemaining(const ::java::util::function::LongConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEachRemaining_a56bae4b5f62e5a5], a0.this$);
    }

    jboolean Spliterator$OfLong::tryAdvance(const ::java::util::function::LongConsumer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_tryAdvance_1d76b3f69ae99417], a0.this$);
    }

    Spliterator$OfLong Spliterator$OfLong::trySplit() const
    {
      return Spliterator$OfLong(env->callObjectMethod(this$, mids$[mid_trySplit_378e0cf6aa1248d2]));
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
#include "java/lang/StringBuffer.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StringBuffer::class$ = NULL;
    jmethodID *StringBuffer::mids$ = NULL;
    bool StringBuffer::live$ = false;

    jclass StringBuffer::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StringBuffer");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_01ce980d49cb2b81] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_884cc2a03611cb8e] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;");
        mids$[mid_append_8ae777a43862da8d] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuffer;");
        mids$[mid_append_2f0b0e3bc024adda] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_append_9eea0c4c917f2124] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuffer;");
        mids$[mid_append_cb2315bcbf608d35] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuffer;");
        mids$[mid_append_39b17f1c7d7004eb] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuffer;");
        mids$[mid_append_7bfa49bdcf0ccc78] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuffer;");
        mids$[mid_append_4df8ab8c549ce9bf] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_append_e3ac1af7ce0393a9] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_append_3c0302142c625b21] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_append_d6d93e2cc52ed0b8] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuffer;");
        mids$[mid_append_f0e791f399dadfc6] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuffer;");
        mids$[mid_append_86fea91c752fca9f] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_appendCodePoint_4df8ab8c549ce9bf] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_capacity_412668abc8d889e9] = env->getMethodID(cls, "capacity", "()I");
        mids$[mid_charAt_4affd00329d5d4cf] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_0092017e99012694] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_0092017e99012694] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_5625cf3db98dadc1] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_656f80e312790297] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuffer;)I");
        mids$[mid_delete_ba962b872ad2ee19] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_deleteCharAt_4df8ab8c549ce9bf] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuffer;");
        mids$[mid_ensureCapacity_a3da1a935cb37f7b] = env->getMethodID(cls, "ensureCapacity", "(I)V");
        mids$[mid_getChars_def23ac70d649d11] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_indexOf_a6602ba493f77974] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_8d4819c2e2817add] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuffer;");
        mids$[mid_insert_4cb21c33cddb24ac] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_ce40bb490e8b82ba] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_4a5c55d5d82c503f] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuffer;");
        mids$[mid_insert_0665758adca21f6b] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuffer;");
        mids$[mid_insert_9757033019944ea7] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuffer;");
        mids$[mid_insert_ba962b872ad2ee19] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuffer;");
        mids$[mid_insert_a2526e36d1b3af89] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_28685d51c7a292e5] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;");
        mids$[mid_insert_907387537ae85b1c] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuffer;");
        mids$[mid_insert_b32211a1f9aba15c] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuffer;");
        mids$[mid_insert_2f6be358e3e0e1bf] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;");
        mids$[mid_lastIndexOf_a6602ba493f77974] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_length_412668abc8d889e9] = env->getMethodID(cls, "length", "()I");
        mids$[mid_offsetByCodePoints_5625cf3db98dadc1] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_replace_4080ae73b5538c67] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;");
        mids$[mid_reverse_94bc674fec0d7bbe] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuffer;");
        mids$[mid_setCharAt_e8edb89802967796] = env->getMethodID(cls, "setCharAt", "(IC)V");
        mids$[mid_setLength_a3da1a935cb37f7b] = env->getMethodID(cls, "setLength", "(I)V");
        mids$[mid_subSequence_581d824833fd6c72] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_0f10d4a5e06f61c0] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_637f0334ff6ee92d] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_trimToSize_0640e6acf969ed28] = env->getMethodID(cls, "trimToSize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuffer::StringBuffer() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    StringBuffer::StringBuffer(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    StringBuffer::StringBuffer(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    StringBuffer::StringBuffer(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_01ce980d49cb2b81, a0.this$)) {}

    StringBuffer StringBuffer::append(const StringBuffer & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_884cc2a03611cb8e], a0.this$));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_8ae777a43862da8d], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::String & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_2f0b0e3bc024adda], a0.this$));
    }

    StringBuffer StringBuffer::append(jboolean a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_9eea0c4c917f2124], a0));
    }

    StringBuffer StringBuffer::append(jchar a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_cb2315bcbf608d35], a0));
    }

    StringBuffer StringBuffer::append(jdouble a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_39b17f1c7d7004eb], a0));
    }

    StringBuffer StringBuffer::append(jfloat a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_7bfa49bdcf0ccc78], a0));
    }

    StringBuffer StringBuffer::append(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_4df8ab8c549ce9bf], a0));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_e3ac1af7ce0393a9], a0.this$));
    }

    StringBuffer StringBuffer::append(const ::java::lang::Object & a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_3c0302142c625b21], a0.this$));
    }

    StringBuffer StringBuffer::append(jlong a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_d6d93e2cc52ed0b8], a0));
    }

    StringBuffer StringBuffer::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_f0e791f399dadfc6], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_append_86fea91c752fca9f], a0.this$, a1, a2));
    }

    StringBuffer StringBuffer::appendCodePoint(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_appendCodePoint_4df8ab8c549ce9bf], a0));
    }

    jint StringBuffer::capacity() const
    {
      return env->callIntMethod(this$, mids$[mid_capacity_412668abc8d889e9]);
    }

    jchar StringBuffer::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_4affd00329d5d4cf], a0);
    }

    jint StringBuffer::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_0092017e99012694], a0);
    }

    jint StringBuffer::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_0092017e99012694], a0);
    }

    jint StringBuffer::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_5625cf3db98dadc1], a0, a1);
    }

    jint StringBuffer::compareTo(const StringBuffer & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_656f80e312790297], a0.this$);
    }

    StringBuffer StringBuffer::delete$(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_delete_ba962b872ad2ee19], a0, a1));
    }

    StringBuffer StringBuffer::deleteCharAt(jint a0) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_deleteCharAt_4df8ab8c549ce9bf], a0));
    }

    void StringBuffer::ensureCapacity(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_ensureCapacity_a3da1a935cb37f7b], a0);
    }

    void StringBuffer::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_def23ac70d649d11], a0, a1, a2.this$, a3);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_a6602ba493f77974], a0.this$);
    }

    jint StringBuffer::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_8d4819c2e2817add], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_4cb21c33cddb24ac], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jboolean a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_ce40bb490e8b82ba], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jchar a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_4a5c55d5d82c503f], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jdouble a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_0665758adca21f6b], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jfloat a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_9757033019944ea7], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, jint a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_ba962b872ad2ee19], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_a2526e36d1b3af89], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_28685d51c7a292e5], a0, a1.this$));
    }

    StringBuffer StringBuffer::insert(jint a0, jlong a1) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_907387537ae85b1c], a0, a1));
    }

    StringBuffer StringBuffer::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_b32211a1f9aba15c], a0, a1.this$, a2, a3));
    }

    StringBuffer StringBuffer::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_insert_2f6be358e3e0e1bf], a0, a1.this$, a2, a3));
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_a6602ba493f77974], a0.this$);
    }

    jint StringBuffer::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    jint StringBuffer::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_412668abc8d889e9]);
    }

    jint StringBuffer::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_5625cf3db98dadc1], a0, a1);
    }

    StringBuffer StringBuffer::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_replace_4080ae73b5538c67], a0, a1, a2.this$));
    }

    StringBuffer StringBuffer::reverse() const
    {
      return StringBuffer(env->callObjectMethod(this$, mids$[mid_reverse_94bc674fec0d7bbe]));
    }

    void StringBuffer::setCharAt(jint a0, jchar a1) const
    {
      env->callVoidMethod(this$, mids$[mid_setCharAt_e8edb89802967796], a0, a1);
    }

    void StringBuffer::setLength(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setLength_a3da1a935cb37f7b], a0);
    }

    ::java::lang::CharSequence StringBuffer::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_581d824833fd6c72], a0, a1));
    }

    ::java::lang::String StringBuffer::substring(jint a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_0f10d4a5e06f61c0], a0));
    }

    ::java::lang::String StringBuffer::substring(jint a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_substring_637f0334ff6ee92d], a0, a1));
    }

    ::java::lang::String StringBuffer::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }

    void StringBuffer::trimToSize() const
    {
      env->callVoidMethod(this$, mids$[mid_trimToSize_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StringBuffer_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringBuffer_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringBuffer_init_(t_StringBuffer *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringBuffer_append(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_appendCodePoint(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_capacity(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_charAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_codePointAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_codePointBefore(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_codePointCount(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_compareTo(t_StringBuffer *self, PyObject *arg);
    static PyObject *t_StringBuffer_delete(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_deleteCharAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_ensureCapacity(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_getChars(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_indexOf(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_insert(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_lastIndexOf(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_length(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_offsetByCodePoints(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_replace(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_reverse(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_setCharAt(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_setLength(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_subSequence(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_substring(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_toString(t_StringBuffer *self, PyObject *args);
    static PyObject *t_StringBuffer_trimToSize(t_StringBuffer *self, PyObject *args);

    static PyMethodDef t_StringBuffer__methods_[] = {
      DECLARE_METHOD(t_StringBuffer, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuffer, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuffer, append, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, appendCodePoint, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, capacity, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, charAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, codePointAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, codePointBefore, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, compareTo, METH_O),
      DECLARE_METHOD(t_StringBuffer, delete, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, deleteCharAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, ensureCapacity, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, getChars, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, insert, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, length, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, replace, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, reverse, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, setCharAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, setLength, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, substring, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, toString, METH_VARARGS),
      DECLARE_METHOD(t_StringBuffer, trimToSize, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringBuffer)[] = {
      { Py_tp_methods, t_StringBuffer__methods_ },
      { Py_tp_init, (void *) t_StringBuffer_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringBuffer)[] = {
      &PY_TYPE_DEF(::java::lang::AbstractStringBuilder),
      NULL
    };

    DEFINE_TYPE(StringBuffer, t_StringBuffer, StringBuffer);

    void t_StringBuffer::install(PyObject *module)
    {
      installType(&PY_TYPE(StringBuffer), &PY_TYPE_DEF(StringBuffer), module, "StringBuffer", 0);
    }

    void t_StringBuffer::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuffer), "class_", make_descriptor(StringBuffer::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuffer), "wrapfn_", make_descriptor(t_StringBuffer::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuffer), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringBuffer_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringBuffer::initializeClass, 1)))
        return NULL;
      return t_StringBuffer::wrap_Object(StringBuffer(((t_StringBuffer *) arg)->object.this$));
    }
    static PyObject *t_StringBuffer_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringBuffer::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringBuffer_init_(t_StringBuffer *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringBuffer object((jobject) NULL);

          INT_CALL(object = StringBuffer());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuffer object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = StringBuffer(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          StringBuffer object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringBuffer(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuffer object((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            INT_CALL(object = StringBuffer(a0));
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

    static PyObject *t_StringBuffer_append(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          StringBuffer a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "k", StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jchar a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringBuffer_appendCodePoint(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.appendCodePoint(a0));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "appendCodePoint", args, 2);
    }

    static PyObject *t_StringBuffer_capacity(t_StringBuffer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.capacity());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "capacity", args, 2);
    }

    static PyObject *t_StringBuffer_charAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jchar result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "charAt", args, 2);
    }

    static PyObject *t_StringBuffer_codePointAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "codePointAt", args, 2);
    }

    static PyObject *t_StringBuffer_codePointBefore(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint result;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "codePointBefore", args, 2);
    }

    static PyObject *t_StringBuffer_codePointCount(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "codePointCount", args, 2);
    }

    static PyObject *t_StringBuffer_compareTo(t_StringBuffer *self, PyObject *arg)
    {
      StringBuffer a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", StringBuffer::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_StringBuffer_delete(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.delete$(a0, a1));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "delete", args, 2);
    }

    static PyObject *t_StringBuffer_deleteCharAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.deleteCharAt(a0));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "deleteCharAt", args, 2);
    }

    static PyObject *t_StringBuffer_ensureCapacity(t_StringBuffer *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.ensureCapacity(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "ensureCapacity", args, 2);
    }

    static PyObject *t_StringBuffer_getChars(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "getChars", args, 2);
    }

    static PyObject *t_StringBuffer_indexOf(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
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
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_StringBuffer_insert(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "I[C", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::String a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Is", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jboolean a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jchar a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jdouble a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jfloat a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jint a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IO", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Io", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          jlong a1;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "I[CII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "IOII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "insert", args, 2);
    }

    static PyObject *t_StringBuffer_lastIndexOf(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
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
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_StringBuffer_length(t_StringBuffer *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.length());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "length", args, 2);
    }

    static PyObject *t_StringBuffer_offsetByCodePoints(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "offsetByCodePoints", args, 2);
    }

    static PyObject *t_StringBuffer_replace(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::String a2((jobject) NULL);
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, "IIs", &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.replace(a0, a1, a2));
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_StringBuffer_reverse(t_StringBuffer *self, PyObject *args)
    {
      StringBuffer result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reverse());
        return t_StringBuffer::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "reverse", args, 2);
    }

    static PyObject *t_StringBuffer_setCharAt(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jchar a1;

      if (!parseArgs(args, "IC", &a0, &a1))
      {
        OBJ_CALL(self->object.setCharAt(a0, a1));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "setCharAt", args, 2);
    }

    static PyObject *t_StringBuffer_setLength(t_StringBuffer *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setLength(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "setLength", args, 2);
    }

    static PyObject *t_StringBuffer_subSequence(t_StringBuffer *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "subSequence", args, 2);
    }

    static PyObject *t_StringBuffer_substring(t_StringBuffer *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
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
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "substring", args, 2);
    }

    static PyObject *t_StringBuffer_toString(t_StringBuffer *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_StringBuffer_trimToSize(t_StringBuffer *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.trimToSize());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringBuffer), (PyObject *) self, "trimToSize", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Comparator.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Comparator::class$ = NULL;
    jmethodID *Comparator::mids$ = NULL;
    bool Comparator::live$ = false;

    jclass Comparator::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Comparator");

        mids$ = new jmethodID[max_mid];
        mids$[mid_compare_bad7088d23b59a37] = env->getMethodID(cls, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_naturalOrder_b0b551d4a54c7150] = env->getStaticMethodID(cls, "naturalOrder", "()Ljava/util/Comparator;");
        mids$[mid_nullsFirst_ed7a25767f280242] = env->getStaticMethodID(cls, "nullsFirst", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_nullsLast_ed7a25767f280242] = env->getStaticMethodID(cls, "nullsLast", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_reverseOrder_b0b551d4a54c7150] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reversed_b0b551d4a54c7150] = env->getMethodID(cls, "reversed", "()Ljava/util/Comparator;");
        mids$[mid_thenComparing_ed7a25767f280242] = env->getMethodID(cls, "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jint Comparator::compare(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callIntMethod(this$, mids$[mid_compare_bad7088d23b59a37], a0.this$, a1.this$);
    }

    jboolean Comparator::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    Comparator Comparator::naturalOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_naturalOrder_b0b551d4a54c7150]));
    }

    Comparator Comparator::nullsFirst(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsFirst_ed7a25767f280242], a0.this$));
    }

    Comparator Comparator::nullsLast(const Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_nullsLast_ed7a25767f280242], a0.this$));
    }

    Comparator Comparator::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_b0b551d4a54c7150]));
    }

    Comparator Comparator::reversed() const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_reversed_b0b551d4a54c7150]));
    }

    Comparator Comparator::thenComparing(const Comparator & a0) const
    {
      return Comparator(env->callObjectMethod(this$, mids$[mid_thenComparing_ed7a25767f280242], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Comparator_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_of_(t_Comparator *self, PyObject *args);
    static PyObject *t_Comparator_compare(t_Comparator *self, PyObject *args);
    static PyObject *t_Comparator_equals(t_Comparator *self, PyObject *args);
    static PyObject *t_Comparator_naturalOrder(PyTypeObject *type);
    static PyObject *t_Comparator_nullsFirst(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_nullsLast(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Comparator_reverseOrder(PyTypeObject *type);
    static PyObject *t_Comparator_reversed(t_Comparator *self);
    static PyObject *t_Comparator_thenComparing(t_Comparator *self, PyObject *arg);
    static PyObject *t_Comparator_get__parameters_(t_Comparator *self, void *data);
    static PyGetSetDef t_Comparator__fields_[] = {
      DECLARE_GET_FIELD(t_Comparator, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Comparator__methods_[] = {
      DECLARE_METHOD(t_Comparator, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, of_, METH_VARARGS),
      DECLARE_METHOD(t_Comparator, compare, METH_VARARGS),
      DECLARE_METHOD(t_Comparator, equals, METH_VARARGS),
      DECLARE_METHOD(t_Comparator, naturalOrder, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Comparator, nullsFirst, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, nullsLast, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Comparator, reverseOrder, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Comparator, reversed, METH_NOARGS),
      DECLARE_METHOD(t_Comparator, thenComparing, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Comparator)[] = {
      { Py_tp_methods, t_Comparator__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Comparator__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Comparator)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Comparator, t_Comparator, Comparator);
    PyObject *t_Comparator::wrap_Object(const Comparator& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparator::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparator *self = (t_Comparator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Comparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Comparator::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Comparator *self = (t_Comparator *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Comparator::install(PyObject *module)
    {
      installType(&PY_TYPE(Comparator), &PY_TYPE_DEF(Comparator), module, "Comparator", 0);
    }

    void t_Comparator::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparator), "class_", make_descriptor(Comparator::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparator), "wrapfn_", make_descriptor(t_Comparator::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Comparator), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Comparator_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Comparator::initializeClass, 1)))
        return NULL;
      return t_Comparator::wrap_Object(Comparator(((t_Comparator *) arg)->object.this$));
    }
    static PyObject *t_Comparator_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Comparator::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Comparator_of_(t_Comparator *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Comparator_compare(t_Comparator *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compare", args);
      return NULL;
    }

    static PyObject *t_Comparator_equals(t_Comparator *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Comparator), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Comparator_naturalOrder(PyTypeObject *type)
    {
      Comparator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Comparator::naturalOrder());
      return t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Comparator_nullsFirst(PyTypeObject *type, PyObject *arg)
    {
      Comparator a0((jobject) NULL);
      PyTypeObject **p0;
      Comparator result((jobject) NULL);

      if (!parseArg(arg, "K", Comparator::initializeClass, &a0, &p0, t_Comparator::parameters_))
      {
        OBJ_CALL(result = ::java::util::Comparator::nullsFirst(a0));
        return t_Comparator::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nullsFirst", arg);
      return NULL;
    }

    static PyObject *t_Comparator_nullsLast(PyTypeObject *type, PyObject *arg)
    {
      Comparator a0((jobject) NULL);
      PyTypeObject **p0;
      Comparator result((jobject) NULL);

      if (!parseArg(arg, "K", Comparator::initializeClass, &a0, &p0, t_Comparator::parameters_))
      {
        OBJ_CALL(result = ::java::util::Comparator::nullsLast(a0));
        return t_Comparator::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nullsLast", arg);
      return NULL;
    }

    static PyObject *t_Comparator_reverseOrder(PyTypeObject *type)
    {
      Comparator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Comparator::reverseOrder());
      return t_Comparator::wrap_Object(result);
    }

    static PyObject *t_Comparator_reversed(t_Comparator *self)
    {
      Comparator result((jobject) NULL);
      OBJ_CALL(result = self->object.reversed());
      return t_Comparator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Comparator_thenComparing(t_Comparator *self, PyObject *arg)
    {
      Comparator a0((jobject) NULL);
      PyTypeObject **p0;
      Comparator result((jobject) NULL);

      if (!parseArg(arg, "K", Comparator::initializeClass, &a0, &p0, t_Comparator::parameters_))
      {
        OBJ_CALL(result = self->object.thenComparing(a0));
        return t_Comparator::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "thenComparing", arg);
      return NULL;
    }
    static PyObject *t_Comparator_get__parameters_(t_Comparator *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
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
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NotActiveException::NotActiveException() : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    NotActiveException::NotActiveException(const ::java::lang::String & a0) : ::java::io::ObjectStreamException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
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
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *NumberFormatException::class$ = NULL;
    jmethodID *NumberFormatException::mids$ = NULL;
    bool NumberFormatException::live$ = false;

    jclass NumberFormatException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/NumberFormatException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NumberFormatException::NumberFormatException() : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    NumberFormatException::NumberFormatException(const ::java::lang::String & a0) : ::java::lang::IllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NumberFormatException__methods_[] = {
      DECLARE_METHOD(t_NumberFormatException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormatException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormatException)[] = {
      { Py_tp_methods, t_NumberFormatException__methods_ },
      { Py_tp_init, (void *) t_NumberFormatException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormatException)[] = {
      &PY_TYPE_DEF(::java::lang::IllegalArgumentException),
      NULL
    };

    DEFINE_TYPE(NumberFormatException, t_NumberFormatException, NumberFormatException);

    void t_NumberFormatException::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormatException), &PY_TYPE_DEF(NumberFormatException), module, "NumberFormatException", 0);
    }

    void t_NumberFormatException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "class_", make_descriptor(NumberFormatException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "wrapfn_", make_descriptor(t_NumberFormatException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormatException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NumberFormatException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormatException::initializeClass, 1)))
        return NULL;
      return t_NumberFormatException::wrap_Object(NumberFormatException(((t_NumberFormatException *) arg)->object.this$));
    }
    static PyObject *t_NumberFormatException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormatException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NumberFormatException_init_(t_NumberFormatException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormatException object((jobject) NULL);

          INT_CALL(object = NumberFormatException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NumberFormatException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NumberFormatException(a0));
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
#include "java/io/FileDescriptor.h"
#include "java/io/SyncFailedException.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileDescriptor::class$ = NULL;
    jmethodID *FileDescriptor::mids$ = NULL;
    bool FileDescriptor::live$ = false;
    FileDescriptor *FileDescriptor::err = NULL;
    FileDescriptor *FileDescriptor::in = NULL;
    FileDescriptor *FileDescriptor::out = NULL;

    jclass FileDescriptor::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileDescriptor");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_sync_0640e6acf969ed28] = env->getMethodID(cls, "sync", "()V");
        mids$[mid_valid_89b302893bdbe1f1] = env->getMethodID(cls, "valid", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        err = new FileDescriptor(env->getStaticObjectField(cls, "err", "Ljava/io/FileDescriptor;"));
        in = new FileDescriptor(env->getStaticObjectField(cls, "in", "Ljava/io/FileDescriptor;"));
        out = new FileDescriptor(env->getStaticObjectField(cls, "out", "Ljava/io/FileDescriptor;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileDescriptor::FileDescriptor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    void FileDescriptor::sync() const
    {
      env->callVoidMethod(this$, mids$[mid_sync_0640e6acf969ed28]);
    }

    jboolean FileDescriptor::valid() const
    {
      return env->callBooleanMethod(this$, mids$[mid_valid_89b302893bdbe1f1]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileDescriptor_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileDescriptor_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileDescriptor_init_(t_FileDescriptor *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileDescriptor_sync(t_FileDescriptor *self);
    static PyObject *t_FileDescriptor_valid(t_FileDescriptor *self);

    static PyMethodDef t_FileDescriptor__methods_[] = {
      DECLARE_METHOD(t_FileDescriptor, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileDescriptor, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileDescriptor, sync, METH_NOARGS),
      DECLARE_METHOD(t_FileDescriptor, valid, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileDescriptor)[] = {
      { Py_tp_methods, t_FileDescriptor__methods_ },
      { Py_tp_init, (void *) t_FileDescriptor_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileDescriptor)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(FileDescriptor, t_FileDescriptor, FileDescriptor);

    void t_FileDescriptor::install(PyObject *module)
    {
      installType(&PY_TYPE(FileDescriptor), &PY_TYPE_DEF(FileDescriptor), module, "FileDescriptor", 0);
    }

    void t_FileDescriptor::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "class_", make_descriptor(FileDescriptor::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "wrapfn_", make_descriptor(t_FileDescriptor::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "boxfn_", make_descriptor(boxObject));
      env->getClass(FileDescriptor::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "err", make_descriptor(t_FileDescriptor::wrap_Object(*FileDescriptor::err)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "in", make_descriptor(t_FileDescriptor::wrap_Object(*FileDescriptor::in)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileDescriptor), "out", make_descriptor(t_FileDescriptor::wrap_Object(*FileDescriptor::out)));
    }

    static PyObject *t_FileDescriptor_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileDescriptor::initializeClass, 1)))
        return NULL;
      return t_FileDescriptor::wrap_Object(FileDescriptor(((t_FileDescriptor *) arg)->object.this$));
    }
    static PyObject *t_FileDescriptor_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileDescriptor::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileDescriptor_init_(t_FileDescriptor *self, PyObject *args, PyObject *kwds)
    {
      FileDescriptor object((jobject) NULL);

      INT_CALL(object = FileDescriptor());
      self->object = object;

      return 0;
    }

    static PyObject *t_FileDescriptor_sync(t_FileDescriptor *self)
    {
      OBJ_CALL(self->object.sync());
      Py_RETURN_NONE;
    }

    static PyObject *t_FileDescriptor_valid(t_FileDescriptor *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.valid());
      Py_RETURN_BOOL(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableSet::class$ = NULL;
    jmethodID *NavigableSet::mids$ = NULL;
    bool NavigableSet::live$ = false;

    jclass NavigableSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceiling_65d69db95c5eb156] = env->getMethodID(cls, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingIterator_834a3801c426326d] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_descendingSet_0617a74a450b6c8d] = env->getMethodID(cls, "descendingSet", "()Ljava/util/NavigableSet;");
        mids$[mid_floor_65d69db95c5eb156] = env->getMethodID(cls, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headSet_3ca4ace183d6efe9] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_headSet_b83c282998266525] = env->getMethodID(cls, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_higher_65d69db95c5eb156] = env->getMethodID(cls, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lower_65d69db95c5eb156] = env->getMethodID(cls, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_pollFirst_e661fe3ba2fafb22] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_e661fe3ba2fafb22] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_subSet_ba202d431ff51666] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_subSet_95b7fdef68d2eb53] = env->getMethodID(cls, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
        mids$[mid_tailSet_3ca4ace183d6efe9] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
        mids$[mid_tailSet_b83c282998266525] = env->getMethodID(cls, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NavigableSet::ceiling(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceiling_65d69db95c5eb156], a0.this$));
    }

    ::java::util::Iterator NavigableSet::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_834a3801c426326d]));
    }

    NavigableSet NavigableSet::descendingSet() const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingSet_0617a74a450b6c8d]));
    }

    ::java::lang::Object NavigableSet::floor(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floor_65d69db95c5eb156], a0.this$));
    }

    ::java::util::SortedSet NavigableSet::headSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_headSet_3ca4ace183d6efe9], a0.this$));
    }

    NavigableSet NavigableSet::headSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_headSet_b83c282998266525], a0.this$, a1));
    }

    ::java::lang::Object NavigableSet::higher(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higher_65d69db95c5eb156], a0.this$));
    }

    ::java::util::Iterator NavigableSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    ::java::lang::Object NavigableSet::lower(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lower_65d69db95c5eb156], a0.this$));
    }

    ::java::lang::Object NavigableSet::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_e661fe3ba2fafb22]));
    }

    ::java::lang::Object NavigableSet::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_e661fe3ba2fafb22]));
    }

    ::java::util::SortedSet NavigableSet::subSet(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_subSet_ba202d431ff51666], a0.this$, a1.this$));
    }

    NavigableSet NavigableSet::subSet(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_subSet_95b7fdef68d2eb53], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedSet NavigableSet::tailSet(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_tailSet_3ca4ace183d6efe9], a0.this$));
    }

    NavigableSet NavigableSet::tailSet(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableSet(env->callObjectMethod(this$, mids$[mid_tailSet_b83c282998266525], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self);
    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self);
    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg);
    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self);
    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self);
    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args);
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data);
    static PyGetSetDef t_NavigableSet__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableSet__methods_[] = {
      DECLARE_METHOD(t_NavigableSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, ceiling, METH_O),
      DECLARE_METHOD(t_NavigableSet, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, descendingSet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, floor, METH_O),
      DECLARE_METHOD(t_NavigableSet, headSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, higher, METH_O),
      DECLARE_METHOD(t_NavigableSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, lower, METH_O),
      DECLARE_METHOD(t_NavigableSet, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_NavigableSet, subSet, METH_VARARGS),
      DECLARE_METHOD(t_NavigableSet, tailSet, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableSet)[] = {
      { Py_tp_methods, t_NavigableSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_NavigableSet *)) get_generic_iterator< t_NavigableSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableSet)[] = {
      &PY_TYPE_DEF(::java::util::SortedSet),
      NULL
    };

    DEFINE_TYPE(NavigableSet, t_NavigableSet, NavigableSet);
    PyObject *t_NavigableSet::wrap_Object(const NavigableSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_NavigableSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_NavigableSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableSet *self = (t_NavigableSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_NavigableSet::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableSet), &PY_TYPE_DEF(NavigableSet), module, "NavigableSet", 0);
    }

    void t_NavigableSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "class_", make_descriptor(NavigableSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "wrapfn_", make_descriptor(t_NavigableSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableSet::initializeClass, 1)))
        return NULL;
      return t_NavigableSet::wrap_Object(NavigableSet(((t_NavigableSet *) arg)->object.this$));
    }
    static PyObject *t_NavigableSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableSet_of_(t_NavigableSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableSet_ceiling(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceiling(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceiling", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_descendingIterator(t_NavigableSet *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_descendingSet(t_NavigableSet *self)
    {
      NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingSet());
      return t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableSet_floor(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floor(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floor", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_headSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "headSet", args, 2);
    }

    static PyObject *t_NavigableSet_higher(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higher(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higher", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_iterator(t_NavigableSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_NavigableSet_lower(t_NavigableSet *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lower(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lower", arg);
      return NULL;
    }

    static PyObject *t_NavigableSet_pollFirst(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_pollLast(t_NavigableSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_NavigableSet_subSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subSet(a0, a1, a2, a3));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "subSet", args, 2);
    }

    static PyObject *t_NavigableSet_tailSet(t_NavigableSet *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedSet result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailSet(a0));
            return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableSet result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailSet(a0, a1));
            return t_NavigableSet::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableSet), (PyObject *) self, "tailSet", args, 2);
    }
    static PyObject *t_NavigableSet_get__parameters_(t_NavigableSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$Category.h"
#include "java/util/Locale$Category.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
        mids$[mid_valueOf_c0146482dbf3e8b3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;");
        mids$[mid_values_c2505f074bcc165b] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$Category;");

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
      return Locale$Category(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c0146482dbf3e8b3], a0.this$));
    }

    JArray< Locale$Category > Locale$Category::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$Category >(env->callStaticObjectMethod(cls, mids$[mid_values_c2505f074bcc165b]));
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
#include "java/lang/SecurityManager.h"
#include "java/lang/Thread.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ThreadGroup.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *SecurityManager::class$ = NULL;
    jmethodID *SecurityManager::mids$ = NULL;
    bool SecurityManager::live$ = false;

    jclass SecurityManager::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/SecurityManager");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_checkAccept_358501078068b45e] = env->getMethodID(cls, "checkAccept", "(Ljava/lang/String;I)V");
        mids$[mid_checkAccess_574f9dad62c353dc] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/Thread;)V");
        mids$[mid_checkAccess_84802e277a8287ee] = env->getMethodID(cls, "checkAccess", "(Ljava/lang/ThreadGroup;)V");
        mids$[mid_checkConnect_358501078068b45e] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;I)V");
        mids$[mid_checkConnect_094bd74fcac1628c] = env->getMethodID(cls, "checkConnect", "(Ljava/lang/String;ILjava/lang/Object;)V");
        mids$[mid_checkCreateClassLoader_0640e6acf969ed28] = env->getMethodID(cls, "checkCreateClassLoader", "()V");
        mids$[mid_checkDelete_f5ffdf29129ef90a] = env->getMethodID(cls, "checkDelete", "(Ljava/lang/String;)V");
        mids$[mid_checkExec_f5ffdf29129ef90a] = env->getMethodID(cls, "checkExec", "(Ljava/lang/String;)V");
        mids$[mid_checkExit_a3da1a935cb37f7b] = env->getMethodID(cls, "checkExit", "(I)V");
        mids$[mid_checkLink_f5ffdf29129ef90a] = env->getMethodID(cls, "checkLink", "(Ljava/lang/String;)V");
        mids$[mid_checkListen_a3da1a935cb37f7b] = env->getMethodID(cls, "checkListen", "(I)V");
        mids$[mid_checkPackageAccess_f5ffdf29129ef90a] = env->getMethodID(cls, "checkPackageAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkPackageDefinition_f5ffdf29129ef90a] = env->getMethodID(cls, "checkPackageDefinition", "(Ljava/lang/String;)V");
        mids$[mid_checkPrintJobAccess_0640e6acf969ed28] = env->getMethodID(cls, "checkPrintJobAccess", "()V");
        mids$[mid_checkPropertiesAccess_0640e6acf969ed28] = env->getMethodID(cls, "checkPropertiesAccess", "()V");
        mids$[mid_checkPropertyAccess_f5ffdf29129ef90a] = env->getMethodID(cls, "checkPropertyAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_0a1c60be3a779b3b] = env->getMethodID(cls, "checkRead", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkRead_f5ffdf29129ef90a] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;)V");
        mids$[mid_checkRead_53d92541fcec0ec7] = env->getMethodID(cls, "checkRead", "(Ljava/lang/String;Ljava/lang/Object;)V");
        mids$[mid_checkSecurityAccess_f5ffdf29129ef90a] = env->getMethodID(cls, "checkSecurityAccess", "(Ljava/lang/String;)V");
        mids$[mid_checkSetFactory_0640e6acf969ed28] = env->getMethodID(cls, "checkSetFactory", "()V");
        mids$[mid_checkWrite_0a1c60be3a779b3b] = env->getMethodID(cls, "checkWrite", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_checkWrite_f5ffdf29129ef90a] = env->getMethodID(cls, "checkWrite", "(Ljava/lang/String;)V");
        mids$[mid_getSecurityContext_e661fe3ba2fafb22] = env->getMethodID(cls, "getSecurityContext", "()Ljava/lang/Object;");
        mids$[mid_getThreadGroup_33ca5756bd56429e] = env->getMethodID(cls, "getThreadGroup", "()Ljava/lang/ThreadGroup;");
        mids$[mid_getClassContext_c988485cdace3d64] = env->getMethodID(cls, "getClassContext", "()[Ljava/lang/Class;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityManager::SecurityManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    void SecurityManager::checkAccept(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccept_358501078068b45e], a0.this$, a1);
    }

    void SecurityManager::checkAccess(const ::java::lang::Thread & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_574f9dad62c353dc], a0.this$);
    }

    void SecurityManager::checkAccess(const ::java::lang::ThreadGroup & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkAccess_84802e277a8287ee], a0.this$);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_358501078068b45e], a0.this$, a1);
    }

    void SecurityManager::checkConnect(const ::java::lang::String & a0, jint a1, const ::java::lang::Object & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_checkConnect_094bd74fcac1628c], a0.this$, a1, a2.this$);
    }

    void SecurityManager::checkCreateClassLoader() const
    {
      env->callVoidMethod(this$, mids$[mid_checkCreateClassLoader_0640e6acf969ed28]);
    }

    void SecurityManager::checkDelete(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkDelete_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkExec(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExec_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkExit(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkExit_a3da1a935cb37f7b], a0);
    }

    void SecurityManager::checkLink(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkLink_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkListen(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkListen_a3da1a935cb37f7b], a0);
    }

    void SecurityManager::checkPackageAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageAccess_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkPackageDefinition(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPackageDefinition_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkPrintJobAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPrintJobAccess_0640e6acf969ed28]);
    }

    void SecurityManager::checkPropertiesAccess() const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertiesAccess_0640e6acf969ed28]);
    }

    void SecurityManager::checkPropertyAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkPropertyAccess_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_0a1c60be3a779b3b], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkRead(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_checkRead_53d92541fcec0ec7], a0.this$, a1.this$);
    }

    void SecurityManager::checkSecurityAccess(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkSecurityAccess_f5ffdf29129ef90a], a0.this$);
    }

    void SecurityManager::checkSetFactory() const
    {
      env->callVoidMethod(this$, mids$[mid_checkSetFactory_0640e6acf969ed28]);
    }

    void SecurityManager::checkWrite(const ::java::io::FileDescriptor & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_0a1c60be3a779b3b], a0.this$);
    }

    void SecurityManager::checkWrite(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_checkWrite_f5ffdf29129ef90a], a0.this$);
    }

    ::java::lang::Object SecurityManager::getSecurityContext() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSecurityContext_e661fe3ba2fafb22]));
    }

    ::java::lang::ThreadGroup SecurityManager::getThreadGroup() const
    {
      return ::java::lang::ThreadGroup(env->callObjectMethod(this$, mids$[mid_getThreadGroup_33ca5756bd56429e]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_SecurityManager_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SecurityManager_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SecurityManager_init_(t_SecurityManager *self, PyObject *args, PyObject *kwds);
    static PyObject *t_SecurityManager_checkAccept(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkAccess(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkConnect(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkCreateClassLoader(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkDelete(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkExec(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkExit(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkLink(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkListen(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPackageAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPackageDefinition(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkPrintJobAccess(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkPropertiesAccess(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkPropertyAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkRead(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_checkSecurityAccess(t_SecurityManager *self, PyObject *arg);
    static PyObject *t_SecurityManager_checkSetFactory(t_SecurityManager *self);
    static PyObject *t_SecurityManager_checkWrite(t_SecurityManager *self, PyObject *args);
    static PyObject *t_SecurityManager_getSecurityContext(t_SecurityManager *self);
    static PyObject *t_SecurityManager_getThreadGroup(t_SecurityManager *self);
    static PyObject *t_SecurityManager_get__securityContext(t_SecurityManager *self, void *data);
    static PyObject *t_SecurityManager_get__threadGroup(t_SecurityManager *self, void *data);
    static PyGetSetDef t_SecurityManager__fields_[] = {
      DECLARE_GET_FIELD(t_SecurityManager, securityContext),
      DECLARE_GET_FIELD(t_SecurityManager, threadGroup),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_SecurityManager__methods_[] = {
      DECLARE_METHOD(t_SecurityManager, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityManager, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityManager, checkAccept, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkAccess, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkConnect, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkCreateClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkDelete, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkExec, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkExit, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkLink, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkListen, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPackageAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPackageDefinition, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkPrintJobAccess, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkPropertiesAccess, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkPropertyAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkRead, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, checkSecurityAccess, METH_O),
      DECLARE_METHOD(t_SecurityManager, checkSetFactory, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, checkWrite, METH_VARARGS),
      DECLARE_METHOD(t_SecurityManager, getSecurityContext, METH_NOARGS),
      DECLARE_METHOD(t_SecurityManager, getThreadGroup, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SecurityManager)[] = {
      { Py_tp_methods, t_SecurityManager__methods_ },
      { Py_tp_init, (void *) t_SecurityManager_init_ },
      { Py_tp_getset, t_SecurityManager__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SecurityManager)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(SecurityManager, t_SecurityManager, SecurityManager);

    void t_SecurityManager::install(PyObject *module)
    {
      installType(&PY_TYPE(SecurityManager), &PY_TYPE_DEF(SecurityManager), module, "SecurityManager", 0);
    }

    void t_SecurityManager::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "class_", make_descriptor(SecurityManager::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "wrapfn_", make_descriptor(t_SecurityManager::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityManager), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SecurityManager_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SecurityManager::initializeClass, 1)))
        return NULL;
      return t_SecurityManager::wrap_Object(SecurityManager(((t_SecurityManager *) arg)->object.this$));
    }
    static PyObject *t_SecurityManager_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SecurityManager::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SecurityManager_init_(t_SecurityManager *self, PyObject *args, PyObject *kwds)
    {
      SecurityManager object((jobject) NULL);

      INT_CALL(object = SecurityManager());
      self->object = object;

      return 0;
    }

    static PyObject *t_SecurityManager_checkAccept(t_SecurityManager *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      jint a1;

      if (!parseArgs(args, "sI", &a0, &a1))
      {
        OBJ_CALL(self->object.checkAccept(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkAccept", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkAccess(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Thread a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Thread::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkAccess(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::ThreadGroup a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ThreadGroup::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkAccess(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkAccess", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkConnect(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(self->object.checkConnect(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          ::java::lang::Object a2((jobject) NULL);

          if (!parseArgs(args, "sIo", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.checkConnect(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkConnect", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkCreateClassLoader(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkCreateClassLoader());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkDelete(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkDelete(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkDelete", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkExec(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkExec(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkExec", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkExit(t_SecurityManager *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.checkExit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkExit", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkLink(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkLink(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkLink", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkListen(t_SecurityManager *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.checkListen(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkListen", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPackageAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPackageAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPackageAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPackageDefinition(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPackageDefinition(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPackageDefinition", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkPrintJobAccess(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkPrintJobAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkPropertiesAccess(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkPropertiesAccess());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkPropertyAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkPropertyAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkPropertyAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkRead(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::FileDescriptor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkRead(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.checkRead(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(self->object.checkRead(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkRead", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkSecurityAccess(t_SecurityManager *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.checkSecurityAccess(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "checkSecurityAccess", arg);
      return NULL;
    }

    static PyObject *t_SecurityManager_checkSetFactory(t_SecurityManager *self)
    {
      OBJ_CALL(self->object.checkSetFactory());
      Py_RETURN_NONE;
    }

    static PyObject *t_SecurityManager_checkWrite(t_SecurityManager *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::FileDescriptor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkWrite(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(self->object.checkWrite(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "checkWrite", args);
      return NULL;
    }

    static PyObject *t_SecurityManager_getSecurityContext(t_SecurityManager *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSecurityContext());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_SecurityManager_getThreadGroup(t_SecurityManager *self)
    {
      ::java::lang::ThreadGroup result((jobject) NULL);
      OBJ_CALL(result = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(result);
    }

    static PyObject *t_SecurityManager_get__securityContext(t_SecurityManager *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSecurityContext());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_SecurityManager_get__threadGroup(t_SecurityManager *self, void *data)
    {
      ::java::lang::ThreadGroup value((jobject) NULL);
      OBJ_CALL(value = self->object.getThreadGroup());
      return ::java::lang::t_ThreadGroup::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Iterable.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Iterable::class$ = NULL;
    jmethodID *Iterable::mids$ = NULL;
    bool Iterable::live$ = false;

    jclass Iterable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Iterable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Iterable::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    ::java::util::Spliterator Iterable::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Iterable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Iterable_of_(t_Iterable *self, PyObject *args);
    static PyObject *t_Iterable_iterator(t_Iterable *self);
    static PyObject *t_Iterable_spliterator(t_Iterable *self);
    static PyObject *t_Iterable_get__parameters_(t_Iterable *self, void *data);
    static PyGetSetDef t_Iterable__fields_[] = {
      DECLARE_GET_FIELD(t_Iterable, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Iterable__methods_[] = {
      DECLARE_METHOD(t_Iterable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Iterable, of_, METH_VARARGS),
      DECLARE_METHOD(t_Iterable, iterator, METH_NOARGS),
      DECLARE_METHOD(t_Iterable, spliterator, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Iterable)[] = {
      { Py_tp_methods, t_Iterable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Iterable__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Iterable *)) get_generic_iterator< t_Iterable >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Iterable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Iterable, t_Iterable, Iterable);
    PyObject *t_Iterable::wrap_Object(const Iterable& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterable::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterable *self = (t_Iterable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Iterable::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Iterable::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Iterable *self = (t_Iterable *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Iterable::install(PyObject *module)
    {
      installType(&PY_TYPE(Iterable), &PY_TYPE_DEF(Iterable), module, "Iterable", 0);
    }

    void t_Iterable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterable), "class_", make_descriptor(Iterable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterable), "wrapfn_", make_descriptor(t_Iterable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Iterable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Iterable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Iterable::initializeClass, 1)))
        return NULL;
      return t_Iterable::wrap_Object(Iterable(((t_Iterable *) arg)->object.this$));
    }
    static PyObject *t_Iterable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Iterable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Iterable_of_(t_Iterable *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Iterable_iterator(t_Iterable *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.iterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Iterable_spliterator(t_Iterable *self)
    {
      ::java::util::Spliterator result((jobject) NULL);
      OBJ_CALL(result = self->object.spliterator());
      return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
    }
    static PyObject *t_Iterable_get__parameters_(t_Iterable *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *StringBuilder::class$ = NULL;
    jmethodID *StringBuilder::mids$ = NULL;
    bool StringBuilder::live$ = false;

    jclass StringBuilder::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/StringBuilder");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_01ce980d49cb2b81] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
        mids$[mid_append_4eb629a678a5438a] = env->getMethodID(cls, "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;");
        mids$[mid_append_67d31a10d1b66370] = env->getMethodID(cls, "append", "([C)Ljava/lang/StringBuilder;");
        mids$[mid_append_30a02fb062a53140] = env->getMethodID(cls, "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_append_b6592747f23042e1] = env->getMethodID(cls, "append", "(Z)Ljava/lang/StringBuilder;");
        mids$[mid_append_78d3e2bb2470d52d] = env->getMethodID(cls, "append", "(C)Ljava/lang/StringBuilder;");
        mids$[mid_append_d40b9c8372ccb999] = env->getMethodID(cls, "append", "(D)Ljava/lang/StringBuilder;");
        mids$[mid_append_8762ac7bc07ce051] = env->getMethodID(cls, "append", "(F)Ljava/lang/StringBuilder;");
        mids$[mid_append_04be543eea8e509a] = env->getMethodID(cls, "append", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_append_811f9a8f8f04c39b] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_append_70165461a3c2750f] = env->getMethodID(cls, "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_append_fe25195e2f981967] = env->getMethodID(cls, "append", "(J)Ljava/lang/StringBuilder;");
        mids$[mid_append_9b30b0538463bf3d] = env->getMethodID(cls, "append", "([CII)Ljava/lang/StringBuilder;");
        mids$[mid_append_5b56b9c4be3377cd] = env->getMethodID(cls, "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_appendCodePoint_04be543eea8e509a] = env->getMethodID(cls, "appendCodePoint", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_compareTo_8f6a446c021f2909] = env->getMethodID(cls, "compareTo", "(Ljava/lang/StringBuilder;)I");
        mids$[mid_delete_07f4d5e9eafd22d8] = env->getMethodID(cls, "delete", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_deleteCharAt_04be543eea8e509a] = env->getMethodID(cls, "deleteCharAt", "(I)Ljava/lang/StringBuilder;");
        mids$[mid_indexOf_a6602ba493f77974] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_insert_c20a6ee729f88f0f] = env->getMethodID(cls, "insert", "(I[C)Ljava/lang/StringBuilder;");
        mids$[mid_insert_88267049b2e6211c] = env->getMethodID(cls, "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_d575e604fc7eba28] = env->getMethodID(cls, "insert", "(IZ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_e498cd55f6c4096a] = env->getMethodID(cls, "insert", "(IC)Ljava/lang/StringBuilder;");
        mids$[mid_insert_9cd603b217a3b8d4] = env->getMethodID(cls, "insert", "(ID)Ljava/lang/StringBuilder;");
        mids$[mid_insert_348c227d1e03dc9c] = env->getMethodID(cls, "insert", "(IF)Ljava/lang/StringBuilder;");
        mids$[mid_insert_07f4d5e9eafd22d8] = env->getMethodID(cls, "insert", "(II)Ljava/lang/StringBuilder;");
        mids$[mid_insert_9d88889b6a25a3b9] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_63aa9eb5dd471294] = env->getMethodID(cls, "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;");
        mids$[mid_insert_971841535d646fd5] = env->getMethodID(cls, "insert", "(IJ)Ljava/lang/StringBuilder;");
        mids$[mid_insert_7ebb45d7a6dc031e] = env->getMethodID(cls, "insert", "(I[CII)Ljava/lang/StringBuilder;");
        mids$[mid_insert_bdd302e6c0e10dc9] = env->getMethodID(cls, "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;");
        mids$[mid_lastIndexOf_a6602ba493f77974] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_f5fd9af3faa747d5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_replace_a09ebe03c050a311] = env->getMethodID(cls, "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;");
        mids$[mid_reverse_42f76bd4b2671584] = env->getMethodID(cls, "reverse", "()Ljava/lang/StringBuilder;");
        mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringBuilder::StringBuilder() : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    StringBuilder::StringBuilder(const ::java::lang::String & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    StringBuilder::StringBuilder(jint a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    StringBuilder::StringBuilder(const ::java::lang::CharSequence & a0) : ::java::lang::AbstractStringBuilder(env->newObject(initializeClass, &mids$, mid_init$_01ce980d49cb2b81, a0.this$)) {}

    StringBuilder StringBuilder::append(const ::java::lang::StringBuffer & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_4eb629a678a5438a], a0.this$));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_67d31a10d1b66370], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::String & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_30a02fb062a53140], a0.this$));
    }

    StringBuilder StringBuilder::append(jboolean a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_b6592747f23042e1], a0));
    }

    StringBuilder StringBuilder::append(jchar a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_78d3e2bb2470d52d], a0));
    }

    StringBuilder StringBuilder::append(jdouble a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_d40b9c8372ccb999], a0));
    }

    StringBuilder StringBuilder::append(jfloat a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_8762ac7bc07ce051], a0));
    }

    StringBuilder StringBuilder::append(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_04be543eea8e509a], a0));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_811f9a8f8f04c39b], a0.this$));
    }

    StringBuilder StringBuilder::append(const ::java::lang::Object & a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_70165461a3c2750f], a0.this$));
    }

    StringBuilder StringBuilder::append(jlong a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_fe25195e2f981967], a0));
    }

    StringBuilder StringBuilder::append(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_9b30b0538463bf3d], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::append(const ::java::lang::CharSequence & a0, jint a1, jint a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_append_5b56b9c4be3377cd], a0.this$, a1, a2));
    }

    StringBuilder StringBuilder::appendCodePoint(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_appendCodePoint_04be543eea8e509a], a0));
    }

    jint StringBuilder::compareTo(const StringBuilder & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_8f6a446c021f2909], a0.this$);
    }

    StringBuilder StringBuilder::delete$(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_delete_07f4d5e9eafd22d8], a0, a1));
    }

    StringBuilder StringBuilder::deleteCharAt(jint a0) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_deleteCharAt_04be543eea8e509a], a0));
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_a6602ba493f77974], a0.this$);
    }

    jint StringBuilder::indexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_c20a6ee729f88f0f], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::String & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_88267049b2e6211c], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jboolean a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_d575e604fc7eba28], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jchar a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_e498cd55f6c4096a], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jdouble a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_9cd603b217a3b8d4], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jfloat a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_348c227d1e03dc9c], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, jint a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_07f4d5e9eafd22d8], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_9d88889b6a25a3b9], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::Object & a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_63aa9eb5dd471294], a0, a1.this$));
    }

    StringBuilder StringBuilder::insert(jint a0, jlong a1) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_971841535d646fd5], a0, a1));
    }

    StringBuilder StringBuilder::insert(jint a0, const JArray< jchar > & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_7ebb45d7a6dc031e], a0, a1.this$, a2, a3));
    }

    StringBuilder StringBuilder::insert(jint a0, const ::java::lang::CharSequence & a1, jint a2, jint a3) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_insert_bdd302e6c0e10dc9], a0, a1.this$, a2, a3));
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_a6602ba493f77974], a0.this$);
    }

    jint StringBuilder::lastIndexOf(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f5fd9af3faa747d5], a0.this$, a1);
    }

    StringBuilder StringBuilder::replace(jint a0, jint a1, const ::java::lang::String & a2) const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_replace_a09ebe03c050a311], a0, a1, a2.this$));
    }

    StringBuilder StringBuilder::reverse() const
    {
      return StringBuilder(env->callObjectMethod(this$, mids$[mid_reverse_42f76bd4b2671584]));
    }

    ::java::lang::String StringBuilder::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_StringBuilder_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringBuilder_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringBuilder_init_(t_StringBuilder *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringBuilder_append(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_appendCodePoint(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_compareTo(t_StringBuilder *self, PyObject *arg);
    static PyObject *t_StringBuilder_delete(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_deleteCharAt(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_indexOf(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_insert(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_lastIndexOf(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_replace(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_reverse(t_StringBuilder *self, PyObject *args);
    static PyObject *t_StringBuilder_toString(t_StringBuilder *self, PyObject *args);

    static PyMethodDef t_StringBuilder__methods_[] = {
      DECLARE_METHOD(t_StringBuilder, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuilder, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringBuilder, append, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, appendCodePoint, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, compareTo, METH_O),
      DECLARE_METHOD(t_StringBuilder, delete, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, deleteCharAt, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, insert, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, replace, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, reverse, METH_VARARGS),
      DECLARE_METHOD(t_StringBuilder, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringBuilder)[] = {
      { Py_tp_methods, t_StringBuilder__methods_ },
      { Py_tp_init, (void *) t_StringBuilder_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringBuilder)[] = {
      &PY_TYPE_DEF(::java::lang::AbstractStringBuilder),
      NULL
    };

    DEFINE_TYPE(StringBuilder, t_StringBuilder, StringBuilder);

    void t_StringBuilder::install(PyObject *module)
    {
      installType(&PY_TYPE(StringBuilder), &PY_TYPE_DEF(StringBuilder), module, "StringBuilder", 0);
    }

    void t_StringBuilder::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuilder), "class_", make_descriptor(StringBuilder::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuilder), "wrapfn_", make_descriptor(t_StringBuilder::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringBuilder), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringBuilder_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringBuilder::initializeClass, 1)))
        return NULL;
      return t_StringBuilder::wrap_Object(StringBuilder(((t_StringBuilder *) arg)->object.this$));
    }
    static PyObject *t_StringBuilder_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringBuilder::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringBuilder_init_(t_StringBuilder *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          StringBuilder object((jobject) NULL);

          INT_CALL(object = StringBuilder());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuilder object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = StringBuilder(a0));
            self->object = object;
            break;
          }
        }
        {
          jint a0;
          StringBuilder object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = StringBuilder(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuilder object((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            INT_CALL(object = StringBuilder(a0));
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

    static PyObject *t_StringBuilder_append(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jchar a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jlong a0;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.append(a0));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "OII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.append(a0, a1, a2));
            return t_StringBuilder::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "append", args, 2);
    }

    static PyObject *t_StringBuilder_appendCodePoint(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.appendCodePoint(a0));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "appendCodePoint", args, 2);
    }

    static PyObject *t_StringBuilder_compareTo(t_StringBuilder *self, PyObject *arg)
    {
      StringBuilder a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "k", StringBuilder::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_StringBuilder_delete(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.delete$(a0, a1));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "delete", args, 2);
    }

    static PyObject *t_StringBuilder_deleteCharAt(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.deleteCharAt(a0));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "deleteCharAt", args, 2);
    }

    static PyObject *t_StringBuilder_indexOf(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
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
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "indexOf", args, 2);
    }

    static PyObject *t_StringBuilder_insert(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I[C", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::String a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Is", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jboolean a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jchar a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jdouble a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jfloat a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jint a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IO", ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "Io", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          jlong a1;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.insert(a0, a1));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jint a0;
          JArray< jchar > a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "I[CII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuilder::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::java::lang::CharSequence a1((jobject) NULL);
          jint a2;
          jint a3;
          StringBuilder result((jobject) NULL);

          if (!parseArgs(args, "IOII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.insert(a0, a1, a2, a3));
            return t_StringBuilder::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "insert", args, 2);
    }

    static PyObject *t_StringBuilder_lastIndexOf(t_StringBuilder *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
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
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "lastIndexOf", args, 2);
    }

    static PyObject *t_StringBuilder_replace(t_StringBuilder *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::String a2((jobject) NULL);
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, "IIs", &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.replace(a0, a1, a2));
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_StringBuilder_reverse(t_StringBuilder *self, PyObject *args)
    {
      StringBuilder result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reverse());
        return t_StringBuilder::wrap_Object(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "reverse", args, 2);
    }

    static PyObject *t_StringBuilder_toString(t_StringBuilder *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(StringBuilder), (PyObject *) self, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Runnable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Runnable::class$ = NULL;
    jmethodID *Runnable::mids$ = NULL;
    bool Runnable::live$ = false;

    jclass Runnable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Runnable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_run_0640e6acf969ed28] = env->getMethodID(cls, "run", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Runnable::run() const
    {
      env->callVoidMethod(this$, mids$[mid_run_0640e6acf969ed28]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Runnable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Runnable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Runnable_run(t_Runnable *self);

    static PyMethodDef t_Runnable__methods_[] = {
      DECLARE_METHOD(t_Runnable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Runnable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Runnable, run, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Runnable)[] = {
      { Py_tp_methods, t_Runnable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Runnable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Runnable, t_Runnable, Runnable);

    void t_Runnable::install(PyObject *module)
    {
      installType(&PY_TYPE(Runnable), &PY_TYPE_DEF(Runnable), module, "Runnable", 0);
    }

    void t_Runnable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Runnable), "class_", make_descriptor(Runnable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Runnable), "wrapfn_", make_descriptor(t_Runnable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Runnable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Runnable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Runnable::initializeClass, 1)))
        return NULL;
      return t_Runnable::wrap_Object(Runnable(((t_Runnable *) arg)->object.this$));
    }
    static PyObject *t_Runnable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Runnable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Runnable_run(t_Runnable *self)
    {
      OBJ_CALL(self->object.run());
      Py_RETURN_NONE;
    }
  }
}
